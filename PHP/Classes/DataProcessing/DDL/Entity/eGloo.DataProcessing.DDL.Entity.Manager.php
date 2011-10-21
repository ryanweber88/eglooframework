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
		$this->pool = new Manager\Pool;
		
		
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
					
			// set entity state to managed
			$entity->state = Entity::STATE_MANAGED;
						
			// push entity into pool and retrieve persistent id - 
			// only if it is new, remember that a removed context
			// is already a part of the pool and is waiting for
			// the end of transaction to be determined whether it should
			// be removed or not
			// TODO is persistent id based on index enough?
			if ($entity->state == Entity::STATE_NEW) { 
				$entity->pid  = $this->pool->count();
				$this->pool[] = $entity;
			}

			// return
			return $entity;
		}
		
		// if state is already managed, return entity from pool
		else if ($entity->state == Entity::STATE_MANAGED) { 
			return $this->pool[$entity->pid];
		}
		
		// we assume state is detached, to which 
		throw new DDL\Exception\Exception (
			'Cannot PERSIT a detached entity - only MERGE is available'
		);		

	}
	
	/**
	 * 
	 * Simple boolean lookup based upon persistent id - 
	 * an entity may no longer be in the pool for a multitude
	 * of reasons (perhaps it was pushed out due to limit
	 * concerns) - will throw an exception if attempting
	 * to lookup an entity that is not in a managed state
	 * @param Entity $entity
	 */
	public function contains(Entity $entity) { 
		if ($entity->state == Entity::STATE_MANAGED) {
			return isset($this->pool[$entity->pid]);
		}
		
		return false;
		
		//throw new DDL\Exception\Exception(
			//'Illegal argument exception - only a MANAGEd entity can be in persistence'
		//);
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
		
		// we are not assuming that entity is already managed
		// because this method should not be called otherwise

		
		// assume that field is primary key if null
		// TODO primary key field name should be configurable
		// probably based on configuration in Entities.xml
		if (is_null($field)) { 
			$field = 'id';
		}
		
		// first we lookup to see if a reference map has already
		// been defined for quick lookup
		// TODO avoid conflicts in the case of like-named
		// entities
		if (isset($this->pool->map[$entity->_class->name][$field])) {
			return $this->pool->map[$entity->_class->name][$field];
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