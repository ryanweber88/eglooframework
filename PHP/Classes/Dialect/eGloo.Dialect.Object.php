<?php
namespace eGloo\Dialect;

/**
 * 
 * The Java.Lang.Object of eGloo - provides stubs for object behavior as well
 * as some conrete functionality, that in theory, would be shared amongst all
 * objects within the system
 * 
 * @author Christian Calloway
 *
 */
abstract class Object { 
	

	function __construct() { 
		
		// TODO perform static initialization using reflection
		// - the problem though is that reflection is overhead
		// heavy
		
		// does not work - will stop once set
		//if (is_null(static::$class)) { 
		//	static::$class = new _Class($this);
		//}
		
		// @todo this needs to be deprecated as class should represent
		// class, not an instance
		//$this->_class = new _Class($this);
		
		// lets avoid infinite loops shall we
		if (!($this instanceof _Class)) { 
			$this->_class = new _Class($this);
			
			// this doesn't work polymorphically
			//static::$_class = new _Class($this);
		}
		
	}
	
	/**
	 * 
	 * Determines if methodName is callable on object
	 * @param string $methodName
	 */
	public function respondsTo($methodName) { 
		return method_exists($this, $methodName);
	}
	
	public static function isInstanceOf($object) { 
		return $object instanceof static;
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
				
				$actions = [ 'in', 'each', 'find', 'includes', 'like' ];
				
				// find property name and action
				preg_match('/^(.+?)_(.+?)$/', $name, $match);

				// action is specified after '_' character
				$indicies = (in_array($match[1], $actions)) 
					? [ 1, 2 ]
					: [ 2, 1 ];
					
				$action   = $match[array_shift($indicies)];
				$property = $match[array_shift($indicies)];
				
				// check property existence - pluralize if
				// it does not exist
				if (!$this->propertyExists($property)) {
					$property = \eGloo\Utilities\Inflections::pluralize(
						$property
					);
				}

				
				// do a final check on property - if it fails
				// processing will proceed to bottom where an
				// exception will be raised				
				if ($this->propertyExists($property)) { 
				
					// finally retrieve value at specified property
					// name and passed in argument (just as a 
					// convenience)
					// below should throw conven
					$value    = $this->$property;
					$argument = &$arguments[0]; 
					
					
					// now we manage the action processing type - ie, 
					// the type of argument that has been passed. 
				
					// handle generic array functionality
					if (is_array($argument)) {
						
						if (strpos($name, '_in') !== false) {
							return in_array($value, $argument);
						}
						
						else if (is_array($value) && strpos($name, '_includes') !== false) {
							if (is_array($value)) {
								$found = true;
	
								foreach($value as $single) {
									if (!in_array($single, $argument)) {
										$found = false;
										break ;
									}
								}
							}

							
							return $found;
						}
						
					}
					
					// handle generic string functions
					else if (is_string($arguments)) {
						if (strpos($name, '_like') !== false) {
							return preg_match($argument, $value);
						}
			
					}
					
					// handle generic lamda/block callbacks
					else if (is_callable($argument)) {
						
						$lambda = &$argument;
						
							
						// handle array-oriented callbacks
						if (is_array($value)) { 
						    
																
							// use reflection to determine parameter count
						    $includeKey = (
						    	count((new ReflectionFunction($arguments[0]))->getParameters()) > 1
						    );
							
							// provide and each iterator on array properties
							if (strpos($name, 'each_') === 0) { 
		
						    	foreach($this->$property as $key => $value) {
						    		if ($includeKey) {
						    			$lambda($key, $value);
						    		}	
						    		
						    		else { 
						    			$lambda($value);
						    		}
						    	}
							}
							
							// provide a find iterator for array properties
							else if (strpos($name, 'find_') === 0) { 
								foreach($this->$property as $key => $value) {
									if ($includeKey) {
										$found = $lambda($key, $value);
									}
									
									else {
										$found = $lambda($value);
									}
									
									if ($found) { 
										break ;
									}
								}	
	
								return $found;
							}
						}	
					}	
					
					return false;
				}
							
			}
		
		}
		
		// otherwise we are attempting an accessor; try and return property
		// fail gracefully ? (or throw exception) if property does not exist
		else if ($this->propertyExists($name)) { 
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
}