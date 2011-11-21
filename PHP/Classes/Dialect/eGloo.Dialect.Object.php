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
abstract class Object { 
	
	use \eGloo\Utilities\MagicMethodTrait;


	function __construct() { 
		
		// TODO perform static initialization using reflection
		// - the problem though is that reflection is overhead
		// heavy
		
		// does not work - will stop once set
		//if (is_null(static::$class)) { 
		//	static::$class = new _Class($this);
		//}
		

		//$this->_class = new _Class($this);
		
		// lets avoid infinite loops shall we
		if (!($this instanceof _Class)) { 
		 
			// @todo limit_static
			if (!isset(static::$_classes[get_class($this)])) {
				static::$_classes[get_class($this)] = new _Class($this);
			}
			
			$this->_class = static::$_classes[get_class($this)];
			
			// this doesn't work polymorphically
			//static::$_class = new _Class($this);
		}
		
	}
	
	/** @todo limit_static */
	protected function defineMethod($name, $lambda) { 
		if (is_callable($lambda)) {
			static::$_methods[$name] = $lambda;
		}
		
		throw new DDL\Exception\Exception(
			'Illegal argument exception : parameter ' . 
		    'must be of type lambda'
		);
	}
	
	/**
	 * 
	 * Determines if methodName is callable on object
	 * @param string $methodName
	 */
	public function respondsTo($methodName) { 
		return ( 
			method_exists($this, $methodName) || isset(static::$_methods[$methodName]) 
		);
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
	 * @param unknown_type $object
	 */
	public function equals(\eGloo\Dialect\Object &$object) { 
		return true;
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
		
		// @todo replace after references to instance members have
		// been replaced
		//if ($name == '_class') {
			//return static::$_class;	
			
		//}
		

		//echo "getting $name on " . get_class($this) . "\n";
		
		try { 
			$tryMethod = "get" . ucfirst($name);
			
			if (method_exists($this, $tryMethod)) { 
				return $this->$tryMethod();	
			}		
			
			if ($name == 'callbacks') {
				echo 'callbacks in object::__get' . "\n";
				$this->callbackss();
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
		
		//echo "$name\n";
		if ($name == 'callbackss') {
			exit('fuck yasdf');
		}
		
		// check defined methods - this takes precedence, so its
		// up to the developer to ensure an avoidance of 
		// collisions
		if (isset(static::$_methods[$name])) {
			return call_user_func_array(
				static::$_methods[$name], $arguments
			);
		}
		
		// determine if setter/getter - since we are setting single
		// property values, $arguments should have an value a single
		// value at the fist index
		if (count($arguments) && !is_null($arguments[0])) { 
			
			// set property, but only if it exists! since php allows you
			// to arbitrarily create public members, we are specifically
			// disallowing that behavior here - an exception is thrown if
			// an attempt to access a property that does not exist is made
			if ($this->propertyExists($name)) {
				$this->$name = $arguments[0];
				
				return $this;
			}
			
			// flexible api/magic methods 
			else { 
				
				// use trait method to attempt or look for
				// signature of magic method call - if any value
				// other than absolute boolean false is returned
				// we return that value to caller
				if (($mixed = $this->callMagicOn($name, $arguments, $this)) !== false) {
					return $mixed;
				}
							
			}
		
		}
		
		// otherwise we are attempting an accessor
		else if (property_exists($this, $name)) { 
			if ($name == 'callbacks') {
				exit('here');
			}
			return $this->$name;
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
	static protected $_classes;
	static protected $_methods;
}