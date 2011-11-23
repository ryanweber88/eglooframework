<?php
namespace eGloo\Dialect;

/**
 * 
 * Similar in scope to ruby's Singleton Class; this is a class that represents
 * a single instance
 * @author Christian Calloway
 *
 */
class Singleton extends Object { 
	
	function __construct($instance) { 
		//parent::__construct();

		// define class for singleton statically - this cannot be
		// done in object as it would create an infinite loop
		if (is_null(static::$class)) {
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
	
	
	protected $id;
	protected $instance;
	protected $methods = [ ];
	protected static $class;
}