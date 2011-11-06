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
	
	
	// CONSTANTS ----------------------------------------------------------- //

	const ENTITY_STATE_NIL      = 0x00;  // Entity does not, or no longer exists
	const ENTITY_STATE_NEW      = 0x01;  // Entity is brand new, but not yet managed
	const ENTITY_STATE_MANAGED  = 0x02;  // Entity is managed in persistence context
	const ENTITY_STATE_REMOVED  = 0x03;  // Entity has persistence context, but is marked for removal from db
	const ENTITY_STATE_DETACHED = 0x04;  // Entity has been serialized to another tier, has not persistence context
		
	function __construct() { 

		// initialize pool
		$this->pool = new Manager\Pool($this);
		
		
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
		if ($entity->state_in([ self::ENTITY_STATE_NEW, self::ENTITY_STATE_REMOVED ]) {
			
			// push entity into pool and retrieve persistent id - 
			// only if it is new, remember that a removed context
			// is already a part of the pool and is waiting for
			// the end of transaction to be determined whether it should
			// be removed or not
			// TODO is persistent id based on index enough?
			
			if ($entity->state === self::ENTITY_STATE_NEW) { 
				$entity->pid  = $this->pool->count();
				$this->pool[] = $entity;
			}
						
			// set entity state to managed
			$entity->state = self::ENTITY_STATE_MANAGED;
			

			// return
			return $entity;
		}
		
		// if state is already managed, return entity from pool
		else if ($entity->state === self::ENTITY_STATE_MANAGED) { 
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
	 * @param \eGloo\Dialect\_Class $entity
	 * @param integer[] | string[] $key
	 */
	public function find(\eGloo\Dialect\Object $mixed, $key, \Closure $lambda = null) {
	
		echo "calling find\n";
		
		// determine mixed type, which can be either an entity 
		// or class
		if ($mixed instanceof Entity) {
			$class = $mixed->_class;
		}
		
		else if ($mixed instanceof \eGloo\Dialect\_Class) {
			$class = $mixed;
		}
		
		// if some other object has been passed, then throw exception
		else { 
			throw new DDL\Exception\Exception(
				'Illegal Argument Exception: mixed must be instance of entity or class'
			);
		}
		
		// we assume, that once an entity is retrieved via db operation
		// that it will be mapped 
		// TODO method chaining here is really ugly
		if ( isset($this->map[$class->name]['_primary_key'][$key])) {
			echo "entity found\n";
			return $this->map[$class->name]['_primary_key'][$key];
		}
		
		
		if (!is_null($lambda)) { 
			// create entity and persist
			$entity = $lambda();
			
			// if entity is not false value, it is assumed to
			// be valid (this is the responsibility of the lambda
			// function) 
			if ($entity) {
				// persist the entity value
				$entity = $this->persist($entity);
				
				// map/reference to primary key location
				$this->map[$class->name]['_primary_key'][$key] = &$this->pool[$entity->pid];
			}
			
			
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
	public function remove(Entity $entity) { 
		
		if ($entity->state_in ([ self::ENTITY_STATE_DETACHED, self::ENTITY_STATE_NEW ])) { 
			// set state to detached
			$entity->STATE = Entity::STATE_REMOVED;
			
			// unset from persistence pool, if it exists
			unset($this->pool[$entity->pid]);
			
			$entity->pid = null;
		}
		
		throw new DDL\Exception\Exception(
			'Illegal Argument Exception : entity must already be in a managed state'
		);
	}
	
	public function refresh(Entity $entity) { }
	
	public function flush() { }
	
	public function clear() { }
	
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
	protected $map = [ ];
	
	/** An entity transaction */
	protected $transaction;
}