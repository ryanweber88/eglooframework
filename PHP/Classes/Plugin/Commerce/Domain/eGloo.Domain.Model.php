<?php
namespace eGloo\Domain;


/**
 * Superclass for all domain models; provides generic functionality
 * @author Christian Calloway callowaylc@gmail.com
 */
abstract class Model extends \eGloo\Utilities\Delegator {
	
	function __construct() {
		// pass to parent delegator::__construct our *DataAccess
		// instance
		try {
			parent::__construct(static::data());
		}	
		
		// there is not a gaurentee that every class will have an
		// associated *DataAccess to delegate to - in which case
		// we simply ignore the generated exception
		catch(\Exception $ignore) { 
			exit;
			// if there is not an associated *DataAccess, we fall back to our 
			// moreso abstract parent Domain\Data
			parent::__construct(new Domain\Data);
		}
		
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