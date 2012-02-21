<?php
namespace eGloo\Domain;

use \eGloo\Utilities\Delegator;

/**
 * Superclass for all domain models; provides generic functionality
 * @author Christian Calloway callowaylc@gmail.com
 */
abstract class Model extends Delegator 
	implements \eGloo\Utilities\ToArrayInterface {
	
	// this acts as a store for adding runtime instance properties
	// @TODO this will be replaced, as storing values will be delegated
	// in the future
	protected $properties = array();
	
	/**
	 * @param variable-length $__mixed
	 */
	function __construct($__mixed = null) {
		
		// make sence of parameter - this will change as EPA
		// is folded into our domain model
		if (is_array($__mixed) && \eGloo\Utilities\Collection::isHash($__mixed)) {
			$this->initialize($__mixed);
		}
		
		// pass to parent delegator::__construct our *DataAccess
		// instance or Domain\Data
		try {
			parent::__construct(static::data());
		}	
		
		// there is not a gaurentee that every class will have an
		// associated *DataAccess to delegate to - in which case
		// we simply ignore the generated exception
		catch(\Exception $ignore) { }
		
		
		// call our relationships method, which provides callbacks attached
		// to the names of our relationships
		$this->__relationships();
		
		

	}
	
	/** @Polymorphic */
	static function __static() {
		// assign static delegation 
		Delegator::delegate(get_called_class(), get_class(static::data()));
	}
	
	/**
	 * Responsible for initialize of model attributes
	 */
	protected function initialize(array $arguments) {

		foreach($arguments as $name => $value) { 
			$this->$name = $value;
		}
				
		// call __relationships - the idea is that child classes should
		// use method as area to concretely draw all domain based relationships;
		// this method should be seen as a constructor for relationships
		$this->__properties();

		
		// finally set flag 'initialized' to true
		$this->initialized = true;
	}
	
	/**
	 * Makes a determination if model has been initialized
	 */
	public function initialized() {
		return $this->initialized;
	}
	

	
	/**
	 * This is an alias to defineMethod - currently it is here for 
	 * idiomatic reasons only
	 */
	protected function defineRelationship($name, $lambda) {
		// get model name, using inflection class
		// @TODO this will need to be changed as it doesn't
		// belong here
		$model = '\\Common\\Domain\\Model\\' . 
		         \eGloo\Utilities\InflectionsSafe::instance()
			       ->singularize($name);
				
		if (class_exists($model)) {
			return $this->defineMethod($name, function() use ($model) {
				return $lambda($model);
			});
		}
		
		throw new \Exception(
			"Failed to define relationship \"$name\" because model \"$model\" does not exist"	
		);
	}
	
	/**
	 * A stubb method here to be used by concrete model classes
	 */
	protected function __relationships() { }
	
	/**
	 * @param variable-length $__mixed
	 */
	static function __constructStatic($__mixed = null) {
		static::defineMethod('columns', function() {
			throw new \Exception('columns not implemented - because it sucks'); 	
		});
		
	}
	
	
	
	/**
	 * Provides an array representation of model
	 */
	public function __toArray() {
		
		// wrap our current domain\model instance in arrayaccess 
		// in most instances, this will be to our smarty instance
		// which should only accept type scalar or array
		return new Utility\ArrayAccess(
			$this	
		);
		
	}	

	
	protected function __properties() {
		// call our parent method to ensure any property work is done
		// up hierarchy chain
		parent::__properties();
		
		// from ClassNameYada derive pattern class_class1_class2
		$class = strtolower(preg_replace(
			'/([a-z])([A-Z])/', '$1_$2', static::className()
		));
				
		// iterate across properties and determine if they
		// fit pattern of $class_(name)
		// @TODO replace self reference - stupid 5.3 issue
		$self = $this;
				
		
		// @TODO static cache is not working here - needs to be
		// polymorphic
		$properties = static::cache(function() use ($self) {
			return \array_keys(\get_object_vars($self));
		});
		
		$properties = \array_keys(\get_object_vars($this));
		
		
		foreach($properties as $name) {
			if (preg_match("/{$class}_(.+)/", $name, $match)) {
				$this->aliasProperty(
					strtolower($match[1]), $name	
				);				
			}
		}
		
		
	}
	
	
	protected static function __methodsStatic() {
		$class = static::className();
		
		// provide reg exp list to check methods against
		$lookFor = array(
				'/loadByI(D|d)/'                   => 'find',
				"/load{$class}ByI(D|d)/"           => 'find',
				'/load([A-Z][a-z]+?)By([a-zA-Z])/' => 'find_by_$1_$2',
				"/load{$class}List/"               => 'all',
				"/create{$class}/"                 => 'create' 
		);

		// retrieve list of methods from class
		$reflection = new \ReflectionClass(get_called_class());
		$methods    = $reflection->getMethods(\ReflectionMethod::IS_STATIC);
		
		// iterate through patterns and check against our static methods
		// drawing up aliases where patterns match
		foreach($lookFor as $pattern => $alias) {
			foreach($methods as $method) {
				if (preg_match($pattern, $method->getName(), $match)) {
					
					try { 
						static::aliasMethod(
							$alias, strtolower(preg_replace(
								$pattern, $alias, $method->getName()
							)) 	
						);
					}
					
					// since we are not looking for a "steadfast" rule,
					// we ignore any exception generated by the fact that
					// method does not exist - the only caveat here is
					// that 
					catch(\Exception $e) { }
				}
			}		
		}
	}
	
	
	/**
	 * Aliases our primary key to 'id'
	 */
	protected function aliasPrimaryKey($alias) {
		$this->aliasProperty($alias, 'id');
	}
	
	/**
	 * Uses reflection/polymorphism to determine caller name, from
	 * which we derive the name of our *DataAccess class; this simply
	 * serves as a convenience to access *DataAccess::instance()
	 * @return Data
	 * @param variable-length $__mixed 
	 * @TODO is this even needed anymore if we are delegating to data class?
	 */
	protected static function data($__mixed = null) {
		$className     = get_called_class();
		$dataClassName = get_called_class() . 'DataAccess';

		$interface = class_exists($dataClassName)
			? $dataClassName::instance()
			: new Data;
		
		// Model::data will allow us to pass arguments to invoke funcitonality
		// directly on dataaccess, or pass in a lambda to access instance - 
		// this may expand as need arises
		if (count($arguments = func_get_args())) {
			
			// in this instance we will be dynamically invoking a method and passing
			// any additional parameters as arguments to invoked method
			// @TODO I don't know if this really needed, over say data()->method
			// but does provide some niceities in terms of clean presentation
			if (is_string($method = $arguments[0])) {
				return call_user_func_array(
						array($interface, $method), array_slice($arguments, 1)
				);
			}
			
			// in the instance of passing a lambda/block, we will pass the interface to
			// the lambda and return to caller the return from lambda
			else if (is_callable($lambda = $arguments[0])) {
				return $lambda($interface);
			}
		}
		
		return $interface;
		
 
	}
	

	/**
	 * Set/create properties on instance; this will
	 * eventually be removed and handled via delegated
	 * class
	 *
	 * @param type $key
	 * @param type $value
	 */
	public function __set($key, $value) {
		// because we rely on certain instance fields being set
		// during class definition (or when class is self) we
		// also set field on public
		// @TODO remove and place into properties when we
		// have figured out succesful toArray implementation
		// on our classes
		$this->$key = $value;
		
		// we also set on properties to maintain backwards 
		// compatibility on anything that is explicitly 
		// setting/getting on properties
		$this->properties[$key] = $value;
		
		return $this;
	}
	
	/**
	 * Get properties on instance that belong to
	 * our properties array; this will eventually
	 * be removed and handled on our delegated class
	 * 
	 * @param type $key
	 *
	 * @return mix type object retrieved from brand
	 *
	 */
	public function __get($name) {
		
		//if ( isset($this->properties[$key] )) {
		//	return $this->properties[$key];
		//}
		
	
		// check if name has been defined in methods - if so, 
		// and method does not take arguments, call method
		if (isset($this->_methods[$name])) {
			$reflection = new \ReflectionFunction(
					$this->_methods[$name]
			);
			
			// we don't want to use __get as replacement or alternative
			// to __call, but simply to call methods, which look like
			// properties, where it makes sense 
			if (count($reflection->getParameters()) == 0) {
				return call_user_func(
						$this->_methods[$name]
				);
			}
			
		}
		
		// otherwise pass to parent __get handler for higher level
		// processing

		
		return parent::__get($name);
			
		
		
	}	
	
	
	private function guessPrimaryKey() {
		// attempt to get primary key based on strlower(classname)_id pattern
		$tokens       = explode('\\', get_class());
		$primary_key  = strtolower(array_pop($tokens)) . '_id';
		
		return property_exists($this, $primary_key)
			? $primary_key
			: false;
		
	}
	
	static protected function factory($name) {
		/*
		$refle
		$class = static::namespace() . "\\Model\\$name";
	
		if (class_exists($class)) {
			return new $class;
		}
		*/
		throw new \Exception(
				"Failed to create model $class becfause it does not exist"
		);
	}	
	
	
	
	
	private $initialized = false;
}