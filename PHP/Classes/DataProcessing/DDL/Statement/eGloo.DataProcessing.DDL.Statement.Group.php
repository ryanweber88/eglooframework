<?php
namespace eGloo\DataProcessing\DDL\Entity\Statement;

/**
 * 
 * Responsible for building determining entity interface
 * @author Christian Calloway
 *
 */
class Group extends \eGloo\Dialect\Object { 
	
	// TODO temporary - find a more elegant solution to building entity interface
	const BASE = '/home/petflowdeveloper/www/tierzwei/Common/Database/DPStatements/MySQLiOOP/';
	
	public function files(Entity $entity) { 
		
		// TODO get class hierarchy as path
		$hierarchy = [
			$entity->_class->name
		];
		
		/*
		$current = get_class($entity);
		$hierarchy = [ ];
		
		do { 
			$hierarchy[] = $current;
		} while (($current = get_parent_class()) !== 'Entity')
		*/
		
		// retrieve all sql files located in path
		// TODO deterine glob overhead, maybe faster to do this
		// with traditional approach
		return glob(self::BASE . "/" . implode('/', $hierarchy) . '/*.sql');
		
	}
}