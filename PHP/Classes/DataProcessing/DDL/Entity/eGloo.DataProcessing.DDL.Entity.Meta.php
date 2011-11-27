<?php
namespace eGloo\DataProcessing\DDL\Entity;

use \eGloo\DataProcessing\DDL;

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
	
	/**
	 * 
	 * Attempts to retrieve column from columns collection
	 * @param  string $name
	 * @return Meta\Column | boolean
	 */
	public function column($name) {
		// attempt to retrieve column
		if (isset($this->columns[$name])) {
			return $this->columns[$name];
		}
		
		return false;
	}
	
	/**
	 * 
	 * Adds column to columns collection
	 * @param  string $name
	 * @return self
	 */
	public function addColumn($name) {
		$this->columns[$name] = new Meta\Column($name);
		return $this;
	}
	
	
	// STAT meta information
	protected $created;
	protected $modified;
	protected $accessed;
	protected $evaluated;
	
	// RECORD/TABLE information
	protected $columns = [ ];
	protected $count   = 100;
	
	
	protected $entity;
}