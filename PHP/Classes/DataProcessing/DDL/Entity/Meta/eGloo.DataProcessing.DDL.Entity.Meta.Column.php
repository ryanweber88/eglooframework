<?php
namespace eGloo\DataProcessing\DDL\Entity\Meta;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Provides meta-data associated to a column
 * @author Christian Calloway
 *
 */
class Column extends DDL\Entity\Column {
	
	function __construct($name, $value = null) {
		parent::__construct($name);
				
		if (!is_null($value)) {
			$this->value = $value;
		}
	}
	
	/**
	 * 
	 * Appends to change list
	 * @param string $value
	 */
	public function change($value) {
		$this->changes[] = $value;
	}
	
	/**
	 * 
	 * Enter description here ...
	 * @param unknown_type $value
	 */
	public function changed($value) {
		return count($this->changes) > 1;
	}
	
	/**
	 * 
	 * Retrieves original value
	 */
	public function defaultValue() {
		return count($this->changes) 
			? $this->changes[0]
			: false;
	}
	
	/**
	 * 
	 * A synonym for defaultValue
	 */
	public function was() {
		return $this->defaultValue();
	}

	
	protected $name;
	protected $value;
	protected $changes = [ ];
	
}