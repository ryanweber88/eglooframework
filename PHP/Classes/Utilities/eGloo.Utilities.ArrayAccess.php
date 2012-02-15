<?php
namespace eGloo\Utilities;

use \eGloo\Dialect\ObjectSafe as Object;

/**
 * 
 * Provides an implemented interface of ArrayAccess to all
 * descendants of global object; does not error check/catch exceptions
 * for existence of properties 
 * @author Christian Calloway
 *
 */
class ArrayAccess extends Object implements \ArrayAccess {
	
	function __construct($object) {
		$this->wrapped = $object;
	}
	
	/**
	 * 
	 * Provides a convenience method to instantiate a new
	 * ArrayAccess instance, or return array if mixed is
	 * an array
	 * @param  mixed $mixed
	 * @return ArrayAccess | mixed[]
	 */
	public static function create($mixed) {
		if (is_object($mixed)) {
			return new ArrayAccess($mixed);
		}
		
		else if (is_array($mixed)) {
			return $mixed;
		}
		
		throw new \Exception(
			'Argument must be an object or array'
		);
	}
	
	public function offsetGet($member) {
		
		// @TODO results below needs to cached
		$delegated = &$this->wrapped;
		
		// first lets check if the member is indeed valid
			
		// if property is valid, it will takes precedence - deal with
		// it buddy
		if (\property_exists($delegated, $member)) {
			$reflection = new \ReflectionProperty($delegated, $member);
			$result     = $reflection->isStatic()
				? $delegated::$member
				: $delegated->$member;
		}
			
		// if offset actually reflects an object method, then we call 
		// method on object - this will currently not work in instances
		// where parameters are needed; if that were to be the case,
		// the argument would be that there is a fatal design flaw
		else if (\method_exists($delegated, $member)) {
			
			// check if class/instance member 
			$reflection = new \ReflectionMethod($delegated, $member);
			$result     = $reflection->isStatic()
				? $delegated::$member()
				: $delegated->$member();
		}

		// else we check our magic calls, if any - any exceptions will be caught 
		// and ignored, as we can safely conclude that those were failures 
		else {

			
			// check our accessor catch all
			if (\method_exists($delegated, '__get')) {
				try {
					$result = $delegated->$member;
				}
				catch (\Exception $ignore) { 
					$result = null;
				}
			}
			
			if (!$result && \method_exists($delegated, '__call')) {
				try {
					$result = $delegated->$member();
				}
				catch (\Exception $ignore) {
					$result = null;
				}
			}
			
			if (!$result && \method_exists($delegated, '__callstatic')) {
				try {
					$result = $delegated->$member();
				}
				catch (\Exception $ignore) {
					$result = null;
				}
			}			
			
		}
		
		// finally check to see if result is valid, which is
		// determined ONLY if result is NOT null - false is a 
		// valid value, as that may be the result we are looking for
		if (!is_null($result)) {
			
			// if result is an object, wrap within ArrayAccess (or a class that extends)
			// creating "recursive" access to object space - this allows for treating
			// multiple-objects as multi-dimensional arrays
			return is_object($result) 
				? new static($result)
				: $result;
			
			
		}
		
		
		// if we have reached this point, we have attempted access on a member that
		// simply doesn't exist or lives in protected/private scope
		throw new \Exception(
			"Unable to access $member for instance of class-type " . get_class($this->wrapper)
		);
	}
	
	public function offsetSet($property, $value) {
		return $this->wrapped->$property = $value;
	}
	
	public function offsetExists($property) {
		return $this->wrapped->propertyExists($property);
	}
	
	public function offsetUnset($property) {
		unset($this->wrapped->$property);
	}
	
	protected $wrapped;
}