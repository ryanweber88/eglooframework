<?php
namespace eGloo\Domain\Utility;

use \eGloo\Domain;

/**
 * The purpose of empty set is to provide a dynamically expanding array that
 * always returns an instance of model, if current offset is not set
 */
class EmptySet implements \ArrayAccess {
	
	/**
	 * Takes a fully-qualified class name (including namespace) which
	 * is used as template of sorts of initialization
	 * @param String $model
	 */
	function __construct($model) {
		// set our model type; think of this as templated collection
		// in c++, where array values may only be of passed
		// in type
		$this->model = $model;
	}
	
	public function offsetExists($offset) {
		return isset($this->container[$offset]);
	}
	
	public function offsetGet($offset) {
		if (!isset($this->container[$offset])) {
			$this->container[$offset] = new $this->model;
		}		
		
		return $this->container[$offset];
	}
	
	public function offsetSet($offset, $value) {
		$this->container[$offset] = $value;
	}
	
	public function offsetUnset($offset) {
		unset($this->container);
	}
	
	private $model;
	private $container = array();
}