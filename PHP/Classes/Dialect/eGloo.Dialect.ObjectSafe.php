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
		//$this->__defers();
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
	
	public function constGet($name) {
		return defined("static::$name")
			? constant('static::' . $name)
			: null;
	}
	
	// These are stubs but called by the constructor - so as they
	// can be used inherited classes
	protected function  aliasProperties() { }
	
	protected function  aliasMethods() {
		

		$self = $this;

		//echo "creating define method on receiver " . get_called_class() . "<br />"; 

		// we need to immediately call define method, this will be the basis for
		// all runtime defined methods
		$this->_methods['defineMethod'] = function($name, $lambda) use ($self) {
				
			// create a reference to methods, since they cannot be directly referenced
			// by self given class access modifer protected
			$methods        = &$self->reference('_methods');
			$methods[$name] = $lambda;
				
			return $self;
		};		
		
		$this->defineMethod('defer', function($lambda) {
			
		}); 

		$this->defineMethod('respondTo', function($method) use ($self) {
			$methods = &$self->reference('_methods');
			return method_exists($self, $method) || isset($methods[$method]);
		});
		
		$this->defineMethod('namespace', function() use ($self) {
			//return $self->cache(function() use ($self) {
				//exit('adsf');
				$reflection = new \ReflectionClass($self);
				return $reflection->getNamespaceName();
			//});
		});
		
		
		$this->defineMethod('cache', function($mixed, $lambda = null) use ($self) { 
			$key = $mixed;
			
			
			if (is_callable($mixed)) {
				$reflection = new \ReflectionFunction($mixed);
				$key        = "{$reflection->getFileName()}::{$reflection->getStartLine()}";
				$lambda     = $mixed;
			}
			
			// we are going to tack the object hash id on the end for 
			// good effect
			$key   .= "::" . spl_object_hash($self);
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
			
			else { 
		
				throw new \Exception(
					"Failed attempting an instance alias on method '$from' because it does not exist on receiver " . get_class($self)
				);
			
			}
			
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
		
		static::$_methodsStatic[$class]['defineMethod'] = function($name, $lambda, $class) {
		
			// create a reference to methods, since they cannot be directly referenced
			// by self given class access modifer protected
			$methods                = &$class::referenceStatic('_methodsStatic');
			$methods[$class][$name] = $lambda;
		
			//return $self;
		};
		
		static::defineMethod('defer', function($name, $lambda, $class) {
			$methods = &$class::referenceStatic('defers');
			$methods[$class][$name] = $lambda;
		});
		
		static::defineMethod('respondTo', function($method, $class) { 
			$current = $class;
			$methods = &$class::referenceStatic('_methodsStatic');

			do {
				if (isset($methods[$current][$method])) {
			
					return true;
				}
					
			} while (($current = get_parent_class($current)));
			
			return false;
			
		});
		
		// returns a closure representing a member method
		static::defineMethod('closure', function($method, $class) { 
			$current = $class;
			
			// first we check statically linked methods 
			if (method_exists($class, $method)) {
				
			// 	otherwise, we check up method hierarchy chain
			// for dynamic method
			} else { 
			
				$methods = &$class::referenceStatic('_methodsStatic');
	
				do {
					if (isset($methods[$current][$method])) {
				
						return $methods[$current][$method];
					}
						
				} while (($current = get_parent_class($current)));
			
			}
			
			throw new \Exception(
				"Failed to return closure of '$method' because it does not exist"
			);
			
		});		
				
		
		static::defineMethod('namespaceName', function($class) {
			
			return $class::cache('namespace', function($class) {
				$reflection = new \ReflectionClass($class);
				return $reflection->getNamespaceName();
			});
		});
		
		
		static::defineMethod('cache', function($mixed, $lambda = null, $class = null) {

			// first we need to make sence of the parameters; lambda may be the first
			// or second or argument, as our first parameter, which may be a lambda,
			// or cache key only, is option as a key value (we can get a unique key 
			// by getting a signature from closure/block
			$key = $mixed;
			
			if (is_callable($mixed)) {
				$reflection = new \ReflectionFunction($mixed);
				$key        = "{$reflection->getFileName()}::{$reflection->getStartLine()}";
				$class      = $lambda;
				$lambda     = $mixed;
				
			}
			
			// now determine if static cache has been previously
			// set for the given key and class 
			$cache = &$class::referenceStatic('_scache');
			
			if (!isset($cache[$class][$key])) {
				$cache[$class][$key] = $lambda();
			}
			
			return $cache[$class][$key];		
		});
		
	
		
		static::defineMethod('aliasMethod', function($alias, $from, $class) {
				
			//echo "alias $alias to $from for class $class <br/>";exit;
				
			if (\method_exists($class, $from)) {
					
				if (!($nativeMethod = \method_exists($class, $alias)) || $class::respondTo($from)) {
					
					
					// use lambda/block to place method alias method definition into
					// this instance "singleton" or eigenclass
					$class::defineMethod($alias, function($__mixed = nulll) use ($from, $class, $nativeMethod) {
						
						// @TODO this is an ugly hack for now
						if (!is_array($__mixed)) {
							$__mixed = array($__mixed);
						}

						// call original method - we need to check if running
						// a native method or dynamic
						if ( $nativeMethod ) {
							return call_user_func_array(array(
									$class, $from
							),  $__mixed);
							
						
						// otherwise run from dynamic lookup
						// @TODO we need to add closure() method
						} else {
							
							return call_user_func_array(
								$class::closure($from), $param_arr
							);
						}
						
						
						
					});
				}
				
				else {
					throw new \Exception(
							"Attempted alias '$alias' on method '$from' failed because it already exists in receiver $class" 
					);
				}
			}
			
			else { 
				
				throw new \Exception(
						"Failed attempting a static alias on method '$from' because it does not exist on receiver $class"
				);
				
			}
				
		});
		
		static::defineMethod('constant', function($name, $class) { 
			if (defined("$class::$name")) {
				return constant($class . '::' . $name);
			}
		});
		
		
		
		
		static::defineMethod('memberExists', function($member, $class) {
			return property_exists($class, $member) || method_exists($class, $member);
		});
				
	}
	
	protected static function __methodsStatic() {
		static::aliasMethodsStatic();			
	}
	
	
	/**
	 * Allows breaking of protected/private modifiers, from outside of the
	 * context of class; calls an method on instance receiver with arguments 
	 * presented 
	 */
	public function send($method, $__mixed = null) {
		call_user_func_array(
			array($this, $method), array_slice(func_get_args(), 1)	
		);
	}
	
	/**
	 * Alias to aliasProperties
	 */
	protected function __properties() {
		$this->aliasProperties();
	}
	

	/**
	 * Checks both method_exists and our runtime defined
	 * methods
	 */
	//public function respondTo($name) {
		//return method_exists($this, $name) || isset($this->_methods[$name]);
	//}
	
	/**
	 * Aliases a property using reference; does not check on property existence
	 * and will be affected by get/set definition
	 */
	protected function aliasProperty($alias, &$from) {
		if (!\property_exists($this, $alias)) {
			
			// in the case that our from property doesn't exist, we
			// force it into existense - it is upon the onus of the
			// developer to not absuse this principle
			if (!\property_exists($this, $from)) {
				$this->from = null;
			} 

			// this is a wtfphp issue; when assigning by reference, the __get
			// dump is called, which throws an exception at this level; to get
			// around, you must first assign ANY non-reference value, which
			// has the effect of calling __set, which then officially adds
			// property to instance
			$this->$alias = null;
			$this->$alias = &$this->$from;
			return $this;
		}
		
		
		throw new \Exception(
			"Attempted alias '$alias' on property '$from' failed because it already exists as a property on receiver " . get_class($this)		
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
		// wrap in caller instance, which should provide convenience methods 
		// for dealing with caller
		return new \eGloo\Utilities\Caller(debug_backtrace());
	}	
	
	

	
	/**
	 * Here we provide our catchall and dynamic property meta functionality
	 */
	public function __get($name) {

		// specify our meta properties; these are properties that follow
		// specific patterns to allow for returning meta/descriptive
		// information in regards to product
		//echo "attempting get on $name\n";
		
		// patterns in the form has_fieldname will check to
		// determine that fieldname isset on class
		// @TODO cache results as singleton (available to instance) methods
		// on instance receiver
		if (preg_match('/^has_(.+)$/', $name, $match)) {

			
			// return isset on field - this asks the question whether
			// the field is available on receiver, NOT what its value
			// is
			$field = $match[1];
			return isset($this->$field);
				
		}		
		
	
		
		// if we have reached this point, all dynamic get options have been
		// exhausted and we trigger an error
		throw new \Exception(
			"Instance property '$name' does not exist in receiver " . get_called_class()		
		);
		
	}
	
	
	public function __set($name, $value) {

		// if property follows pattern name__ we are attempting conditional
		// assignment; conditional assignment is equivalent to ruby's ||=
		// method and will only set the property if it has not yet been set
		
		if (preg_match('/^(.+)\__$/', $name, $match)) {
			$field = $match[1];
			
			if (!isset($this->$field)) {
				$this->$field = $value;
			}
			
			
			return $this;
		}


		// otherweise throw exception, because arbitrarily setting instance
		// properties is a bad fucking idea
		$class = get_called_class();
		
		throw new \Exception(
			"Failed setting instance property '$name' in receiver '$class' because it does not exist "		
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
	
	public function __toString() {
		return get_class($this);
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
		
		//echo "calling $name on receiver " . get_called_class() . "<br />";exit;
		
		// create an instancer of Caller so we can determine
		// origin or caller context
		$caller = static::caller();
		
		// since php cannot make a determination between instance/static 
		// receiver when called from an instance context, we have
		// to manually pass call to our callstatic dump
		if ($caller->isReceivedStatically()) {
			return static::__callstatic($name, $arguments);
		}

		// first check dynamically defined methods and fire if match
		if (isset($this->_methods[$name])) {
			return call_user_func_array(
				$this->_methods[$name], $arguments	
			);
		}
		
		// lets provide conversion to underscored and camel case
		// so George can be happy - check which case this is and
		// perform a conversion based on that case, and see if it
		// exists as a method; we are intentionally not providing
		// the inverse to this, as that is simply crazy
		if ( \eGlooString::isCamelCase($name) &&
		     method_exists($this, $underscored = \eGlooString::toUnderscores($name))) {
		     	
			return call_user_func_array(array($this, $underscored), $arguments);
		}

		// this will die UNGRACEFULLY if method does not exist
		// (intended behavior)
		throw new \Exception (
			"Call to undefined instance method \"$name\" on receiver $this"
		);
		
	}
	
	public static function __callstatic($name, $arguments) { 
		
		//echo "calling static $name on receiver " . get_called_class() . "\n";
		
		// check against dynamically defined methods - since we
		// are working class scope, we want to mimic the idea of
		// inheritence; to do this, we move up class hierarchy,
		// from Current to Object and check against methods
		
		// @TODO we need a way to call this all within one method 
		// regardless of fucking context
		// @TODO this needs to be profiled
		$class   = get_called_class();
		$current = get_called_class();
		
		
		
		// if our method dump recieves a method being defined
		// by define method, we need to inject our current
		// context into the method definition
		//if ($name == 'defineMethod' && is_callable($arguments[1])) {
		array_push($arguments, $class);
		//}
		
		
		do {
			if (isset(static::$_methodsStatic[$current][$name])) {
				
				
				return call_user_func_array(
					static::$_methodsStatic[$current][$name], $arguments	
				);
			}
			
		} while (($current = get_parent_class($current)));
		

		
		
		
		// this will die UNGRACEFULLY if method does not exist
		// (intended behavior)		
		throw new \Exception(
				"Call to undefined class method \"$name\" on receiver " . get_called_class()
		);		
	}

	
	
	/**
	 * Convenience method for determining class name - 
	 * this will be replaced by 5.4 version of object that
	 * uses an eigneclass representation of class - for
	 * now this will do
	 */
	public static function className() {
		$tokens = explode('\\', get_called_class());
		
		return $tokens[count($tokens)-1];
	}
	

	
	protected static $_singleton;
	protected static $_scache         = array();
	protected static $_methodsStatic  = array();
	protected static $ns;
	protected        $_methods        = array();
	protected        $_cache          = array();
	protected        $_properties     = array();
	protected        $_defers         = array();
	
	
}