<?php
use \eGloo\Dialect\ObjectSafe as Object;
use \eGloo\Performance\Caching;

/**
 * Interface/access to system level resources.. 
 * @author Christian Calloway
 */
class eGloo extends Object 
	implements \ArrayAccess {
		
	static function __static() {
		//static::$cache = new Caching\Cache;
	}
	
	/** ArrayAccess interface methods *****************/
	// ArrayAccess interface methods are used as a DIC
	// for loading instances and performing a bit of transparent
	// magic - normally we should delegate this functionality
	// to its own class, but we would be unable to use array
	// notation
	
	public function offsetGet($offset) {
		return $offset;
	}
	
	public function offsetSet($offset, $value) {
		
	}
	
	public function offsetExists($offset) {
		
	}
	
	public function offsetUnset($offset) {
		
	}
	
	protected static $cache;
}