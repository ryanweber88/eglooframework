<?php
namespace eGloo\DataProcessing\DDL\Entity;

/**
 * 
 * Represents a callable method for an entity
 * @author Christian Calloway
 *
 */
class Method extends \eGloo\Dialect\Object {
	
	function __construct(Entity $entity) { 
		$this->entity = $entity;
	}
	
	/**
	 * 
	 * Enter description here ...
	 */
	public function call() { 
		
	}
	
	protected $signature;
	protected $entity;
}