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
	}

	
	protected $entity;
}