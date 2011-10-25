<?php
namespace eGloo\DataProcessing\DDL\Statement;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Responsible for building determining entity interface
 * @author Christian Calloway
 * @todo   Need limit architecture placed on static storage
 *
 */
class Group extends \eGloo\Dialect\Object { 
	
	use \eGloo\Utilities\Collection\StaticStorageTrait;
	
	/**
	 * 
	 * Returns an array of statement files
	 * @param  Entity $entity
	 * @return string[]
	 */
	public static function statements(Entity $entity) { 
	
		// retrieve all sql files located in path
		// TODO deterine glob overhead, maybe faster to do this
		// with traditional approach

		$path = DDL\Utility\Path::$statements($entity);
		
		return static::retrieve($path, function() use ($path) { 
			return glob("$path/*.sql");		
		});
		
	}
	
	/**
	 * 
	 * Retrieves content of statement file; entity acts as key to determine
	 * where statement group lies
	 * @param unknown_type $entity
	 * @param unknown_type $name
	 */
	public static function statement(Entity $entity, $name) { 
		// TODO need specify between different statement types (not
		// everything is going to be sql)
		// TODO should we statically store file contents or just the path
		
		return static::retrieve("$path/$name", function() { 
			return file_get_contents(glob("$path/$name\.")[0]);		
		});	
	}
	
	
}