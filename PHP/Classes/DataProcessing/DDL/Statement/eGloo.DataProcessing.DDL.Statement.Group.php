<?php
namespace eGloo\DataProcessing\DDL\Entity\Statement;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Responsible for building determining entity interface
 * @author Christian Calloway
 *
 */
class Group extends \eGloo\Dialect\Object { 
	
	// TODO temporary - find a more elegant solution to building entity interface
	use \eGloo\Utilities\Collection\StaticStorageTrait;
	
	/**
	 * 
	 * Returns an array of statement files
	 * @param  Entity $entity
	 * @return string[]
	 */
	public static function files(Entity $entity) { 
	
		// retrieve all sql files located in path
		// TODO deterine glob overhead, maybe faster to do this
		// with traditional approach
		$path = DDL\Utlity\Utility::pathStatements($entity);
		
		return static::retrieve($path, function() { 
			return glob("$path/*.sql");		
		});
		
	}
	
	public static function statement(Entity $entity, $name) { 
		return static::retrieve("$path/$name.", function() { 
			return glob("$path/$name\.")[0];		
		}	
	}
	
	
}