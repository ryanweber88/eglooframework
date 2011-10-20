<?php
namespace eGloo\DataProcessing\DDL\Entity;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * The default entity manager; responsible for 
 *   - managing entities in persistence context
 *   - crud operations between data and entity layers
 *   
 * @author Christian Calloway
 *
 */
class Manager extends \eGloo\Dialect\Object implements Manager\ManagerInterface { 
	
	function __construct() { 

		// initialize pool
		// TODO replace array declaration with pool instance
		//$this->pool = new Pool();
		$this->pool = [ ];
		
		
		// use default transaction - entitymanager will have one to one 
		// relationship with transaction instance
		$this->transaction = new Transaction;
	}
	
	/**
	 * 
	 * Adds entity to persistence context - checks entity state
	 * and called to determine operation with data layer
	 * @param Entity $entity
	 */
	public function persist(Entity $entity) { 
		
		// check that entity is new, or removed, then push back to manage
		if ($entity->state == Entity::STATE_NEW || $entity->state == Entity::STATE_REMOVED) {
			
			// if a new entity, then push to database and set persistence key
			
			if ($entity->state == Entity::STATE_NEW) { 
				
				// TODO push database 

				
				// TODO persistent key
				$entity->id = null;
			}
			
			// TODO place entity into pool
			
			
			// set entity state to managed
			$entity->state = Entity::STATE_MANAGED;
		}
		
		if ($entity->state == Entity::STATE_DETACHED) { 
			throw new DDL\Exception\Exception (
				'Cannot persist a detached entity'
			);
		}
		
		return $entity;
		
	}
	
	public function contains(Entity $entity) { 
		
	}
	
	
	/**
	 * 
	 * Retrieves an entity from the persistence context - if none,
	 * is available, then the entities associated find* method
	 * will be called and the newly created entity will be placed
	 * into the persistence context and returned; if $field is 
	 * specified, then lookup will be based upon that field, default
	 * will be primnary key
	 * @param Entity $entity
	 * @param integer[] | string[] $key
	 * @param string $field
	 */
	public function retrieve(Entity $entity, $key, $field = null) { 
		
		// first check if entity is already managed, in which case
		
		
		if (is_null($field)) { 
			// TODO determine entity primary key default - for the
			// moment, assume primary is id
			$field = 'id';
		}
		
		return false;
	}
	
	public function merge(Entity $entity)  { 
		// calls update
		
		// check if entity is 
		if ($this->contains($entity)) { 
			// TODO 	
		}
		
		// TODO throw exception if entity does not exist
	}
	
	/**
	 * 
	 * Detaches entity from persistence context
	 * @param Entity $entity
	 */
	public function detach(Entity $entity) { 
		// set state to detached
		$entity->STATE = Entity::STATE_DETACHED;
		
		// remove persistence key
		$entity->pid = null;
		
		// 
		return $entity;
	}
	
	/**
	 * 
	 * Run a transaction - no idea yet..
	 */
	public function transaction(\Closure $lambda = null) { 
		return $this->setOrGet('transaction', $lambda, function() { 
			$this->transaction->begin();
			
			$lambda();
			
			$this->transaction->commit();
		});
	}
	
	final private function key(Entity $entity, $key) { 
		// creates a persistent key based upon entity and its unique indentifier
		return $entity->_class->name . ':' . $key;	
	}
	
	
	/** Data structure containing pool of entityies */
	protected $pool;
	
	/** An entity transaction */
	protected $transaction;
}