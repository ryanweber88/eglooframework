<?php 
namespace eGloo\Dialect;

/**
 * Essentially stubb class for superclass Object, which has been written to 5.4
 * standards
 * @author Christian Calloway callowaylc@gmail.com
 */
abstract class ObjectSafe {
	
	function __construct() {
		$self = $this;
		
		// fire our alias properties and methods
		//$this->aliasMethods();
		//$this->aliasProperties();
		$this->__methods();
		$this->__properties();
		
		// ClassSafe is a class metaclass instance; here we statically cache it
		// and key it fully qualified class name
		$this->class = static::cache(get_called_class(), function() use ($self) {
			return new _ClassSafe($self);
		});		
		
		// provide some generic attr_reader properties
		$this->attr_reader('ident');
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
		

		$self   = $this;
		$caller = $this->caller();

		// we need to immediately call define method, this will be the basis for
		// all runtime defined methods
		$this->_methods['defineMethod'] = function($name, $lambda) use ($self, $caller) {
			
			// @TODO this is a major bug; for some esoteric fuck-me-reason, $self becomes
			// invalidated
			if (!is_object($self)) {
				echo 'self no longer defined in defineMethod';
				var_export($caller);
				exit('asdf');
			}
			//echo get_class($self) . "\n";
				
			// create a reference to methods, since they cannot be directly referenced
			// by self given class access modifer protected
			$methods        = &$self->reference('_methods');
			$methods[$name] = $lambda;
				
			$lambda = $methods[$name];
			
			// fire methodAdded event
			$self->send('methodAdded', $name, $lambda);
			
			// return lambda to caller
			return $lambda;
		};		
		
		// returns dynamically defined method as closure
		$this->defineMethod('method', function($name) use ($self) {
			$methods = &$self->reference($name);
			
			if (isset($methods[$name])) {
				return $methods[$name];
			}
			
			throw new \Exception (
				"Failed to return closure of instance method '$name' on receiver '{$self->ident()}'"
			);
			
		});
		
		$this->defineMethod('defer', function($name, $lambda) use ($self) {
			if (is_callable($lambda)) {
				$defers = &$self->reference('_defers');
				$defers[$name] = $lambda;
			}
			
			else {
				throw new \Exception(
					"Failed to defer action '$name' because lambda '$lambda' is not callable"
				);
			}
		}); 

		$this->defineMethod('respondTo', function($method) use ($self) {
			$methods = &$self->reference('_methods');
			return method_exists($self, $method) || isset($methods[$method]);
		});
		
		$this->defineMethod('namespace', function() use ($self) {
			$reflection = new \ReflectionClass($self);
			return $reflection->getNamespaceName();
		});
		
		
		$this->defineMethod('cache', function($mixed, $lambda = null) use ($self) { 
			$key = $mixed;
			
			
			// check if mixed is an object, or callable; because php implements
			// callable as an instance of type Closure, the second condition will
			// never be called - it is simply there for idiomatic reasons alone.
			// If we have passed an object, or a lambda, a signature can be generated
			// that uniquely identifies the instance, thus creating a key for cached
			// value
			if (is_object($mixed) || is_callable($mixed)) {
				//$reflection = new \ReflectionFunction($mixed);
				//$key        = "{$reflection->getFileName()}::{$reflection->getStartLine()}";
				$key = spl_object_hash($mixed);
				
				// now we check if mixed is indeed a closure, in which case
				// we set lambda to mixed
				if (is_callable($mixed)) {
					$lambda = $mixed;
				}
			}
			
			

			$cache = &$self->reference('_cache'); 
			
			if (!isset($cache[$key])) {
				$cache[$key] = $lambda($key);
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
	
	/**
	 *  Stubbed here; this can be used an handler for defineMethod events
	 */
	protected function methodAdded($name, $lambda) { }
	
	
	protected static function aliasMethodsStatic() { 
		
		// the cache method stores the return of lambda into static space
		// but makes use of object id to 
		$class = get_called_class();
		
		static::$_methodsStatic[$class]['defineMethod'] = function($name, $lambda, $class) {
		
			// create a reference to methods, since they cannot be directly referenced
			// by self given class access modifer protected
			$methods                = &$class::referenceStatic('_methodsStatic');
			$methods[$class][$name] = $lambda;
		
			return $methods[$class][$name];
			//return $self;
		};
		
		static::defineMethod('defer', function($name, $lambda, $class) {
			$defers = &$class::referenceStatic('defers');
			$defers[$class][$name] = $lambda;
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
				
		
		static::defineMethod('namespacename', function($class) {
			
			return $class::cache('namespace', function($class) {
				$reflection = new \ReflectionClass($class);
				return $reflection->getNamespaceName();
			});
		});
		
		static::defineMethod('send', function($name, $arguments) use ($class) {
			return call_user_func_array(
				'staticStatic', func_get_args()
			);
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
			
			// check if mixed is an object, or callable; because php implements
			// callable as an instance of type Closure, the second condition will
			// never be called - it is simply there for idiomatic reasons alone.
			// If we have passed an object, or a lambda, a signature can be generated
			// that uniquely identifies the instance, thus creating a key for cached
			// value
		
			if (is_object($mixed) || is_callable($mixed)) {
				//$reflection = new \ReflectionFunction($mixed);
				//$key        = "{$reflection->getFileName()}::{$reflection->getStartLine()}";
				$key = spl_object_hash($mixed);
				
				// now we check if mixed is indeed a closure, in which case
				// we set lambda to mixed
				if (is_callable($mixed)) {
					$lambda = $mixed;
					//$class  = $lambda;
				}
				
			}
			

						
			
			// now determine if static cache has been previously
			// set for the given key and class 
			$cache = &$class::referenceStatic('_scache');
			
			if (!isset($cache[$class][$key]) &&
			    !is_null($value = $lambda($key))) {

				$cache[$class][$key] = $value;
			}		
			
			
			
			// invalidate cachhe
			if (isset($cache[$class][$key])) {
				return $cache[$class][$key];
			}
					
		});
		
		static::defineMethod('clear_cache', function($key, $class = null) {
			$cache = &$class::referenceStatic('_scache');
			unset($cache[$class][$key]);
		});
		
		
		static::defineMethod('method', function($method, $class) {
			$methods                = &$class::referenceStatic('_methodsStatic');
						
			if (isset($methods[$class][$method])) {
				return $methods[$class][$method];
			}
			
			throw new \Exception(
				"Failed to retrieve method '$method' because it does not exist"
			);
		
		});
	
		
		static::defineMethod('aliasMethod', function($alias, $from, $class) {
			if (($nativeMethod = \method_exists($class, $from))) {
					
				if (!\method_exists($class, $alias)) {
					
					// @TODO temporary measure - recursive aliases are failing miserably 
					// at the moment
					$nativeMethod = true;
					
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
							
							throw new \Exception ('not implemented');
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
		
		
		if (\method_exists($this, $method)) {
			// another success story in phpwtf history - reflection method
			// invokes method successfully, but static context is that of 
			// where the method was defined IF the send message was sent
			// from a lambda - for now, access modifier protected will have
			// to be used
			/*
			$reflection = new \ReflectionMethod(get_class($this), $method);
			$reflection->setAccessible(true);
			
			$tmp = $reflection->isStatic()
				? null 
				: $this;
				
			return $reflection->invokeArgs($tmp, array_slice(
				func_get_args(), 1
			));
			*/ 			
			return call_user_func_array(
				array($this, $method), array_slice(func_get_args(), 1)	
			);			
		}
		
		else if (isset($this->_methods[$method])) {			
			return call_user_func_array(
				$this->method($name), array_slice(func_get_args(), 1)	
			);			 
		} 

		// if we have reached this point, we know method does
		// not exist, either as concrete or as dynamically
		// defined
		
		throw new \Exception(
			"Failed to send method '$method' to receiver '{$this->ident()}' because method does not exist"
		);
		
		

	}
	
	public static function sendStatic($method, $__mixed = null) {
		return call_user_func_array(
			array(get_called_class(), $method), array_slice(func_get_args(), 1)	
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
	 * Aliases identify instance
	 */
	public function ident() {
		return $this->identifyInstance();
	}
	
	/**
	 * Aliases a property using reference; does not check on property existence
	 * and will be affected by get/set definition
	 */
	protected function aliasProperty($alias, $from) {
		
		$class = strtolower( \eGlooString::toUnderscores(static::classname()) );
		

		
		// check that we are not overwriting a "concretely" defined property, with an 
		// an alias, but we are safe to overwrite dynamically determined aliases
		// (those that are determined at runtime)
		if (!\property_exists($this, $alias) || isset($this->_aliasedProperties[$alias])) {

			// in the case that our from property doesn't exist, we
			// force it into existense - it is upon the onus of the
			// developer to not absuse this principle			
			if (!isset($this->$from)) {

				$this->$from = null;
			} 		
			
					
			// this is a wtfphp issue; when assigning by reference, the __get
			// dump is called, which throws an exception at this level; to get
			// around, you must first assign ANY non-reference value, which
			// has the effect of calling __set, which then officially adds
			// property to instance
			// MAKE SURE TO CHECK that property hasn't been previously aliased
			// because setting a reference to null WILL set the aliased property
			// to null as well
			
			unset($this->$alias);
			$this->$alias = null;
			
			
			$this->$alias = &$this->$from;
			
			// keep track of alias properties
			$this->_aliasedProperties[$alias] = $from;

			return $this;
		}

		throw new \Exception(
			"Attempted alias '$alias' on property '$from' failed because it ".
			"already exists as a property on receiver {$this->ident()} "     .
			"with value '{$this->$alias}'"		
		);
	}
		
	/**
	 * Aliases to Singleton trait - will be replaced with 5.4
	 */
	public static function instance($arguments = null) {
		return static::singleton($arguments);
	}
	
	/**
	 * Instantiates a new object
	 */
	public static function instantiate($__mixed = null) {
		$reflection = new \ReflectionClass(get_called_class());
		return $reflection->newInstanceArgs(func_get_args());
	}
	
	/**
	 * Aliases to singleton trait
	 * @TODO replace in php 5.4
	 */
	public static function singleton($arguments = null) {
	
		return static::cache($class = get_called_class(), function() use ($arguments, $class) {
			$reflection = new \ReflectionClass($class);
			
			try {
				return $reflection->newInstance($arguments);
			}
			catch(\Exception $toCaller) {
				throw $toCaller;
			}
		});
	} 
	
	public function hash() {
		return spl_object_hash($this);
	}
	
	public function instanceEval($lambda) {
		return $lambda($this);
	}
	
	public static function classEval($lambda) {
		return $lambda(get_called_class());
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
	
	protected function privateClassMethod($__mixed = null) {
		// changes method visibility	
		$arguments = Collection::flatten(func_get_args());
		
		
		
	}

	
	/**
	 * Here we provide our catchall and dynamic property meta functionality
	 */
	public function __get($name) {
		

		// check if property name is a "deferrable" property, in which case we
		// fire lambda, and set property value with return from lambda; defers
		// can only be used once, so the deferrable will be dropped after execution 
		if (isset($this->_defers[$name])) {
				
			// first we unset our property - it may be the case that it is a 
			// reference, in which case we are creating a fuck-you hard bug
			// to find
			unset($this->$name);
			
			// fire deferrable and unset from deferrable collection
			$value = $this->_defers[$name]($this);
			unset($this->_defers[$name]);
			
			// if a value has been returned, then call __set
			// on property
			if (!is_null($value)) {
				$this->$name = $value;
			};
				
			// and now return value
			return isset($this->$name) 
				? $this->$name
				: null;
		}
		
		// check if ruby-style attributes have been specified, in which case we
		// fire our reader/accessor method
		$attr = &$this->_attributes;
		
		if (isset($attr[$name])) {
			// determine lambda method, since we are in __get context, reader will
			// take presedence over accessor
			$lambda = isset($attr[$name]['reader'])
				? $attr[$name]['reader']
				: $attr[$name]['accessor'];	
				
			return $lambda(); 
		}			

		// specify our meta properties; these are properties that follow
		// specific patterns to allow for returning meta/descriptive
		// information in regards to product

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
			"Instance property '$name' does not exist in receiver '{$this->ident()}'"	
		);
		
	}	
	
	public function __set($name, $value) {

		// check if ruby-style attributes have been specified, in which case we
		// fire our accessor method
		$attr = &$this->_attributes;
		
		if (isset($attr[$name])) {
						
			// determine lambda method, since we are in __set context, writer will
			// take presedence over accessor
			$lambda = isset($attr[$name]['writer'])
				? $attr[$name]['writer']
				: $attr[$name]['accessor'];	
				
			$lambda($value); 
	
			
			// returning false will stop chain in descendants
			return false;
		}			

		// check if defer-property; in which case we have to call __get
		// on property to initialize defer then properly call set
		if (isset($this->_defers[$name])) {
			// this will fire get method, which is responsible for
			// firing defers method; if defers returns a reference
			// then we will be setting reference value with value
			$this->$name;
			$this->$name = $value;
		}
		
		// if property follows pattern name__ we are attempting conditional
		// assignment; conditional assignment is equivalent to ruby's ||=
		// method and will only set the property if it has not yet been set
		
		if (preg_match('/^(.+)\_\_$/', $name, $match)) {
			$field = $match[1];
		
			if (!isset($this->$field) || is_null($this->$field)) {
				$this->$field = $value;
			}
			
		
			return false;
		}


		// otherweise throw exception, because arbitrarily setting instance
		// properties is a bad fucking idea
		$class = get_called_class();
		
		
		throw new \Exception(
			"Failed setting instance property '$name' in receiver '{$this->ident()}' because it does not exist "		
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
		return $this->ident();
	}
	
	/**
	 * Experiment - the purpose is provide one interface for accessing __call &
	 * __callstatic, but I don;t know how to at the moment
	 */
	public function methodMissing($name, $arguments, $static = false) {
		
	}
	
	/**
	 * Returns fully qualified class name with instance hash
	 */
	public function identifyInstance() {
		$class = get_class($this);
		$hash  = spl_object_hash($this);
		
		return "$class<$hash>";
	}
	
	protected function isAliasedProperty($name) {
		return isset($this->_aliasedProperties[$name]);
	}
	
	/**
	 * Stub call - needed because it assumed all classes on Objet hierarchy
	 * have a fallback to method missing
	 */
	public function __call($name, $arguments) { 
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
		$class = $this->classNameFull();
		
		
		
		throw new \Exception (
			"Call to undefined instance method '$name' on receiver '{$this->ident()}'"
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
		
		
		
		// if our method dump recieves a method being defined
		// by define method, we need to inject our current
		// context into the method definition
		//if ($name == 'defineMethod' && is_callable($arguments[1])) {
		array_push($arguments, $class);
		//}
		
		
		do {
			if (isset(static::$_methodsStatic[$current][$name])) {
				
				try { 
					return call_user_func_array(
						static::$_methodsStatic[$current][$name], $arguments	
					);
				}
				
				// otherwise pass exception to caller to handle as appropriate
				catch(\Exception $passthrough) {
					throw $passthrough;
				}
			}
			
		} while (($current = get_parent_class($current)));
		

		
		
		
		// this will die UNGRACEFULLY if method does not exist
		// (intended behavior)		
		throw new \Exception(
				"Call to undefined class method \"$name\" on receiver " . get_called_class()
		);		
	}


	
	/**
	 * Declaring ruby-style attr-accessor; this is convenient for creating on the 
	 * fly closures that act as accessors (readers/writers) on a property
	 */
	protected function attr($__mixed) {
		$arguments = \eGloo\Utilities\Collection::flatten(
			func_get_args()
		);
		
		$attr = &$this->_attributes;
		$self = $this;

		// iterate through arguments, and assign accessor
		// closures to each
		foreach ($arguments as $name) {
			// check get & set accessor first
			if ($this->respondTo($method = "get_$name")) {
				$attr[$name]['reader'] = function() use ($method, $name, $self, &$attr) {
					return $self->send($method, $attr[$name]['value']);
				};
				
			}
			
			if ($this->respondTo($method = "set_$name")) {
				$attr[$name]['writer'] = function($value) use ($method, $name, $self, &$attr) {
					
					if (!is_null($result = $self->send($method, $value, $attr[$name]['value']))) {
						$attr[$name]['value'] = $result;
					}	
										
					return $self;
				};
				
			}
			
			// if a 'concrete' method already exists, then it will take
			// prescedence			
			if ($this->respondTo($name)) {

				// @TODO replace with ReflectionMethod#getClosure on switch
				// to php 5.4
				$attr[$name]['accessor'] = function($value = null) use ($name, $self, &$attr) {
					if (!is_null($result = $self->send($name, $value, $attr[$name]['value']))) {
						$attr[$name]['value'] = $result;
					};	
				};
				
			}
			
			// otherwise, we create a default/generic set/get closure
			else {
				
				$attr[$name]['accessor'] = function($value = null) use ($name, $self, &$attr) {
					if (is_null($value)) {
						return $attr[$name]['value'];
					}
					
					else {
						$attr[$name]['value'] = $value;
						return $self;
					}
				};
			}
		}
	}
	
	/**
	 * Alias to attr method
	 */
	protected function attrAccessor($__mixed) {
		return $this->attr($__mixed);
	}
	
	protected function attr_accessor($__mixed) {
		return $this->attr($__mixed);
	}
	
	protected function attr_reader($__mixed) {
		$arguments = \eGloo\Utilities\Collection::flatten(
			func_get_args()
		);
		
		$attr = &$this->_attributes;
		$self = $this;
		
		foreach($arguments as $name) {
			if ($this->respondTo($method = "get_$name")) {
				$attr[$name]['reader'] = function() use ($method, $name, $self, &$attr) {
					return $self->send($method, $attr[$name]['value']);
				};
			}
			
			// otherwise we provide a generic writer
			else {
				$attr[$name]['reader'] = function() use ($name, $self, &$attr) {
					return $attr[$name]['value'] = $value;
				};
			}
		}			
	}
	
	protected function attr_writer($__mixed) {
		$arguments = \eGloo\Utilities\Collection::flatten(
			func_get_args()
		);
		
		$attr = &$this->_attributes;
		$self = $this;
		
		foreach($arguments as $name) {
			if ($this->respondTo($method = "set_$name")) {
				$attr[$name]['writer'] = function() use ($method, $name, $self, &$attr) {
					return $self->send($method, $attr[$name]['value']);
				};
			}
			
			// otherwise we provide a generic writer
			else {
				$attr[$name]['writer'] = function($value) use ($name, $self, &$attr) {
					$attr[$name]['value'] = $value;
					return $self;
				};
			}
		}	
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
	
	public static function classNameFull() {
		return get_called_class();
	}
	

	
	protected static $_singleton;
	protected static $_scache            = array();
	protected static $_methodsStatic     = array();
	protected static $ns;
	protected        $_methods           = array();
	protected        $_cache             = array();
	protected        $_defers            = array();
	protected        $_aliasedProperties = array(); 
	protected        $_attributes        = array();
	
	// @TODO return to protected and set as attr_reader
	public           $class;
	
	
	
}