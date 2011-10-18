<?php
namespace eGloo\DataProcessing\DDL\Entity;

use eGloo\DataProcessing\DDL;

/**
 * 
 * Represesents an entity definition
 * @author Christian Calloway
 *
 */
class Definition extends \eGloo\Dialect\Object { 
	
	use \eGloo\Utilities\StaticStoreTrait
	
	function __construct(Entity $entity) { 
		$this->entity = &$entity;
	}	
	
	static public function &factory(DDL\Entity\Entity $entity) { 
				
		return static::retrieve($entity->_class->name, function() { 
			$builder = new Definition\Builder();
			$builder->entity = $entity;
			
			return $builder->build();
		});

	}	
	
	protected $entity;	
	protected $relationships = [ ];
}