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
		// make sure we are receiving an instance
		if (is_object($object)) { 
			parent::__construct();
					
			// this is the object to which we are delegated TO
			$this->delegated = $object;
		}
		
		else { 
			throw new \Exception(
				"Constructor argument must be an instance/object - received $object"		
			);
		}
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
		$self = $this;
		// throw result into an "instance" cache - this way, multiple calls
		// made to the same member property/method within a template for
		// example will only have to execute an expensive routine once
		//echo "caching for $member<br />";
		return $this->cache($member, function() use ($self, $member) {
			//echo "in cache for $member"; 
			$delegated = &$self->reference('delegated');
			
			// first lets check if the member is indeed valid
				
			// if property is valid, it will takes precedence - deal with
			// it buddy
			if (\property_exists($delegated, $member)) {
				$reflection = new \ReflectionProperty($delegated, $member);
				$result     = $reflection->isStatic()
					? $delegated::$$member
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
					? $delegated::$$member()
					: $delegated->$member();
				
				
			}
			
			// check if we are dealing with an object that uses array notation;
			// if this is the case, we'll have to check against its offsetGet
			// method for a result
			else if ($delegated instanceof \ArrayAccess) {
				if (isset($delegated[$member])) {
					$result = $delegated[$member];
				}
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
						echo $delegated->title();
						$result = $delegated->$member();
					}
					catch (\Exception $ignore) {
						$result = null;
					}
				}
								
				if (!$result && \method_exists($delegated, '__callstatic')) {
					try {
						$result = $delegated::$$member();
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
				
				//exit('here');

				// if result is an object, wrap within ArrayAccess (or a class that extends)
				// creating "recursive" access to object space - this allows for treating
				// multiple-objects as multi-dimensional arrays
				return is_object($result) 
					? new $self($result)
					: $result;
				
				
			}
			
			// if we have reached this point, we have attempted access on a member that
			// simply doesn't exist or lives in protected/private scope
			throw new \Exception(
				"Unable to access $member for instance of class-type " . get_class($delegated)
			);
			
		});
	}
	
	public function offsetSet($property, $value) {
		return $this->delegated->$$property = $value;
	}
	
	public function offsetExists($property) {
		return property_exists($this->delegated, $property);
	}
	
	public function offsetUnset($property) {
		unset($this->delegated->$$property);
	}
	
	protected $delegated;
}