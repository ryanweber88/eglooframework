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
		parent::__construct();
		
		$this->entity = $entity;
	}	
	
	/**
	 * 
	 * Abstracts builder class - responsible for creating entity definition
	 * @param Entity $entity
	 * @todo limit_static;
	 * @return Definition
	 */
	static public function create(DDL\Entity\Entity $entity) { 	
		return static::retrieve($entity->_class->name, function() use ($entity) { 
			return Definition\Builder::create($entity);
		});

	}	
	
	/**
	 * 
	 * Stack a relationship
	 * @param Relationship $relationship
	 */
	public function addRelationship(Relationship $relationship) {
		$this->relationships[] = $relationship;
		
		return $this;
	}
	
	/**
	 * Overrides parent to return from attribute set, should
	 * it exist
	 */
	public function __get($name) { 
		return isset($this->attributes[$name])
			? $this->attributes[$name]
			: parent::__get($name);
	}
		
	
	

	
	private   $entity;	
	protected $attributes     = [ ];
	protected $relationships  = [ ];

}