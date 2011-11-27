<?php
namespace eGloo\DataProcessing\DDL\Entity\Meta;

/**
 * 
 * Provides meta-data associated to a column
 * @author Christian Calloway
 *
 */
class Column extends \eGloo\Dialect\Object {
	
	function __construct($name, $value = null) {
		$this->name = $name;
		
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
	
	public function __toString() {
		return $this->name;
	}
	
	/**
	 * Determines column equality 
	 */
	public function equals(Column $column) {
		return $column->name == $this->name;
	}
	
	protected $name;
	protected $value;
	protected $changes = [ ];
	
}