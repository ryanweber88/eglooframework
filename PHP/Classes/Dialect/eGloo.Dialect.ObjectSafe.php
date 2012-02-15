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
		//$this->aliasMethods();
		//$this->aliasProperties();
		$this->__methods();
		$this->__properties();
	}
	
	/**
	 * Provides an idea of a static constructor - will have to be explicitly called from
	 * autoloader and overriden in descendant classes
	 */
	static function __constructStatic() { 		
		static::__methodsStatic();
	}
	
	/**
	 * Alias to __constructStatic - I think it's a little neater and carries
	 * the idea of a static constructor without have to explicitly spell
	 * it out
	 */
	static function __static() {
		static::__constructStatic();
	}
	
	// These are stubs but called by the constructor - so as they
	// can be used inherited classes
	protected function  aliasProperties() { }
	
	protected function  aliasMethods() {
		
		$self = $this;
		
		$this->defineMethod('cache', function($mixed, $lambda = null) use ($self) { 
			$key = $mixed;
			
			if (is_callable($mixed)) {
				$reflection = new \ReflectionFunction($mixed);
				$key        = "{$reflection->getFileName()}::{$reflection->getStartLine()}";
				$lambda     = $mixed;
			}
			
			// we are going to tack the object hash id on the end for 
			// good effect
			$key   += "::" + spl_object_hash($self);
			$cache = &$self->reference('_cache'); 
			
			if (!isset($cache[$key])) {
				$cache[$key] = $lambda();
			}
			
			return $cache[$key];
		});

		
		
		$this->defineMethod('memberExists', function($member) use ($self) {
			return property_exists($self, $member) || method_exists($self, $member);
		});
		
		// define aliasMethod at instance level
		$this->defineMethod('aliasMethod', function($alias, $from) use ($self) {
			if (\method_exists($self, $from)) {
		
				if (!\method_exists($self, $alias)) {
					// use lambda/block to place method alias method definition into
					// this instance "singleton" or eigenclass
					$self->defineMethod($alias, function($__mixed = null) {
							
						// call original method
						return call_user_func_array(array(
								$self, $from
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
		});
				
	}
		
	/**
	 * Alias to aliasMethods - thought it fits more into the idea of
	 * constructor/meta call
	 */
	protected function __methods() {
		$this->aliasMethods();
	}
	
	
	protected static function aliasMethodsStatic() { 
		
		// the cache method stores the return of lambda into static space
		// but makes use of object id to 
		$class = get_called_class();
		
		static::defineMethod('cache', function($mixed, $lambda = null) use($class) { 
			$key   = $mixed;
			$cache = $class::referenceStatic('_scache'); 
			
			if (is_callable($mixed)) {
				$reflection = new \ReflectionFunction($mixed);
				$key        = "{$reflection->getFileName()}::{$reflection->getStartLine()}";
				$lambda     = $mixed;
			}
			
			if (!isset($cache[$key])) {
				$cache[$key] = $lambda();
			}
			
			return $cache[$key];		
		});
		
		static::defineMethod('aliasMethod', function($alias, $from) use ($class) {
				
			if (\method_exists($class, $from)) {
					
				if (!\method_exists($class, $alias)) {
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
				
		});
		
		
		
		static::defineMethod('memberExists', function($member) use ($class) {
			return property_exists($class, $member) || method_exists($class, $member);
		});
				
	}
	
	protected static function __methodsStatic() {
		static::aliasMethodsStatic();			
	}
	

	
	/**
	 * Alias to aliasProperties
	 */
	protected function __properties() {
		$this->aliasProperties();
	}
	

	

	
	/**
	 * Aliases a property using reference; does not check on property existence
	 * and will be affected by get/set definition
	 */
	protected function aliasProperty($alias, $from) {
		if (!\property_exists($this, $alias)) { 
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
	 * Retrieves late-static-bound namespace
	 */
	public static function ns() {
		
		if (!isset(static::$ns)) {
			
			// use reflection to get namespace name
			$reflection = new \ReflectionClass($class = get_called_class());
			static::$ns = $reflection->getNamespaceName();
			
			// we don't want this shared down hierarchy, so we set accessible to false
			$reflection = new \ReflectionProperty($class, 'ns');
			$reflection->setAccessible(false);
		}
			
		return static::$ns;
	}
	
	/**
	 * Here we provide our catchall and dynamic property meta functionality
	 */
	public function __get($name) {
		
		// here we provide an "existence" operator for determining if 
		// property exists in receiver - this is similar to obj.name?
		// convention used in rails
		if (preg_match('/has_?(.+)/', $name, $match)) {
			$property = (strpos($name, 'has_') !== false)
				? $match[1]
				: lcfirst($match[1]);
		
			
			// now simply return whehter proeprty exists or not
			return \property_exists($this, $property);
		}
		
		// if we have reached this point, all dynamic get options have been
		// exhausted and we trigger an error
		throw new \Exception(
			"Instance property $name does not exist"		
		);
	}
	
	/**
	 * Provides a sneaky mechanism to get a reference to class
	 * protected/private members; this is FUCKING required because
	 * lambda/closure/block CANNOT bind to an external fucking scope
	 */
	public function &reference($member) {
		// if property, return reference to property using a local 
		// variable - this shouldn't work, but fuck it
		if (\property_exists($this, $member)) {
			$mirror = &$this->$member;
			return $mirror;
		}
		
		// in the case of a protected/private method, we will wrap in closure and
		// return to caller
		else if (\method_exists($this, $member)) {
			$self       = $this;
			$reflection = new \ReflectionMethod($this, $member);
			
			$reflection->setAccessible(true);
			
			return function($__mixed) use ($reflection, $self) {
				return $reflection->invokeArgs($self, $__mixed);
			};
		}
		
		// otherwise, the member cannot be found and we throw an exception
		// to that effect
		throw new \Exception(
			"Failed to reference instance member $member as it does exist"		
		);
	}
	
	/**
	 * See above - needed in 5.3 context to access protected members
	 * from lambdas
	 */
	public static function &referenceStatic($member) {
		$class = get_called_class();
		
		// if property, return reference to property using a local
		// variable - this shouldn't work, but fuck it
		if (\property_exists($class, $member)) {
			$mirror = &static::$$member;
			return $mirror;
		}
		
		// in the case of a protected/private method, we will wrap in closure and
		// return to caller
		else if (\method_exists($class, $member)) {
			$reflection = new \ReflectionMethod($class, $member);
			$reflection->setAccessible(true);
				
			return function($__mixed) use ($reflection) {
				return $reflection->invokeArgs(null, $__mixed);
			};
		}
		
		// otherwise, the member cannot be found and we throw an exception
		// to that effect
		throw new \Exception(
				"Failed to reference class member $member as it does exist"
		);		
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
				$self = $this;
				$this->_methods['defineMethod'] = function($name, $lambda) use ($self) {
					
					// create a reference to methods, since they cannot be directly referenced
					// by self given class access modifer protected
					$methods = &$self->reference('_methods');
					$methods[$name] = $lambda;
					
					return $self;
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
			
		
		// this will die UNGRACEFULLY if method does not exist
		// (intended behavior)
		throw new \Exception (
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
				static::$_methodsStatic[$class][$name] = function($name, $lambda) use ($class) {
					$methods = &$class::referenceStatic('_methodsStatic');
					$methods[$class][$name] = $lambda;
					
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
		

		
		
		// magic - here we define dynamic calls on existing properties and methods
		// such as $this->$property_like(regexp)
		
		
		// this will die UNGRACEFULLY if method does not exist
		// (intended behavior)		
		throw new \Exception(
				"Call to undefined method \"$name\" on " . get_called_class(), E_USER_ERROR
		);		
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
	protected static $_scache         = array();
	protected static $_methodsStatic  = array();
	protected        $_methods        = array();
	protected        $_cache          = array();
	
}