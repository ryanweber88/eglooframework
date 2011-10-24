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

	function __construct(Entity &$entity) { 
		$this->entity = $entity;
		
		// construct holder relationships 
		if (is_array($this->entity->definition->relationships)) { 
			
			foreach($this->entity->definition->relationships as $relationship) { 
				$this->relationships[$relationship->to] = ($relationship->hasMany())
					? [ ] 
					: new stdClass;
			}
		}
	}

	
	protected $entity;
	protected $relationships = [ ];
	protected $properties;
}