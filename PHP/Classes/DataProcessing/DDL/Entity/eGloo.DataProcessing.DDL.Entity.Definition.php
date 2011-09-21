<?php
namespace eGloo\DataProcessing\DDL\Entity;

use eGloo\DataProcessing\DDL;

/**
 * 
 * Represesents an entity definition a defined
 * within entities xml
 * @author Christian Calloway
 * @todo   limit_static
 *
 */
class Definition extends \eGloo\Dialect\Object { 
	
	use \eGloo\Utilities\Collection\StaticStorageTrait;
	
	function __construct(Entity $entity) { 
		$this->entity = $entity;
	}	
	
	static public function create(DDL\Entity\Entity $entity) { 
				
		return static::retrieve($entity->_class->name, function() use ($entity) { 
			return Definition\Builder::create($entity);
		});

	}	
	
	public function addRelationship(Relationship $relationship) {
		$this->relationships[] = $relationship;
		
		return $this;
	}
	
	/**
	 * 
	 * Enter description here ...
	 * @param unknown_type $interface
	 * @todo determine if interface should be class
	 */
	public function addInterface($interface) { 
		$this->interface[] = $interface;
	}
	
	private   $entity;	
	protected $relationships = [ ];
	protected $interface     = [ ];
	

}