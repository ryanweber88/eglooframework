<?php
namespace eGloo\DataProcessing\DDL\Entity;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Represents an entity's data, attributes or makeup 
 * @author Christian Calloway
 * @deprecated
 *
 */
class Data extends \eGloo\Dialect\Object {

	function __construct(Entity $entity, $data) {
		parent::__construct();
		$this->entity = $entity;
						
		// construct holder relationships 
		foreach($this->entity->definition()->relationships as $relationship) { 
						
			// create entity representation of relationship
			$entity = DDL\Entity\Factory::factory(
				"{$entity->_class->namespace}\\{$relationship->to}"
			);
			
			// if a has-many relationship, then collection is represented as  
			$this->relationships[ucfirst($relationship->to)] = ($relationship->hasMany())
				? new QuerySet($entity)
				: $entity;
		}
		
		// now populate data attributes
		$this->attributes = $data;
		

	
	}
	
	/**
	 * 
	 * Usage is implicit to entity only; checks if a property exists
	 * @param string $name
	 */
	public function hasProperty($name) { 
		return isset($this->properties[$name]);
	}
	
	/**
	 * 
	 * @param unknown_type $name
	 */
	public function hasRelationship($name) { 
		// pass
	}
	
	/**
	 * Accessor for properties/relationships
	 * @see eGloo\Dialect.Object::__get()
	 */
	public function __get($name) { 
		// Parameters take prescedence (sp?) below
		if (isset($this->attributes[$name])) { 
			return $this->attributes[$name];
		}
		
		// if parameter is not found, then look at relationships
		// to see if defined
		else if (isset($this->relationships[$name])) { 
			return $this->relationships[$name];
		}
		
		// if $name is not defined in either properties or relationships
		// then throw exception, as we should not be asking data for
		// anything else
		throw new \eGloo\Dialect\Exception(
			'Attempting to access invalid Entity/Data property'
		);
	}
	
	/**
	 * Setter for properties
	 */
	public function __set($name, $value) {
		$this->attributes[$name] = $value;
		
		return $this;
	}
	
	
	protected $entity;
	protected $attributes    = [ ];
	protected $relationships = [ ];
}