<?php
namespace eGloo\Utilities;

// @TODO replace_object_safe
use \eGloo\Dialect\ObjectSafe as Object;

/**
 *  Provides proxying to wrapped instance via call & callstatic
 */
abstract class Delegator extends Object {

	function __construct($delegated) {
		parent::__construct();
		
		$this->delegated = $delegated;
	}
	
	/**
	 * Determines if method exists on delegated and call at instance level
	 * if the case
	 */
	public function __call($name, $arguments) {
		
		// we reverse the order of __call hierarchy, and first
		// attempt to find a match on parent::__call (we do not
		// want methods within delegated to take precedence)
		try {
			return parent::__call($name, $arguments);
		}
		
		// we will hold our exception for usage later
		catch(\Exception $hold) { }
		
		// create an instancer of Caller so we can determine
		// origin or caller context
		$caller = static::caller();
		
		// since php cannot make a determination between instance/static
		// receiver when called from an instance context, we have
		// to manually pass call to our callstatic dump
		if ($caller->isReceivedStatically()) {
			return static::__callstatic($name, $arguments);
		}

		
		if (!is_null($this->delegated) && method_exists($this->delegated, $name)) {

			return call_user_func_array(
					array($this->delegated, $name), $arguments	
			);
		}
				
		
		// throw exception generated by parent if we have reached this point
		throw $hold;
		//throw new \Exception(
		//	"Unable to delegate instance method $name to receiver "	. get_class($this->delegated)	
		//);
	}
	
	/**
	 * Determines if static method exists on delegated and call on class
	 * scope
	 */
	public static function __callstatic($name, $arguments) {
		
		echo "calling $name on delegator\n";
		
		try { 
			return parent::__callstatic($name, $arguments);
		}
		
		catch(\Exception $hold) { }

		if (isset(static::$associated[$class = get_called_class()]) && 
			 (method_exists($delegated = static::$associated[$class], $name) ||
			 isset(static::$_methodsStatic[$class][$name]))) {
			
			return call_user_func_array(
				"$delegated::$name", $arguments	
			);
		}
		
		// throw exception generated by parent callstatic
		throw $hold;
	
		// defer to parent if not able to delegate
		//return parent::__callstatic($name, $arguments);
	}
	
	/**
	 * Provides a way to statically associate proxies
	 */
	public static function delegate($from, $to) {
		static::$associated[$from] = $to;
	}
	
	
	
	protected $delegated;
	protected static $associated = array();
}