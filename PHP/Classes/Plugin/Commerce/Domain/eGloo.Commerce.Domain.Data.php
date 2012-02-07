<?php
namespace eGloo\Commerce\Domain;

// @TODO replace_object_safe
use \eGloo\Dialect\ObjectSafe as Object;
use \eGloo\Commerce;

/**
 * Serves as parent class to all *DataAcces Classes; general purpose is to provide
 * convenience methods to *DataAccess
 */
abstract class Data extends \eGloo\DataProcessing\Connection\PostgreSQLDBConnection {
	
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
		
} 