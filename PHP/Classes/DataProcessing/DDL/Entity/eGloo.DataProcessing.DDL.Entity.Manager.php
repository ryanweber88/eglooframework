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
	 * Retrieves an entity from the persistence context, using
	 * primary key as search; return false if entity is not available
	 * found in context
	 * @param Entity $entity
	 * @param integer[] | string[] $key
	 */
	public function find(Entity $entity, $key, \Closure $lambda = null) {

		
		// we assume, that once an entity is retrieved via db operation
		// that it will be mapped 
		// TODO method chaining here is really ugly
		if ( isset($this->pool->map[$entity->_class->name][$entity->definition->primaryKey][$key])) {
			return $this->pool->map[$entity->_class->name][$entity->definition->primaryKey][$key];
		}
		
		if (!is_null($lambda)) { 
			$entity = $lambda();
			$this->perist($entity);
			
			return $entity;
		}
		
		
		return false;
	}
	
	/**
	 * 
	 * Encompasses a retrieve and statement call, should the retrieve fail
	 * @param Entity $entity
	 * @param mixed  $key
	 
	public function find(Entity $entity, $key) { 
		
	}
	*/
	
	/**
	 * 
	 * Uses map to look for already indexed entities
	 * @param  Entity $entity
	 * @param  array $pairs
	 * @return Entity[]
	 * @todo Should we be providing a query interface here - perhaps not the manager's job?
	 */
	public function query(Entity $entity, array $pairs, $operator = 'AND') { 
		// PASS
		
		foreach ($pairs as $field => $value) { 
			if (isset($this->pool->map[$entity->_class->name][$field])) { 
				
			}
		}
		
	}
	
	public function merge(Entity $entity)  { 
		// calls update
		
		// check if entity is already a part of pool
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