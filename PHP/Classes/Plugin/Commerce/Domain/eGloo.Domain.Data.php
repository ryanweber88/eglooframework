<?php
namespace eGloo\Domain;


/**
 * Serves as parent class to all *DataAcces Classes; general purpose is to provide
 * convenience methods to *DataAccess
 */
class Data extends \eGloo\DataProcessing\Connection\PostgreSQLDBConnection {
	
	function __construct($resource = null) {

		// pass resource to parent constructor, that is responsible for managing connection
		parent::__construct($resource);
	}
	
	/**
	 * Alias to Object::instance
	 *
	 * @return $this class object
	 */
	public static function fetch () {
		return static::instance();
	}
	
	/**
	 * Used as dynamic/shorthand method to build array 
	 * 
	 */
	public static function __callstatic($name, $arguments) {

		// not going to do rigorous checks here right now 
		if (strtolower($name) == 'insert') {
			$idioms = $arguments[1]; 
			$statement = 
				"insert into ({$idioms['into']}) values (" .
				array_fill(0, count(explode($idioms['with_fields'])), '?') .
				")";

			echo $statement; exit;
		}
	}
	

	/**
	 * Executes a statement on underlying layer - currently makes use of *DataAccess
	 * classes, but will be replaced with dpstatement - think about this some more
	 * @param string $statement
	 * @param variable-length $__mixed
	 */
	public static function statement($statement, $__mixed = null) {
		
		// basically we're checking to see if statement is just one word, which indicates we
		// are passing an "idiomatic" statement 
		if (!preg_match('/\s/', $statement)) {
			
		}
	
		// make sence of our params - we are providing variable length argument
		// lists - the second param may be an array, or simply accept all arguments
		// to callable is found
		if (count($arguments = array_slice(func_get_args(), 1)) >= 1) {
			
			// first we are going to check for our lambda, which must come
			// at the end of our argument list
			$lambda = is_callable($last = $arguments[count($arguments)-1]) 
				? $last 
				: false;
			
			
			// in this instance, arguments to statement are passed in as array
			// and they can be passed directly to statement methods - we reset
			// our arguments to reflect the array passed as second parameter
			if (is_array($arguments[0])) {
				$arguments = $arguments[0];
			}
			
			// otherwise we assume that statement arguments have
			// been pased in one at a time, and we also must check to
			// see if lambda has been passed as last argument - 
			// name parameters would be very useful here
			else {
				
				// slice the end off of arguments if a lambda has indeed been found
				// since we know that it must occupy the last rung
				if (is_callable($lambda)) {
					$arguments = array_slice(
						$arguments, 0, count($arguments)-1
					);
				}
				
			}
			
		} 
		
	
	
		// determine who is calling method - this will be used to track down where/when
		// statements are made for later refactor
		$caller = static::caller();
		// retrieve *DataAccess instance
		//try {
		//	$dataAccess = static::data();
		//}
	
		//catch(\Exception $passthrough) {
			//$dataAccess = new Data;
		//}
		
		// need to think whether this method should be here
		$dataAccess = new static;

		// determine method to call on delegated data access
		// class - for the time being, we will use getList, but
		// we will need to inspect our statement for query type
		// @TODO inspect statement for query type - for now just
		// perform messy regex
		preg_match('/^\s*?(\S+)/is', $statement, $match);
		
		
		
		
		$method = ($match = strtolower($match[1])) == 'select'
			? 'getList'
			: 'execute' . ucfirst($match);
		
		// lets do some magic - lets determine arguments if first
		// argument is a model, and we are performing an update/insert
		// statememnt; please note that this isn't always going to 
		// work so use with caution
		
		if (isset($arguments[0]) && 
				($model = $arguments[0]) instanceof Model && 
				$match == 'insert' ) {
			
			// for this to work, you must specify the fields
			if (preg_match('/\((.+?)\)/', $statement, $match)) {
				$arguments = array();
				
				foreach(explode(',', $match[1]) as $field) {
					
					try { 
						$arguments[$field = trim($field)] = $model->$field;	
					}
									
					catch(\Exception $passthrough) {
						// @TODO this is an instancer where I'd like to have a StackException
						
						throw new \Exception(
							"Could not find attribute $field on receiver " . get_class($this) . 
							" when attempting to autogenerate arguments for statement"	
							
						);
						
						//throw $passthrough;
					}
					
				}
				
			}
		}
			
		// retrieve data set
		// @TODO we have to determine nature of query, as there is no
		// point in return a multi-result set if performing an insert
		// for example
		$result = $dataAccess->$method($statement, $arguments);
		
		// set result to false if we don't have a match
		// @TODO this should be fixed at connection level,
		// but that can be managed later - need to make sure
		// an empty array isnt expected behavior
		if (is_array($result) && !count($result)) {
			$result = false;
		}
		
		// determine if result is array, in which case take a look at
		// make up for return set
		if (is_array($result)) {
			
			// reference result with 'set' which is a more apt descriptor
			// of our result, plus will provide the added benefit of
			// of applying changes to set will be returned in $result
			// at the bottom of this method (perhaps not the clearest)
			// but a tad slick
			$set = &$result;

			// perform a count on a single record in set and determine
			// if it only contains one field value - in this instance
			// we truncate the array to just that value because 99%
			// of the time, we will know the field key being used -
			// if not, we can use one of the baser methods
			
			if (count($set[0]) == 1) {
				$values = array();
				$key    = \current(array_keys(
						$set[0]
				));
					
				foreach($set as $record) {
					$values[] = $record[$key];
				}
					
				$set = $values;
			}
			
			// here we provide some convenience for our returned
			// set - if only one record within set, then we don't
			// want to return multidimensional set
			if (count($set) == 1) {
				$set = $set[0];
			}
						
			// if our result set
			if (isset($lambda) && is_callable($lambda)) {
				// otherwise, iterate through set
				$inject = false;
				
				foreach($set as $record) {
					// here we copy the ruby array#inject, by allowing
					// to pass forward the value returned from last lambda
					// call
					$inject = $lambda($record, $inject);
						
				}
				
				// return inject to caller - in most instances this will null
				return $inject;				
			}
			
		}
		
		// return result, which is being referenced by $set and whose
		// value may have been manipulated based on the return result
		return $result;
	
	}	
	
	
	/**
	 * The 'find' method serves as a alias to loadById method, employed by many of the domain model
	 * classes; dynamic finders are also used by EPA, which will make transition easier
	 * @TODO this needs to be replaced with override or method alias - because not all will load
	 * unless loadById exists - method_alias is much more flexible
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
	

	
	// These are stubbed for the time being - we can't really do a full
	// orm implementation, so they will accept variable arguments and
	// will be drastically different in inherited classes - the point
	// is to provide a single, comprehensive interface from which to 
	// work - if an attempt is made to call on these method, an
	// exception will be thrown as they cannot know their
	// definition until defined in child classes
	/**
	 * Acts as retrieve all - in most cases this will serve as an alias to load*List in
	 * domain model classes; this method should be declared abstract, but since it
	 * was provided after the meat of the domain has been built, and because I don't
	 * want to go through every single domain class and add method, an exception
	 * has been added so user can override in calling child individualy
	 */
	public static function all($lamba = null) {
		static::fakeAbstractMethod(__FUNCTION__);
	}	
	
	public static function create($arguments = null) {
		static::fakeAbstractMethod(__FUNCTION__);
	}
	
	
	public function update($arguments = null) { 
		static::fakeAbstractMethod(__FUNCTION__);
	}
	
	public function save($arguments = null)   {
		static::fakeAbstractMethod(__FUNCTION__);
	}
	
	public function delete($arguments = null) {
		static::fakeAbstractMethod(__FUNCTION__);
	}
	
	private static function fakeAbstractMethod($method) {
		// since this class and its descendants are delegated too, and
		// because its descendants are numerous and I don't feel like going
		// through each to manage an abstract method definition, we 
		// provide this method to throw an exception if method
		// is not overriden in calling class
		throw new \Exception(
			"You must override $method in " . get_called_class()
		);
	}
		
} 