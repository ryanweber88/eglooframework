<?php
namespace eGloo\Dialect;

/**
 * 
 * The java.lang.Object of eGloo - provides stubs for object behavior as well
 * as some conrete functionality, that in theory, would be shared amongst all
 * objects within the system
 * 
 * @author Christian Calloway
 * @todo   limit_static
 *
 */
abstract class Object implements MetaInterface { 
	
	use \eGloo\Utilities\MagicMethodTrait;


	function __construct() { 
		
		
		
		// lets avoid infinite loops shall we - instantiate
		// our meta classes which in turn extend object
		
		
		// instantiate class - class instantiation is pull from
		// a static repository, as classes are unique and can
		// be uniquely identified
		 
		// @todo limit_static
		if (!isset(static::$__classes[get_class($this)])) {
			static::$__classes[get_class($this)] = new _Class($this);
		}
		
		$this->_class = static::$__classes[get_class($this)];
		
		// instantiate singleton - a singleton represents a single
		// instance of an object, and every single object instance
		// will have one
		$this->_singleton = new Singleton($this);
		
		
		// point instance to static methods
		$this->_methods = &static::$__methods;
		
		
	}
	
	/**
	 * Defines a method on instances singleton instance - defining
	 * a method on class requires doing so explicitly
	 * @see eGloo\Dialect.MetaInterface::defineMethod()
	 */
	public function defineMethod($name, callable $lambda) { 
		// defines a method for this instance only
		$this->_methods[$name] = $lambda;
		
		return $lambda;
	}
	
	/**
	 * 
	 * Determines if $name is callable on object - also
	 * takes a look at 
	 * @param string $name
	 */
	public function respondTo($name) { 
		return method_exists($this, $name) || isset($this->_methods[$name]);
	}	
	
	/**
	 * 
	 * Used to call method on singleton/class defined dynamic methods - 
	 * does not gaurentee that they exist prior to execution
	 * @param  string  $name
	 * @param  mixed[] $arguments
	 * @return mixed
	 */
	public function send($name, $arguments) {
		
		// methods declared/defined in class definition will take precedence
		if (method_exists($this, $name)) {
			return call_user_func_array([ $this, $name ], $arguments);
		}
		
		// otherwise, mine method from singleton, then class context
		foreach([ $this, $this->_class ] as $meta) { 
			return call_user_func_array($meta->_methods[$name], $arguments);
		}
		
		throw new Exception(
			"Could not call method $name on reciever " . get_class($this)
		);
	}
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\Dialect.MetaInterface::retrieveMethod()
	 */
	public function retrieveMethod($name) {
		return $this->_methods[$name];
	}
	

	

	
	/**
	 * 
	 * Determines if class is-a, extends-a or implements-a 
	 * @param class $class
	 */
	public function isInstanceOf($class) { 
		return $this instanceof $class;
	}
	
	/**
	 * 
	 * Checks class trait history as well inheritance
	 * @param mixed $mixed
	 */
	public function isKindOf($mixed) { 
		// pass
	}
	
	/**
	 * 
	 * Copies the idea Ruby's ClassName.new() constructor; this is done to allow
	 * for object dereferencing on instantiation; will have to be overriden for
	 * signature specific constructors
	 * WARNING: This will only work in > 5.3
	 * @param mixed $arguments
	 * @return instanceofself
	 * @deprecated This functionality has been moved to class
	 */
	public static function rnew(array $arguments = [ ]) { 
		$className = get_called_class();
		return new $className();
	}
		
	/**
	 * 
	 * Provides equality interface for classes implementing Object
	 * @param mixed $object
	 */
	public function equals($object) { 
		return true;
	}
	
	/**
	 * 
	 * Provides basic/generic toArray functionality
	 */
	public function toArray() {
		// @todo cache into singleton
		// @todo do this later
		/*
		$properties = [ ];
		$filter     = \ReflectionProperty::IS_PUBLIC | \ReflectionProperty::IS_PROTECTED;
		
		foreach((new \ReflectionClass($this))->getProperties($filter) as $property) {
			$value = $property->getValue();
			
			if (is_object($value) && $value instanceof Object) {
				$value = $value->toArray();
			}
			
			else if (is_)
			$properties[$property->getName()] = is_object($property->getValue())	
		}
		*/
	}
	
	
	/**
	 * 
	 * Provides attr_reader quality to php objects - calls __call 
	 * to cement retrieval. Like __call methods, this can be 
	 * overriden with a method of the same name as property
	 * @param  string $name
	 * @throws \eGloo\Dialect\Exception
	 * @return  mixed
	 */
	public function __get($name) {
		// route getProperty or get method call through call

		try { 
			$tryMethod = "get" . ucfirst($name);
			
			if (method_exists($this, $tryMethod)) { 
				return $this->$tryMethod();	
			}		

			return $this->$name();
		}
		catch (Exception $pass) { 
			throw $pass;
		}
	}
	
	
	/**
	 * 
	 * Provides attr_writer quality to php objects - $obj->property = value
	 * will actually call $obj->property($value); to implementors, it will
	 * appears as if setting public properties
	 * @param  string $name
	 * @param  mixed  $value
	 * @throws \eGloo\Dialect\Exception
	 * @return void
	 */
	public function __set($name, $value) { 
		// route set through setProperty or property method call
		try { 
			$tryMethod = "set" . ucfirst($name);
			
			if (method_exists($this, $tryMethod)) { 
				$this->$tryMethod($value);
				return $this;	
			}
						
			
			$this->$name($value);
		}
		catch (Exception $pass) { 
			throw $pass;
		}
	}
	
	/**
	 * 
	 * Taking a step away from the java world, and into ruby, (protected) properties 
	 * will be accessed by dynamic method call "$object->propertyName($value = null)";
	 * like Ruby, this functionality can be overriden by defining a like named method 
	 * if one wishes to encapsulate business logic within an accessor/mutatator. As
	 * an added benefit, dynamic methods return a reference to self, so as to allow
	 * for chaining
	 * @param string $name
	 * @param mixed* $arguments
	 */
	public function __call($name, $arguments) { 
				

		// check defined methods - this takes precedence, so its
		// up to the developer to ensure an avoidance of 
		// collision
				
			
		foreach ([$this, $this->_class ] as $meta) {
			if (isset($meta->_methods[$name])) {
				return call_user_func_array(
					$meta->retrieveMethod($name), $arguments
				);
			}
		}
		
		// define a default getter/setter and cache into 
		// class level method for quicker retrieval in future
		if (property_exists($this, $name)) {
			
			// @todo below does not work - getting 
			// PHP Fatal error:  Cannot assign by reference to overloaded object 
			
			//$this->_singleton->$name = &$this->$name;
			
						
			// define a class level method
			$function = function($argument = null) use ($name) {
				// if an argument has been specfied, then
				// this a set method
				if (is_null($argument)) { 
					return $this->$name;
				}
			
				$this->$name = $argument;
				return $this;
			};
			
			$this->defineMethod($name, $function);
			
			return count($arguments) 
				? $function($arguments[0])
				: $function();
			
		}
		
		// determine if setter/getter - since we are setting single
		// property values, $arguments should have an value a single
		// value at the fist index
		
		else if (count($arguments) && ($mixed = $this->callMagicOn($name, $arguments, $this)) !== false) {
			return $mixed;
		}

		
		// A bailout exception in the case that above processing
		// failed to find appropriate exception
		throw new Exception(
			'ATTEMPTED TO ACCESS INVALID PROPERTY OR FLEX METHOD : ' . $name
		);		
	}
	
	/** @deprecated */
	protected function setOrGet($propertyName, $value = null, \Closure $lambda = null) { 
		// convenience method when overriding property() methods, so that we don't
		// have to check for whether a get or set has been request - in the case
		// of set, a callback is supplied to set value
		
		// value is null, a 'get' has been requested
		if (is_null($value)) { 
			return $this->$propertyName;
		}
		
		// call lambda and return reference to self
		if (!is_null($value = $lambda($value))) {
			$this->$propertyName = $value;
		};
				
		return $this;
	}
	
	protected function sget($propertyName, $value = null, \Closure $lambda = null) { 
		return $this->setOrGet($propertyName, $value, $lambda);
	}
	
	protected function methodExists($methodName) { 
		return method_exists($this, $methodName);
	}
	
	protected function propertyExists($propertyName) { 
		return property_exists($this, $propertyName);	
	}
	
	protected $_class;
	protected $_singleton;
	protected $_methods;
	
	static protected $__classes  = [ ];
	static protected $__methods  = [ ];
}