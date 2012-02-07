<?php
namespace eGloo\Utilities;

// @TODO replace_object_safe
use \eGloo\Dialect\ObjectSafe as Object;

/**
 * Not completely thought out yet - provides simplified interface
 * to backtrace; represents a caller on a method 
 */
class Caller extends Object {
	
	function __construct(array $hash) {
		$this->collection = $hash;
	}
	
	public function __toString() {
		return $this->collection['function'];
	}
	
	protected $collection;
	
}