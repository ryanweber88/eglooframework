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
		
		throw new \eGloo\Dialect\Exception(
			'Illegal argument exception : parameter passed to create was '.
			'neither an instance of Object or an array'
		);
	}
	
	public function offsetGet($member) {
		// if offset actually reflects an object method, then we call 
		// method on object - this will currently not work in instances
		// where parameters are needed; if that were to be the case,
		// the argument would be that there is a fatal design flaw
		if (method_exists($this->wrapped, $member)) {
			
			// if result from receiver is an object; we wrap that result
			// in ArrayAccess - allowing for recursive access to our
			// properties and for the natural syntax of multidimensional
			// array notation
			if (is_object($result = $this->wrapped->$member())) {
				$result = new static($result);
			}
			
			return $result;
		}
		
		return $this->wrapped->$property;
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