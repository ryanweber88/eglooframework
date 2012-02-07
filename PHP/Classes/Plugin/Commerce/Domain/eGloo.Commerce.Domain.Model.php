<?php
namespace eGloo\Commerce\Domain;


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
			exit("here");
		}
		
		//exit("there");
	}
	
	/**
	 * Uses reflection/polymorphism to determine caller name, from
	 * which we derive the name of our *DataAccess class; this simply
	 * serves as a convenience to access *DataAccess::instance()
	 * @return Data
	 */
	protected static function data() {
		$className     = get_called_class();
		$dataClassName = get_called_class() . 'DataAccess';
		
		if (class_exists($className)) {
			return $dataClassName::instance();
		} 
		
		// notify caller that our DataAccess class does not exist
		throw new \Exception(
			"DataAccess module $dataClassName does not exist for $className"	
		); 
	}
	
	/**
	 * Executes a statement on underlying layer - currently makes use of *DataAccess
	 * classes, but will be replaced with dpstatement - think about this some more
	 */
	protected static function statement($mixed, array $arguments = null) {
		
		$caller = static::caller();
		
		// retrieve *DataAccess instance
		try { 
			$dataAccess = static::data();
		}
		
		catch(\Exception $passthrough) {
			throw $passthrough;
		}
		
		// call method if case 
		return method_exists($dataAccess, $statement) 
			? call_user_func_array(array($dataAccess, $statement), $arguments)
			: $dataAccess->executeQuery($statement, $arguments);

	}
	
	/**
	 * The 'find' method serves as a alias to loadById method, employed by many of the domain model
	 * classes; dynamic finders are also used by EPA, which will make transition easier
	 * @return Model | Model[]
	 */
	public static function find($key) {

		$className = get_called_class();
		
		if (method_exists($className, 'loadByID')) {
			// convert key to array, in instances where we want to return
			// a set, as opposed to individual object
			$key = count(func_get_args()) > 1
				? func_get_args()
				: array($key);
				
			
			if (count(func_get_args()) > 1) {
				$key = func_get_args();
			}
			
			$models = array();
			
			foreach($key as $key) {
				$models[] = $className::loadByID($key);				
			}
			
			if (count($models)) { 
				return count($models) > 1
					? $models 
					: array_pop($models);
			}
			
			return false;
		}
		
		throw new \Exception(
			"Cannot alias to loadByID because it does not exist in domain class $className"		
		);

	}
	
	/**
	 * Acts as retrieve all - in most cases this will serve as an alias to load*List in
	 * domain model classes; this method should be declared abstract, but since it
	 * was provided after the meat of the domain has been built, and because I don't
	 * want to go through every single domain class and add method, an exception
	 * has been added so user can override in calling child individualy
	 */
	public static function all() {
		throw new \Exception(
			'You must override all method in ' . get_called_class()
		);
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