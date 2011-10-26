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

	function __construct(Entity $entity) {
		parent::__construct();

		// 
		$this->entity = $entity;
		
		// construct holder relationships 
		if (is_array($this->entity->definition->relationships)) { 
			
			foreach($this->entity->definition->relationships as $relationship) { 
				$this->relationships[$relationship->to] = ($relationship->hasMany())
					? new QuerySet() 
					: new stdClass;
			}
		}
	}
	
	/**
	 * 
	 * Enter description here ...
	 * @param string $name
	 * @param mixed $value
	 */
	public function addProperty($name, $value) {
		$this->properties[$name] = $value;
		
		return $this;
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
	
	
	protected $entity;
	protected $properties    = [ ];
}