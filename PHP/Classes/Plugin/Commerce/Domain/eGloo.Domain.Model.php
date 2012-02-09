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
	
	/**
	 * Uses reflection/polymorphism to determine caller name, from
	 * which we derive the name of our *DataAccess class; this simply
	 * serves as a convenience to access *DataAccess::instance()
	 * @return Data
	 * @TODO is this even needed anymore if we are delegating to data class?
	 */
	protected static function data() {
		$className     = get_called_class();
		$dataClassName = get_called_class() . 'DataAccess';

		if (class_exists($dataClassName)) {
			return $dataClassName::instance();
		} 
		
		// otherwise fallback to domain\data
		else {
			return new Data;
		}
		
		// notify caller that our DataAccess class does not exist
		//throw new \Exception(
		//	"DataAccess module $dataClassName does not exist for $className"	
		//); 
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
	
}