<?php
namespace eGloo\DataProcessing\DDL\Entity;

/**
 * 
 * Provides meta information on an Entity, such as last updated,
 * fields changed, etc
 * @author Christian Calloway
 *
 */
class Meta extends \eGloo\Dialect\Object {
	
	function __construct(Entity $entity) {
		$this->entity = $entity;
	}
	
	// STAT meta information
	protected $created;
	protected $modified;
	protected $accessed;
	
	// RECORD/TABLE information
	protected $fieldsChanged = [ ];
	protected $recordCount;
	
	
	protected $entity;
}