<?php
namespace eGloo\DataProcessing\DDL\Entity;

/**
 * 
 * Represents a callable method for an entity
 * @author Christian Calloway
 *
 */
class MethodSignature extends \eGloo\Dialect\Object {
	
	function __construct(Entity $entity) { 
		$this->entity = $entity;
	}
	
	public function name($value = null) { 
		return $this->setOrGet(__FUNCTION__, $value, function() { 
			// ensures that method signature name is lower cased
			$this->name = strtolower($value); 
		});
	}
	
	
	protected $name;
	protected $comments;
	protected $parameters;
	protected $return;
	protected $entity;
}