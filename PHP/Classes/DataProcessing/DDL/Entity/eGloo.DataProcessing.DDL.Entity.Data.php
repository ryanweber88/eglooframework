<?php
namespace eGloo\DataProcessing\DDL\Entity;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Represents an entity's data, attributes or makeup 
 * @author Christian Calloway
 *
 */
class Data extends \eGloo\Dialect\Object {

	function __construct(Entity $entity, $data) {
		parent::__construct();
		 
		$this->entity = $entity;
		
		
		// @todo this is ill thought-out
		// construct holder relationships 
		foreach($this->entity->definition()->relationships as $relationship) { 
			// create entity representation of relationship
			$entity = DDL\Entity\Factory::factory(
				"{$entity->namespace}\\{$relationship->to}"
			);
			
			// if a has-many relationship, then 
			$this->relationships[ucfirst($relationship->to)] = ($relationship->hasMany())
				? new QuerySet($entity); 
				: $entity;
		}
	
	}
	
	/**
	 * Accessor for properties
	 * @see eGloo\Dialect.Object::__get()
	 */
	public function __get($name) { 
		if (isset($this->properties[$name])) { 
			return $this->properties[$name];
		}
		
		throw new \eGloo\Dialect\Exception(
			'Attempting to access invalid Entity/Data property'
		);
	}
	
	/**
	 * Setter for properties
	 */
	public function __set($name, $value) {
		$this->properties[$name] = $value;
		
		return $this;
	}
	
	
	protected $entity;
	protected $properties   = [ ];
	protected $relationship = [ ];
}