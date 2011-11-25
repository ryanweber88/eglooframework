<?php
namespace eGloo\Dialect;

/**
 * 
 * Similar in scope to ruby's Singleton Class; this is a class that represents
 * a single instance
 * Due to PHP related issue of assigning reference in magic function calls - 
 * Singleton properties must be public and it's call/get/set method body
 * must be null (in order to override object method)
 * @author Christian Calloway
 *
 */
use eGloo\Utilities\instance;

class Singleton extends Object { 
	
	function __construct($instance) { 
		//parent::__construct();

		// define class for singleton statically - this cannot be
		// done in object as it would create an infinite loop
		if (is_null(static::$class) && !($this instanceof _Class)) {
			static::$class = new _Class($this);
		}

		$this->_class   = static::$class;
		$this->id       = spl_object_hash($instance);
		$this->instance = $instance;
			
	}
	

	public function defineMethod($name, callable $lambda) {
		// defines static methods across class hierarchy
		if (is_callable($lambda)) {
			$this->methods[$name] = $lambda;
			
			return $lambda;
		}
		
		throw new DDL\Exception\Exception(
			'Illegal argument exception : parameter ' . 
		    'must be of type lambda'
		);
	}
	
	
	public function __toString() {
		return $this->id;
	}
	
	/**
	 * Overrides object call, as singleton innately provides public access to all 
	 * of its properties
	 */
	public function __call($name, $arguments) { }
	public function __get($name) { }
	public function __set($name, $value) { }
	
	
	public $id;
	public $instance;
	public $methods = [ ];
	public static $class;
}