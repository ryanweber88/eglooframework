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
	 * Determines if valid entity is pointed to by domain. Here entity
	 * paarmeter acts as key
	 * @param  Entity $entity
	 * @return Entity[] | boolean
	 */
	public function retrieves(Entity $entity) {
		
		// merge arrays so entity takes first position in chain
		$chain = array_merge(
			[ DDL\Utility\Entity::key($entity) ], $this->chain
		);

		// if calling retrieves, we reset our chain
		$this->chain = [ ];
				
		// point node at &chain - we will use node
		// to traverse dimensions of array
		$node = &$this->profiles;
		$counter = 0;
				
		foreach ($chain as $domain) { 
			if (!isset($node[$domain])) {
				// if not set, then domain clearly cannot be found and
				// we return false to indicate that entity has not
				// yet been mapped
				return false;
			}
			
			$node = &$node[$domain];
		}
		
		// node should be pointing to entity, if it has reached
		// this point
		return count($node) == 1
			? $node[0]
			: $node;
			
	}
	
	
	/**
	 * 
	 * Defines a valid entity to which map to
	 * @param  Entity|Entity[] $entity
	 * @return void
	 */
	public function refers($mixed) {

		if (is_array($mixed) && count($mixed)) { 
			$entities = &$mixed;
		}
		
		else if ($mixed instanceof Entity) { 
			$entities = [ $mixed ];
		}
		
		else {
			throw new DDL\Exception\Exception (
				'Illegal Argument Exception : argument must be an '.
				'instance of Entity or Entity[]'
			);
		}
		
		// merge arrays so entity takes first position in chain
		$chain = array_merge(
			[ DDL\Utility\Entity::key($entities[0]) ], $this->chain
		);
		
		// draw out chain into profiles
		$node = &$this->profiles;
		$counter = 0;
		
		foreach ($chain as $domain) { 
					
			if (!isset($node[$domain])) {
				$node[$domain] = [ ];
			}

			$node = &$node[$domain];
		}
		
		// refer node, which is a pointer to profiles,
		// but currently descended #domains dimensions
		// to entity
		if (!is_array($node)) {
			$node = [ ];
		}
		
		$node = array_merge($node, $entities);

		// reset chain
		$this->chain = [ ];

	}
	
	
	/**
	 * 
	 * Simply adds 'domain' within to search
	 * @param mixed $domain
	 */
	public function with($domain) { 
		$this->chain[] = (string)$domain;
		
		return $this;
	}
	
	
	protected $manager;
	private   $profiles = [ ];
	private   $chain    = [ ];
}