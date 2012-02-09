<?php
namespace eGloo\Domain;


/**
 * Superclass for all domain models; provides generic functionality
 * @author Christian Calloway callowaylc@gmail.com
 */
abstract class Model extends \eGloo\Utilities\Delegator {
	
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
			//var_export($__mixed); 
			foreach($__mixed as $key => $value) {
				$this->$key = $value;
			}
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
			
	}

	
	protected function aliasProperties() {
		
		// from ClassNameYada derive pattern class_class1_class2
		$class = strtolower(preg_replace(
			'/([a-z])([A-Z])/', '$1_$2', static::className()
		));
				
		// attempt to alias class/domain/entity specific properties
		// to generic; ie, product_id, product_name, product_count to
		// id, name, count
		$generics = array(
			'id',
			'name'		
		);

		foreach($generics as $generic) { 
			// this will do nothing if property does not exist, and throw an exception if it
			// does, in order to avoid an overwrite
			$this->aliasProperty(		
				$generic, "{$class}_id"	
			);
		}
		
		
	}
	
	protected function aliasMethods() {
		$class = static::className();
		
		
	}
	
	protected static function aliasMethodsStatic() {
		$class = static::className();
		
		// provide reg exp list to check methods against
		$lookFor = array(
				'/loadByI(D|d)/'                   => 'find',
				"/load{$class}ByI(D|d)/"           => 'find',
				'/load([A-Z][a-z]+?)By([a-zA-Z])/' => 'find_by_$1_$2',
				"/load{$class}List/"               => 'all' 
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
						static::aliasMethodStatic(
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
	 * Provides 2array access for domain models
	 */
	public function toArray() {
		// simplified behavior is simply to return to properties,
		// but this will have to be changed in future
		
		return $this->properties;
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
	public function __get( $key ) {
		
		//if ( isset($this->properties[$key] )) {
		//	return $this->properties[$key];
		//}
		
	}	
	

	/**
	 * Currently this acts as a passthrough to our parent delegator
	 */
	public function __call($name, $arguments) {
		return parent::__call($name, $arguments);
	}
	
	/**
	 * We must override parent delegator and attempt to delegate to
	 * static methods on *DataAccess, because PHP does NOT having
	 * fucking static constructing
	 */
	public static function __callstatic($name, $arguments) {

		
		if (method_exists($data = static::data(), $name)) {			
			return call_user_func_array(
				array($data, $name), $arguments	
			);
			
		}
			
		// defer to parent if not able to delegate
		return parent::__callstatic($name, $arguments);
	}
	
	private function guessPrimaryKey() {
		// attempt to get primary key based on strlower(classname)_id pattern
		$tokens       = explode('\\', get_class());
		$primary_key  = strtolower(array_pop($tokens)) . '_id';
		
		return property_exists($this, $primary_key)
			? $primary_key
			: false;
		
	}
	
}