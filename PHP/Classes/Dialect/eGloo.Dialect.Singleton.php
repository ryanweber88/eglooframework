<?php
namespace eGloo\Dialect;

/**
 * 
 * Similar in scope to ruby's Singleton Class; this is a class that represents
 * a single instance
 * @author Christian Calloway
 *
 */
class Singleton extends Object implements MetaInterface { 
	
	function __construct($instance) { 
		parent::__construct();
		
		$this->id       = spl_object_hash($instance);
		$this->instance = $instance;
	}
	

	public function defineMethod($name, $lambda) {
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
	
	public function method($name) { 
		return isset($this->methods[$name])
			? $this->methods[$name]
			: false;
	}
	
	public function __toString() {
		return $this->id;
	}
	
	
	protected $id;
	protected $instance;
	protected $methods = [ ];
}