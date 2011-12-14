<?php
namespace eGloo\Utilities;

trait SingletonTrait {

	final public static function &instance() { 
		if (!isset(static::$instance)) {
			static::$instance = new static;	
		}
		
		return static::$instance;
	}
	
    protected static $instance;
}