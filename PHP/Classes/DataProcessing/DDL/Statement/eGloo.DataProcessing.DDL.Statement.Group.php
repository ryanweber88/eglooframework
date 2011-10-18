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
	
	public function interfaces(Entity $entity) { 
		
		// TODO get class hierarchy as path
		$hierarchy = [
			explode('\\', get_class($entity))[0]
		];
		
		/*
		$current = get_class($entity);
		$hierarchy = [ ];
		
		do { 
			$hierarchy[] = $current;
		} while (($current = get_parent_class()) !== 'Entity')
		*/
		
		// retrieve all sql files located in path
		// TODO glob overhead
		return glob(self::BASE . "/" . implode('/', $hierarchy) . '/*.sql');
		
	}
}