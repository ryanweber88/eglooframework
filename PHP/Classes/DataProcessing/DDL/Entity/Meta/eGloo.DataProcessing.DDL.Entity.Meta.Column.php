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
			$this->value     = $value;
			$this->changes[] = $value;
		}
	}
	
	/**
	 * 
	 * Appends to change list
	 * @param string $value
	 */
	public function change($value) {
		$this->changes[] = $value;
		$this->value     = $value;
	}
	
	/**
	 * 
	 * Determines if column value has changed
	 * @return boolean
	 */
	public function changed() {
		return count($this->changes) > 1;
	}
	
	/**
	 * 
	 * Retrieves original value
	 * @return string
	 */
	public function defaultValue() {
		return count($this->changes) 
			? $this->changes[0]
			: false;
	}
	
	/**
	 * 
	 * Retrieves current value
	 * @return string
	 */
	public function currentValue() {
		return $this->changes[count($this->changes)-1];
	}
	
	/**
	 * 
	 * Synonym for currentValue
	 * @return string
	 */
	public function is() {
		return $this->currentValue();	
	}
	
	/**
	 * 
	 * Change history has been accounted for and thus we
	 * reset changes and move default to latest change
	 * @return void
	 */
	public function commit() {
		$this->changes = [ 
			$this->value = $this->changes[count($this->changes)-1] 
		];
	}
	
	/**
	 * 
	 * A synonym for defaultValue
	 * @return string
	 */
	public function was() {
		return $this->defaultValue();
	}

	
	protected $name;
	protected $value;
	protected $changes = [ ];
	
}