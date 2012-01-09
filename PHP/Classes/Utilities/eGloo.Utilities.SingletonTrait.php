<?php
namespace eGloo\Utilities;

trait SingletonTrait {
	
	public function initializeSingletonTrait($instance) {
		static::$instance = $instance;
	}

	final public static function &instance() { 
		if (!isset(static::$instance)) {
			static::$instance = new static;	
		}
		
		return static::$instance;
	}
	
    protected static $instance;
}