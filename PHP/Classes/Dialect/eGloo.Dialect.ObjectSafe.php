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
				$this->_methods[$name], $arguments	
			);
		}
		
		// define instance/static context free methods - this list
		// needs to be kept as short as possible as we don't want
		// to define a great deal of funcitonality here
		
		// provide defineMethod functionality to instance
		// @TODO abstract this concept - something plugin based
		// would be nice
		if ($name == 'defineMethod') {
			
			// perform argument checking
			if (count($arguments) >= 2 && is_string($arguments[0]) && is_callable($arguments[1])) { 
				
				// cache 'defineMethod' to methods
				$this->_methods[$name] = function($name, $lambda) { 
					$this->_methods[$name] = $lambda;
					return $this;
				};
				
				// now call our just-defined method
				// @TODO every dynamic method definition contains this - determine
				// how to move to after method definition section as this violates
				// DRY
				return call_user_func_array(
					$this->_methods[$name], $arguments
				);
				

					
			}
			
			else {
				throw new \Exception(
					"Arguments provided to define method are incorrect : $arguments "			
				);	
			}
		}
		
		else if ($name == 'aliasMethod') {
			
			// cache to defineMethod
			$this->_methods[$name] = function($alias, $from) { 
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
			};
			
			// now turn around and call our cached method
			return call_user_func_array(
				$this->_methods[$name], $arguments		
			);
			

		}
	
		
		
		
		
		// this will die UNGRACEFULLY if method does not exist
		// (intended behavior)
		trigger_error(
			"Call to undefined method \"$name\" on " . get_class($this), E_USER_ERROR
		);
		
	}
	
	public static function __callstatic($name, $arguments) { 
		
		// check against dynamically defined methods - since we
		// are working class scope, we want to mimic the idea of
		// inheritence; to do this, we move up class hierarchy,
		// from Current to Object and check against methods
		
		// @TODO we need a way to call this all within one method 
		// regardless of fucking context
		// @TODO this needs to be profiled
		$class   = get_called_class();
		$current = get_called_class();
		
		
		do {
			if (isset(static::$_methodsStatic[$current][$name])) {
				return call_user_func_array(
					static::$_methodsStatic[$current][$name], $arguments	
				);
			}
			
		} while (($current = get_parent_class($current)));
		

		
		// define our basic building block methods - these should be context free
		// and define limited functionality
		// @TODO this should be done plugin fashion
		
		
		if ($name == 'defineMethod') {
			
			// perform argument checking against defineMethod - the point here is 
			// to not hold the developer hand, but guard against what would be a very
			// tough bug to track down, given the dynamic nature of defineMethod
			if (count($arguments) >= 2 && is_string($arguments[0]) && is_callable($arguments[1])) {
				
				// cache/bind 'defineMethod' to methods - doing this will mean method will be 
				// called automatically as opposed to rebuilding the definition of defineMetho
				static::$_methodsStatic[$class][$name] = function ($name, $lambda) {
					static::$_methodsStatic[get_called_class()][$name] = $lambda;
					return true;
				};
				
				//var_export(static::$_methodsStatic); exit;
				
				// now call define method - unfortunately we have to fucking
				// use two expressions since 5.3 is too fucking stupid to be
				// able to reference a lambda from within an array
				return call_user_func_array(
					static::$_methodsStatic[$class][$name], $arguments	
				);
				
			
			}
			
			else {
				throw new \Exception(
					"Arguments provided to $name are incorrect : $arguments "		
				);
			}
		}
		
		else if ($name == 'aliasMethod') {
			// cache method to static methods container
			
			// here's our definition of aliasMethod
			// @TODO again, we need plugin solution
			static::$_methodsStatic[$class][$name] = function($alias, $from) { 
				$class = get_called_class();
				
				if (method_exists($class, $from)) {
						
					if (!method_exists($class, $alias)) {
						// use lambda/block to place method alias method definition into
						// this instance "singleton" or eigenclass
						static::defineMethod($alias, function($__mixed = null) {
							// call original method
							return call_user_func_array(array(
									$class, $from
							),  $__mixed);
						});
					}
						
					throw new \Exception(
							"Attempted alias on $alias failed because it already exists in class scope"
					);
				}
				
				throw new \Exception(
						"Attempting an alias on method $from which does not exist"
				);
			};
			
			// now call our just-defined method
			return call_user_func_array(
				static::$_methodsStatic[$class][$name], $arguments
			);
		}
		
		
		
		
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

class Test extends ObjectSafe {
	
}

ObjectSafe::defineMethod('test', function($what) { 
	echo "Would fuck $what";
});


$t = new Test;
$t->defineMethod('test', function() { 
	echo 'from t';	
});
$t->test();

echo "\n";


$b = new Test;
$b->defineMethod('test', function() { 
	echo 'from b';	
});

$b->test();

