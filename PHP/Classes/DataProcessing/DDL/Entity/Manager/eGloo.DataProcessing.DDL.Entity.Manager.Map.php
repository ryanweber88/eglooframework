<?php
namespace eGloo\DataProcessing\DDL\Entity\Manager;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;
use eGloo\DataProcessing\DDL\Entity\Manager;

/**
 * 
 * Responsible for quick lookup of entities within persistence context; maps
 * to entity references, dynamically, based upon requests made to manager
 * (for example, if a series of entites are loaded by their foreign key - 
 * in a relationship for example - then a map will be drawn between that
 * foreign key and N+1 entities
 * 
 * @author Christian Calloway
 *
 */
class Map extends \eGloo\Dialect\Object {

	
	function __construct(Manager $manager) {
		$this->manager = $manager;	
	}
	
	/**
	 * 
	 * Determines if valid entity is pointed to by domain.
	 * @param  Entity $entity
	 * @return Entity
	 */
	public function retrieves(Entity $entity) {
		
		// merge arrays so entity takes first position in chain
		$chain = array_merge(
			[ $entity->_class->name ], $this->chain
		);
				
		// point node at &chain - we will use node
		// to traverse dimensions of array
		$node = &$this->profiles;
		
		foreach ($chain as $domain) { 
			if (!isset($node[$domain])) {
				return false;
			}
			
			$node = &$node[$domain];
		}
		
		// node should be pointing to entity, if it has reached
		// this point
		return $node;
	}
	
	
	/**
	 * 
	 * Defines a valid entity to which map to
	 * @param  Entity $entity
	 * @return void
	 */
	public function refers(Entity $entity) { 
		
		// merge arrays so entity takes first position in chain
		$chain = array_merge(
			[ $entity->_class->name ], $this->chain
		);
		
		// draw out chain into profiles
		$node = &$this->profiles;
		
		foreach ($chain as $domain) { 
			if (!isset($node[$domain])) {
				$node[$domain] = [ ];
			}

			$node = &$node[$domain];
		}
		
		// refer node, which is a pointer to profiles,
		// but currently descended #domains dimensions
		// to entity
		$node = $entity;

		// reset chain
		$this->chain = [ ];
		
		// return entity
		return $entity;
	}
	
	
	/**
	 * 
	 * Simply adds 'domain' within to search
	 * @param mixed $domain
	 */
	public function with($domain) { 
		$this->chain[] = $domain;
		
		return $this;
	}
	
	
	protected $manager;
	private   $profiles = [ ];
	private   $chain    = [ ];
}