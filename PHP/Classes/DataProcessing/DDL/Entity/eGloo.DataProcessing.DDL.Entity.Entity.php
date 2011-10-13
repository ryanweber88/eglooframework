<?php
namespace eGloo\DataProcessing\DDL\Entity;

/**
 * 
 * Represents the structure of data and is responsible for:
 *  - providing the base interface for all ddl objects
 *  - providing the structure of an entity (what it is composed of)
 *  - 
 * @author Christian Calloway
 *
 */
abstract class Entity extends \eGloo\Dialect\Object { 
	
	function __construct() { }
	
	public function init() { }
	
	// CRUD METHODS -------------------------------------------------------- */
	// TODO determine if these should be class or instance variables
	
	public static function create() { }
	public static function find() { }
	public function update() { }
	public function delete() { }
	
	// MAGIC --------------------------------------------------------------- */
	
	public function __get($name) { }
	public function __set($name, $value) { }
	
	public function __call($name, $arguments) { 
		
		// call class object magic method
		parent::__call($name, $arguments);
	}
	
}