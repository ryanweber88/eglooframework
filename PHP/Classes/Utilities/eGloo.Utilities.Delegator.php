<?php
namespace eGloo\Utilities;

// @TODO replace_object_safe
use \eGloo\Dialect\ObjectSafe as Object;

/**
 *  Provides proxying to wrapped instance via call & callstatic
 */
class Delegator extends Object {

	function __construct($delegated) {
		$this->delegated = $delegated;

		// for static delegation, we will be have to create association between
		// calling class delegated class		
		if (!isset(static::$delegatedNames[$class = get_class($this)])) {
			static::$delegatedNames[$class] = get_class($delegated);
		}
	}
	
	/**
	 * Determines if method exists on delegated and call at instance level
	 * if the case
	 */
	public function __call($name, $arguments) {
		
		if (!is_null($this->delegated) && method_exists($this->delegated, $name)) {
			return call_user_func_array(
					array($this->delegated, $name), $arguments	
			);
		}
		
		// defer to parent if not able to delegate
		return parent::__call($name, $arguments);
	}
	
	/**
	 * Determines if static method exists on delegated and call on class
	 * level
	 */
	public static function __callstatic($name, $arguments) {
		
		if (isset(static::$delegatedNames[$class = get_called_class()]) && 
				method_exists($delegated = static::$delegatedNames[$class], $name)) {
			
			return call_user_func_array(
				array($delegated, $name), $arguments	
			);
		}
	
		// defer to parent if not able to delegate
		return parent::__callstatic($name, $arguments);
	}
	
	protected $delegated;
	protected static $delegatedNames = array();
}