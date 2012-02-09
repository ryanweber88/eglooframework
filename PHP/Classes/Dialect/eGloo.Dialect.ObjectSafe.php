<?php 
namespace eGloo\Dialect;

/**
 * Essentially stubb class for superclass Object, which has been written to 5.4
 * standards
 * @author Christian Calloway callowaylc@gmail.com
 */
abstract class ObjectSafe {
	
	function __construct() {
		
		// fire our alias properties and methods
		$this->aliasMethods();
		$this->aliasProperties();
	}
	
	/**
	 * Provides an idea of a static constructor - will have to be explicitly called from
	 * autoloader and overriden in descendant classes
	 */
	static function __constructStatic() { 
		
		
		static::aliasMethodsStatic();
	}
	
	// These are stubs but called by the constructor - so as they
	// can be used inherited classes
	protected function aliasMethods()    { }
	protected function aliasProperties() { }
	
	/**
	 * Aliases a method on call/callstatic
	 */
	protected function aliasMethod($alias, $from) {
		
		if (method_exists($this, $from)) { 
			
			if (!method_exists($this, $alias)) {
				// use lambda/block to place method alias method definition into 
				// this instance "singleton" or eigenclass 
				$this->defineMethod($alias, function($__mixed = null) { 
					// call original method
					return call_user_func_array(array(
							$this, $from
					),  $__mixed); 
				});
			}
			
			throw new \Exception(
				"Attempted alias on $alias failed because it already exists as method on instance"		
			);
		}
		
		throw new \Exception(
			"Attempting an alias on method $from which does not exist"		
		);
	}
	
	protected function aliasMethodStatic($alias, $from) {
		$class = get_called_class();
		
		if (method_exists($class, $from)) { 
			
			if (!method_exists($class, $alias)) {
				// use lambda/block to place method alias method definition into 
				// this instance "singleton" or eigenclass 
				static::defineMethodStatic($alias, function($__mixed = null) { 
					// call original method
					return call_user_func_array(array(
							$class, $from
					),  $__mixed); 
				});
			}
			
			throw new \Exception(
				"Attempted alias on $alias failed because it already exists as method on class"		
			);
		}
		
		throw new \Exception(
			"Attempting an alias on method $from which does not exist"		
		);
	}
	
	/**
	 * Aliases a property using reference; does not check on property existence
	 * and will be affected by get/set definition
	 */
	protected function aliasProperty($alias, $from) {
		if (!property_exists($this, $alias)) { 
			$this->$alias = &$this->$from;
			return $this;
		}
		
		throw new \Exception(
			"Attempted alias on $alias failed because it already exists as a property on this instance"		
		);
	}
	
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
	
	protected function defineMethod($name, $lambda) {
		$this->_methods[$name] = $lambda;
	} 
	
	protected static function defineMethodStatic($name, $lambda) {
		$this->_methodsStatic[get_called_class()][$name] = $lambda;
	}
	
	/**
	 * Used to determine methods caller - same idea as javascript's "caller";
	 * this should be used sparingly, as a debug_backtrace can be expensive
	 */
	public static function caller() {
	
		// use backtrace to determine caller
		$trace  = debug_backtrace();
		
		// wrap in caller instance, which should provide convenience methods 
		// for dealing with caller
		return new \eGloo\Utilities\Caller($trace[1]);
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
		
		
		// first check dynamically defined methods and fire if match
		if (isset($this->_methods[$name])) {
			return call_user_func_array(
				$this->methods[$name], $arguments	
			);
		}
		
		// manage dynamically defined methods 
		
		
		
		// this will die UNGRACEFULLY if method does not exist
		// (intended behavior)
		trigger_error(
			"Call to undefined method \"$name\" on " . get_class($this), E_USER_ERROR
		);
		
	}
	
	public static function __callstatic($name, $arguments) { 
		
		// check against dynamically defined methods 
		// @TODO we need a way to call this all within one method 
		// regardless of fucking context
		if (isset(static::$_methods[get_called_class()][$name])) {
			call_user_func_array(
				static::$_methods[get_called_class()][$name], $arguments	
			);
		}
		
		// specifc methods - here we define static methods that may
		// have the same signature as instance methods; we do this
		// so we can have the same interface to those methods,
		// regardless of receiver/caller
		// @TODO place into trait

		// here we are going to use reflection to receive list of methods
		// @TODO place into static container
		/*
		$reflection = new \ReflectionClass($class = get_called_class());
		
		foreach ($reflection->getMethods(\ReflectionMethod::IS_STATIC) as $method) {
			
			// see if our static call to main matches against __call static method
			// pattern, if so, dynamically invoke method and pass in arguments
			if ($name == lcfirst(str_replace('__call', $method->getName()))) {
				return $method->invokeArgs(null, $arguments);
			}
		}
		*/
		
		// magic - here we define dynamic calls on existing properties and methods
		// such as $this->$property_like(regexp)
		
		
		// this will die UNGRACEFULLY if method does not exist
		// (intended behavior)		
		trigger_error(
				"Call to undefined method \"$name\" on " . get_called_class(), E_USER_ERROR
		);		
	}
	
	protected static function __callAliasMethod($alias, $from) {
		// this method is not intended to ever be directly invoked, but
		// called from our __callstatic meta method - the point is
		// to provide aliasMethod functionality from static context
	
	}
	
	/**
	 * Convenience method for determining class name - 
	 * this will be replaced by 5.4 version of object that
	 * uses an eigneclass representation of class - for
	 * now this will do
	 */
	public static function className() {
		$tokens = implode('\\', get_called_class());
		
		return $tokens[count($tokens)-1];
	}
	

	
	protected static $_singleton;
	
	protected static $_methodsStatic = array();
	protected        $_methods       = array();
	
}