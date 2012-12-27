<?php 
namespace eGloo\Dialect;
use       \egloo;
use       \eGloo\Utilities;

/**
 * Essentially stubb class for superclass Object, which has been written to 5.4
 * standards
 * @author Christian Calloway callowaylc@gmail.com
 */
abstract class Object {
	
	use \eGloo\Utilities\DelayedJobTrait;
	
	
	
	// STATIC CONSTRUCTORS ///////////////////////////////////////////////////

	/**
	 * Alias to __constructStatic - I think it's a little neater and carries
	 * the idea of a static constructor without have to explicitly spell
	 * it out
	 * @polymorphic
	 */
	static function __static() {
		// create instance of eigenclass class and
		// set to static class property
		//static::$class = new Klass(get_called_class());

		// call our class methods method
		static::__smethods();
	}

	/** Stub method for static method definitions */
	protected static function __smethods() { }

	

	// INSTANCE CONSTRUCTORS //////////////////////////////////////////////////
	
	function __construct() {	

		// fire our method/property constructors
		$this->__methods();
		$this->__properties();
		
		
		// provide some generic attr_reader properties
		//$this->attr_reader('ident');
	}

	/**
	 * Alias to aliasProperties
	 */
	protected function __properties() { }	

	/**
	 * Alias to aliasMethods - thought it fits more into the idea of
	 * constructor/meta call
	 */
	protected function __methods() { }

	// DUAL CONTEXT METHODS //////////////////////////////////////////////////
	// Dual context methods simply means method in which current receiver
	// may be an instance or a class. Why is this done?? There are many reasons,
	// but foremost is that instance/static resolution on __call/__callstatic
	// is impossible

	/**
	 *  Stubbed here; this can be used an handler for defineMethod events
	 *  @DualContext
	 */
	protected function methodAdded($name, $lambda) { }


	/**
	 *  Defines a method on current context/self receiver (this
	 *  may be class or instance)
	 *  @DualContext
	 */
	public function &defineMethod($name, callable $lambda) {

		// determine if adding method to instance/class context,
		// in which case create reference to correct member property
		// @wtfphp cannot assign references when using ternary
		//$methods =& is_object(static::receiver())
		//	? $this->_methods
		//	: static::domain('_smethods');

		if (is_object(static::receiver())) {
			$methods = &$this->_methods;

		} else {
			$methods = &static::domain('_smethods');
		}

		// add method definition
		$methods[$name] = $lambda;

		// fire method added event
		static::methodAdded($name, $lambda);

		// finally return reference to lambda
		return $methods[$name];		
	}

	/**
	 *  Defines a deferrable block, that will act as an instance
	 *  property and can only be run once
	 *  @TODO this needs to be rethought in terms of 
	 *  intsance/class context
	 */
	public function defer($name, callable $lambda) {


		if (is_object(static::receiver())) {
			$defers = &$this->_defers;

		} else {
			$defers = &static::domain('_sdefers');
		}

		$defers[$name] = $lambda;
	}

	/**
	 * Retrieves current self namespace name
	 */
	public static function namespacename() {
		// @TODO is it worth adding cache here? May
		// be just as much work to do lookup as it 
		// is to do a string split

		return static::cache(static::$class, function() {
			$namespace = explode(
				'\\', static::$class->namespace
			);

			return $namespace[count($namespace) - 1];
		});
	}

	/**
	 * Provides an instance/static level cache
	 * @DualContext
	 */
	public function cache($__mixed) {
		$expiration = null;
		$lambda     = null;
		$instance   = is_object(
			$receiver = static::receiver()
		);

		// if three arguments have been passed, then key, expire
		// and code block have all been explicitly passed, and
		// in proper order
		// @TODO explicitly check against proper order?
		if (count($arguments = func_get_args()) === 3) {
			list($key, $expiration, $lambda) = func_get_args();

		// two arguments may be a comination of all
		// possible
		} else if (count($arguments) == 2) {
			
			// default our second value as lambda/block
			$lambda = $arguments[1];

			// default key to first argument, but check if key passes
			// as valid strtotime argument; we use eGloo\strtotime
			// to allow for wider or more idiomatic time expressions
			// @TOOD condition expression may be a bit hard to read
			if (($expiration = \eGloo\strtotime($key = $arguments[0]))) {
				// if our first argument is indeed an expire, then we
				// default key to lambda
				$key = $lambda;
			}


		// a single argument can be either a key or 
		// a lambda value
		} else {
			$key = $arguments[0];
		}




		// make sure to keep track of initial key value as 
		// this will be passed back to our lambda
		$initialKey = $key;			


		// check if mixed is an object, or callable; because php implements
		// callable as an instance of type Closure, the second condition will
		// never be called - it is simply there for idiomatic reasons alone.
		// If we have passed an object, or a lambda, a signature can be generated
		// that uniquely identifies the instance, thus creating a key for cached
		// value
		if (is_object($key) || is_callable($key)) {
			$key = spl_object_hash(
				$object = $key
			);
			
			// now we check if mixed is indeed a closure, in which case
			// we set lambda to mixed
			if (is_callable($object)) {
				$lambda = $object;
			}
			
		
		// otherwise, lets check the first character of key, which
		// if a star indicates that we want to employ a "one-way"
		// cache, which means this value will not be uncached at anypoint
		} else if (isset($key[0]) && $key[0] == '*') {
			$trace      = debug_backtrace(2)[1];
			if (!isset($trace['file'])) {
				var_export(debug_backtrace()); exit;
			}
			$key        = $trace['file'] . $trace['line'] . $key;	
			$initialKey = substr($initialKey, 1); 		
		}		
			

		// finally lets check if value is contained in
		// cache, set if not and then return
		if ($instance) {

		} else {
			$cache = &static::domain('_scache'); 
		}
			

		if (!isset($cache[$key])) {			
			if (is_callable($lambda)) {
				$cache[$key] = [
					'expiration' => $expiration ?: null,
					'value'      => $lambda($initialKey)
				];	

			} else {
				throw new \Exception(
					'Failed to set cache because lambda (callable block) ' . 
					'is unavailable'
				);
			}

		
		// otherwise check cache to determine if valid - a null
		// cache is never time expired
		} else if ($cache[$key]['expiration'] !== null   && 
			         $cache[$key]['expiration'] <= time()) {

			return forward_static_call_array(
				static::method('cache'), func_get_args()
			);	
		}
				
						
		return $cache[$key]['value'];		
	}

	/** Attempts to clear a particular cache token on variable receiver 
	 ** @DualContext
	 */
	public function clearCache($key) {
		$cache =& is_object(static::receiver())
			? $this->_cache
			: static::domain('_scache');

		unset($cache[$key]);
	}

	/** Makes alias $alias from $form 
	 ** @DualContext
	 */
	public function aliasMethod($alias, $from) {


		// if it doesn't, check that our
		if (!static::send('respondTo',  $alias)) {

			try {
				static::domain('_smethods')[$alias] = static::send(
					'method', $from
				);
			
			} catch(\Exception $ignore) {
				$type = is_object($receiver)
					? 'instance<' . spl_object_hash($this) . '>'
					: 'class';

				throw new \Exception(
					"Attempted alias '$alias' on method '$from' failed because method " .
					"'$from' does not exists in $type receiver " . get_called_class() 
				);
			}


		// otherise lets throw an exception explaining that
		// alias method already exists
		} else {
			$type = is_object($receiver)
				? 'instance<' . spl_object_hash($this) . '>'
				: 'class';

			throw new \Exception(
				"Attempted alias '$alias' on method '$from' failed because it ".
				"already exists in $type receiver " . get_called_class() 
			);
		}

	}

	/** Determines if member name $name exists in current
	 ** context 
	 ** @DualContext
	 **/
	public function memberExists($name) {
		try {
			return property_exists(static::receiver(), $name) ||
			       is_callable(static::method($name));
		
		} catch (\Exception $ignore) {
			return false;
		}

	}
	
	/** Retrieves static property that falls in current
	 ** class domain 
	 ** @TODO I dont know if I like this idea yet..
	 */
	protected static function &domain($staticProperty) {
		if (property_exists(static::classnamefull(), $staticProperty)) {
			$reference = &static::$$staticProperty;

			if (is_array($reference)) {
				return $reference[static::classnamefull()];

			} else {
				throw new \Exception(
					'Domain method only currently supports array properties'
				);
			}
		} else {
			throw new \Exception(
				"Failed to retrieve class domain on static property '$staticProperty' ".
				"because it does not exist"
			);
		}


		return static::$$staticProperty;
	}
	
	/**
	 * Forks the current process and returns pid; if passed a lambda
	 * then block runs in child process and exits
	 */
	public static function fork(callable $lambda = null) {
		if (is_null($lambda)) {
			// @TODO	
		}
		
		// otherwise, we assume lambda is long running and
		// we run in child process, but return immediately 
		// in parent process	
		else {
			$pid = pcntl_fork();
			
			// if attempting to fork on os that doesnt support
			// fork, we throw an exception
			if ($pid === -1) {
				throw new \Exception(
					"Failed to fork process on current environment"
				);
			
			// as the parent process, we return immediately to caller;
			// we have purposefully not used pcntl_wait, as that would
			// void the purpose of throwing a long running task into
			// the background, but it does present the possibility 
			// of zombie tasks (zombie tasks should be managed in)
			// at higher level
			} else if ($pid) {
				return ;	
				
			
			// otherwise as child, we run process and exit
			} else {
				// @TODO possibly queue pid on background task
				// responsible for managing possible zombies
				$lambda();
				
				// finally exit child process
				exit(1);
			}
			
		}
	}

	/**
	 * Alias to fork
	 */
	public static function background(callable $lambda = null) {
		static::fork($lambda);
	} 

		
	/**
	 * Allows breaking of protected/private modifiers, from outside of the
	 * context of class; calls an method on instance receiver with arguments 
	 * presented 
	 */
	public function send($method, $__mixed = null) {



		// send can be invoked from both static and instance
		// contexts; because of this we need to do a backtrace
		// to determine our correct receiver (an instance or
		// the class context)
		$receiver = static::receiver();

		// retrieve the messages arguments, if any.. since we
		// allow for array passing to we do an explicit
		// check to see if an array was passed as second
		// argument and flattan

		$arguments = array_slice(func_get_args(), 1); 

		if (count($arguments) == 1 && is_array($arguments[0])) {
			$arguments = Utilities\Collection::flatten($arguments);
		}


		// first we attempt to get method, wrapped within a
		// lambda; if we cannot find method, we know it doesnt
		// exist and throw an exception
		try { 

			$lambda = static::method($method);

			// finally invoke method with passed arguments and
			// return to caller; i don't understand why an invoke
			// requires listing the explicit receiver when it is
			// ALREADY passed went instantiating, but what the fuck
			// ever. Also, if method happens to be static, then
			// passed receiver must be null @wtfphp
			return call_user_func_array(
				$lambda, [ $arguments ]
			);

		// if an exception is thrown, then we can safely determine
		// that the method does not exist
		} catch(\Exception $refine) { 
			$receiver = static::receiver_id();

			throw new \Exception(
				"Failed to send method '$method' to receiver '$receiver' " . 
				"because method does not exist"
			);
		
		}

	}
	

	/**
	 * Checks both method_exists and our runtime defined
	 * methods
	 */
	//public function respondTo($name) {
		//return method_exists($this, $name) || isset($this->_methods[$name]);
	//}

	//public function kindOf()
	
	/**
	 * Provides a looser interpretation of instanceof 
	 * operator
	 */
	public function isA($constant) {
		return true;
	}
	
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
	 * @deprecated
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
	

		return static::cache("*" . get_called_class(), function($class) 
			use ($arguments) {
			
			$reflection = new \ReflectionClass($class);
			
			try {
				return $reflection->newInstance($arguments);
			}
			catch(\Exception $toCaller) {
				throw $toCaller;
			}
		});
	} 

	public static function defined($constant) {
		return defined ("static::$constant");
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
	 * Returns fully qualified class name with instance hash
	 */
	public function identifyInstance() {
		$class = get_class($this);
		$hash  = spl_object_hash($this);
		
		return "$class<$hash>";
	}

	/**
	 * Identifies current receiver
	 * @DualContext
	 */
	public function identity() {
		return static::receiver_id();
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

			// @TODO resolve this as it needs to be removed
			echo "still checking if received statically";
			exit;
			return static::__callstatic($name, $arguments);
		}
		
		// implement method hooks for dynamically defined methods;
		// this allows for intercepting method calls and then
		// providing pre/post hooks on those methods
		// @TODO I don't think that this has been tested and
		// should probably be reimplemented using AOP extension
		/*
		if (preg_match('/^(before|after)_?([a-z])+/i', $name, $match)  && 
		    isset($this->_methods[ strtolower($method = $match[2]) ])) {
			
			// now check that the first argument is a lambda
			if (count($arguments) && 
			    is_callable($lambda = $arguments[0])) {
					
				$this->_hooks[ $name ] = $lambda;
			}
			
			else {
				throw new \Exception(
					"Failed to define hook '$name' on dynamic method '{$match[2]}' " . 
					"because the first argument is not a lambda"
				);
			}
		}

		// next check instance defined methods and call if matched
		// @TODO check once determine safe to remove; I don't believe
		// hooks have ever been used
		/*
		if (isset($this->_methods[$name])) {
			
			// check pre hooks
			if (isset($this->_hooks[ $hook = "before_$name" ])) {
				call_user_func($this->_hooks[$hook]);
			}			
			
			// call dynamically defined method
			return call_user_func_array(
				$this->_methods[$name], $arguments	
			);
			
			// call post hooks
			if (isset($this->_hooks[ $hook = "after_$name" ])) {
				call_user_func($this->_hooks[$hook]);
			}				
		}
		*/

		// first check methods defined in static context
		// and see if we can find a match
		try {
			return call_user_func_array(
				static::method($name), $arguments
			);

		} catch(\Exception $ignore) { }		
		
		// lets provide conversion to underscored and camel case
		// so George can be happy - check which case this is and
		// perform a conversion based on that case, and see if it
		// exists as a method; we are intentionally not providing
		// the inverse to this, as that is simply crazy
		// @TODO i don't know if this should be done, and after
		// looking at it, apears to be a mistake
		if ( \eGlooString::isCamelCase($name) &&
		     method_exists($this, $underscored = \eGlooString::toUnderscores($name))) {
		     	
			return call_user_func_array(array($this, $underscored), $arguments);
		}

		$receiver = static::receiver_id();
		throw new \Exception (
			"Call to undefined instance method '$name' on receiver '$receiver'"
		);
		 
	}

	/**
	 * Returns a lambda, which in effect wraps a class method;
	 * if called from instance context, then lambda will be bound
	 * to context before being returned
	 * @DualContext
	 */
	public function method($method) {
		$class    = get_called_class();
		$instance = isset($this);

		// first we check for a "concrete" static/instance
		// method
		return static::cache("*$class$method", function()
			use ($class, $instance, $method) {

			if (method_exists($class, $method)) {

				// create a reflection instance of existing method
				// bypass visibility, and retrieve closure
				$method = new \ReflectionMethod(
					$class, $method
				);
				$method->setAccessible(true);

				// bind closure to local scope variable lambda
				$lambda = function($__mixed = null) use ($method, $instance) {
					$receiver = $instance 
						? $this
						: null;

					return $method->invokeArgs(
						$receiver, func_get_args()
					);
				};
				
			// 	otherwise, we check up method hierarchy chain
			// for dynamic method
			} else { 
		
				// check instance method definitions if this
				// is instance context; 
				if (isset($this) && isset($this->_methods[$method])) {
					$lambda = $this->_methods[$method];

				// now we check against statically defined methods
				// and see if can find a matching method name
				} else { 

					// first check static method definitions
					$methods = &static::$_smethods;
					$current = $class;

					do {
						if (isset($methods[$current][$method])) {
					
							$lambda = $methods[$current][$method];
						}
							
					} while (($current = get_parent_class($current)));
				}
		
			}

			// check if lambda has been set, either as wrapper on 
			// concrete method, or as a dynamically defined method
			if (isset($lambda)) {

				// check if within instance context, in which case
				// bind instance context to lambda
				if (isset($this)) {
					$lambda = @$lambda->bindTo($this, $this);
				}

				

				return $lambda;
			}
			
			throw new \Exception(
				"Failed to return closure of '$method' because it does not exist"
			);
		});
	}

	/**
	 * Determines correct receiver (class or instance)
	 * @DualContext
	 */	
	protected function receiver() {
		//return debug_backtrace()[1]['type']) == '->'
		//	? $this
		//	: get_called_class();

		return isset($this) 
			? $this
			: get_called_class();
	}

	/** Convenience method to identify current self/receiver 
	 ** @DualContext
	 */
	protected function receiver_id() {
		$id = get_called_class();

		if (isset($this)) {
			$id .= '#insta nce<' . spl_object_hash($this) . '>';
		}

		return $id;
	}

	/**
	 * Determines if a class/instance receiver responds to 
	 * message/method 
	 * @DualContext
	 */
	public function respondTo($name) {
		try {		
			// send method/message to appropriate receiver
			// @TODO may rewrite this as its not very efficient
			// too call method just to check for existence of
			// method
			static::send($name);

		} catch(\Exception $ignore) {
			return false;
		}

		return true;
	}


	public static function __callstatic($name, $arguments) { 
		// check against dynamically defined methods - since we
		// are working class scope, we want to mimic the idea of
		// inheritence; to do this, we move up class hierarchy,
		// from Current to Object and check against methods
		
		// @TOD I don't think this is needed anymore
		// @TODO we need a way to call this all within one method 
		// regardless of fucking context
		// @TODO this needs to be profiled
		$class   = get_called_class();
		$current = get_called_class();
		
		
		
		// if our method dump recieves a method being defined
		// by define method, we need to inject our current
		// context into the method definition
		//if ($name == 'defineMethod' && is_callable($arguments[1])) {
		//}
		
		
		do {
			if (isset(static::$_smethods[$current][$name])) {

				try { 
					return call_user_func_array(
						static::$_smethods[$current][$name], $arguments	
					);
				}
				
				// otherwise pass exception to caller to handle as appropriate
				catch(\Exception $passthrough) {
					throw $passthrough;
				}

			// lets check our deferrables, which are run-once method
			// calls without parameters 
			} else if (isset(static::$_sdefers[$current][$name])) {
				$lambda = static::$_sdefers[$current][$name];
				unset(static::$_sdefers[$current][$name]);

				return call_user_func($lambda);
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

	/** @Deprecated */
	public static function klass() {
		return static::cache(get_called_class(), function($class)  {
			return new Klass($class);
		});		
	}
	

	
	protected static $class;
	protected static $namespace;
	protected static $_singleton;
	protected static $_scache            = array();
	protected static $_smethods          = [ ];
	protected static $ns;
	protected static $_sdefers           = [ ];
	protected        $_methods           = [ ];
	protected        $_cache             = array();
	protected        $_defers            = array();
	protected        $_aliasedProperties = array(); 
	protected        $_attributes        = array();
	protected        $_hooks             = array();
	
	// @TODO return to protected and set as attr_reader

	
	
	
}