<?php
namespace eGloo\Utilities;

use \eGloo\Dialect\Object;

/**
 * 
 * Provides an implemented interface of ArrayAccess to all
 * descendants of global object; does not error check/catch exceptions
 * for existence of properties 
 * @author Christian Calloway
 *
 */
class ArrayAccess extends Object implements \ArrayAccess {
	
	function __construct(Object $object) {
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
	
	public function offsetGet($property) {
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