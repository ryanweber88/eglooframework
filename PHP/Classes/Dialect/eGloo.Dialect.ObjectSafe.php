<?php 
namespace eGloo\Dialect;

/**
 * Essentially stubb class for superclass Object, which has been written to 5.4
 * standards
 * @author Christian Calloway callowaylc@gmail.com
 */
class ObjectSafe {
	
	/**
	 * Aliases to Singleton trait - will be replaced with 5.4
	 */
	public static function instance($arguments = null) {
		if (is_null(static::$_singleton)) {
			$reflection = new \ReflectionClass(
				get_called_class()
			);
			
			try {
				return $reflection->newInstance($arguments);
			}
			catch(\Exception $toCaller) {
				throw $toCaller;
			}
		}
	}
	
	/**
	 * Used to determine methods caller - same idea as javascript's "caller";
	 * this should be used sparingly, as a debug_backtrace can be expensive
	 */
	public static function caller() {
	
		// use backtrace to determine caller - we have to backtrace twice as
		// we are not looking for caller of this method, but the caller of
		// where this method is called (a little confusing?)
		$trace  = debug_backtrace();
		$caller = array_shift($caller = array_shift(
				$trace
		));
	
		return new \eGloo\Utilities\Caller($caller);
	}	
	
	/**
	 * Experiment - the purpose is provide one interface for accessing __call &
	 * __callstatic, but I don;t know how to at the moment
	 */
	public function methodMissing($name, $arguments, $static = false) {
		
	}
	
	/**
	 * Stub call - needed because it assumed all classes on Objet hierarchy
	 * have a fallback to method missing
	 */
	public function __call($name, $arguments) { 
		
		// magic
		
		// this will die UNGRACEFULLY if method does not exist
		// (intended behavior)
		trigger_error(
			"Call to undefined method $name on " . get_class($this), E_USER_ERROR
		);
		
	}
	
	public static function __callstatic($name, $arguments) { 
		
		// magic 
		
		// this will die UNGRACEFULLY if method does not exist
		// (intended behavior)		
		trigger_error(
				"Call to undefined method $name on " . get_called_class(), E_USER_ERROR
		);		
	}
	

	
	protected static $_singleton;
}