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
		
		// initialize map - a quick lookup tool for entities
		$this->map  = new Manager\Map($this);
				
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
		
		// entity must be valid in order to be persisted 
		//if ($entity->valid()) { 
		// @todo replace with valid check, which is currently failing as it calls
		// evaluate more than once
		// @todo a little messy in terms of pointers (or expected behavior)
		// but all holders should pointing to the same object
		if ($entity->attributes !== false) {
				
			// check that entity is new, or removed, then push back to manage		
			if ($entity->state_in([ self::ENTITY_STATE_NEW, self::ENTITY_STATE_REMOVED ])) {
				
				// check to see if entity has already been added to persistence
				// which could be the case if entity was found/evaluated
				// using field other than primary - since we now have the primary
				// key (entity is evaluated), we can check explicitly by pk 
				$entityPersistent = $this->map
					->with($entity->definition->primary_key)
					->with($entity->id)
					->retrieves($entity)[0];

				// if unable to find entity via pk map, then entity has not yet
				// been added to pool
				if ($entityPersistent === false) { 
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
					
					// finally add pk map to entity, which will return
					// reference to persistent entity (their actually
					// all the same)
					$this->map
						->with($entity->definition->primary_key)
						->with($entity->id)	
						->refers($entity);	

					$entityPersistent = $entity;
				}

				
				
				return $entityPersistent;
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

		throw new DDL\Exception\Exception(
			'Cannot PERSIST an un-evaluated entity'
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
	public function find(Entity $entity, $key, \Closure $lambda = null) {
	
		echo "calling find\n";
		$pk = $entity->definition->primary_key;
		
		// we assume, that once an entity is retrieved via db operation
		// that it will be mapped 
		if (($persistentEntity = $this->map->with($pk)->with($key)->retrieves($entity)) !== false) { 
			return $persistentEntity;
		}
				
		
		if (!is_null($lambda)) { 
			// create entity and persist
			$entity = $lambda($entity, $key);
			
			// if entity is not false value, it is assumed to
			// be valid (this is the responsibility of the lambda
			// function) 
			if ($entity) {
				// persist the entity value
				$entity = $this->persist($entity);
				
				// map/reference to primary key location
				//$this->map[$class->name]['_primary_key'][$key] = &$this->pool[$entity->pid];
				
				$this->map
					->with($pk)
					->with($entity->id)					
					->refers($this->pool[$entity->pid]);
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
		
		if ($entity->state == self::ENTITY_STATE_MANAGED) { 
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
	
	public function map() {
		return $this->map;
	}
	
	final private function key(Entity $entity, $key) { 
		// creates a persistent key based upon entity and its unique indentifier
		return $entity->_class->name . ':' . $key;	
	}
	
	
	/** Data structure containing pool of entityies */
	protected $pool;
	protected $map;
	
	/** An entity transaction */
	protected $transaction;
}