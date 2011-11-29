<?php
namespace eGloo\DataProcessing\DDL\Entity;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Represents an entity column
 * @author Christian Calloway
 *
 */
class Column extends \eGloo\Dialect\Object {
	
	function __construct($name) {
		parent::__construct();
		
		$this->name = $name;
	}
	
	/**
	 * 
	 * Provides string cast of column
	 */
	public function __toString() {
		return $this->name;
	}
	
	
	/**
	 * Determines column equality 
	 */
	public function equals($column) {
		return $column->name == $this->name;
	}
	
	protected $name;
	
}