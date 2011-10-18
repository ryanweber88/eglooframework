<?php
namespace eGloo\DataProcessing\DDL\Entity;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * The default entity manager; responsible for persistence context
 * and interfacing between entity calls and their associated statements
 * @author Christian Calloway
 *
 */
class Manager extends \eGloo\Dialect\Object implements Manager\ManagerInterface { 
	
	function __construct() { 

		// initialize pool
		// TODO replace array declaration with pool instance
		//$this->pool = new Pool();
		//$this->pool = [ ];
	}
	
	public function persist(Entity $entity) { 
		// calls createx
	}
	
	public function contains(Entity $entity) { 
		
	}
	
	
	public function retrieve(Entity $entity, $key) { 
		// calls find.sql
	}
	
	public function merge(Entity $entity)  { 
		// calls update
		
		// check if entity is 
		if ($this->contains($entity)) { 
			// TODO 	
		}
		
		// TODO throw exception if entity does not exist
	}
	
	final private function key(Entity $entity, $key) { 
		// creates a persistent key based upon entity and its unique indentifier
		return get_class($entity) . ':' . $key;	
	}
	
	
	protected $pool = [ ];
}