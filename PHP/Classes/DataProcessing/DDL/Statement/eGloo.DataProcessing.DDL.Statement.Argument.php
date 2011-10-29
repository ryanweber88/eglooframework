<?php
namespace eGloo\DataProcessing\DDL\Entity\Statement;

use eGloo\DataProcessing\DDL;

/**
 * 
 * Represents an argument to a statement
 * @author Christian Calloway
 *
 */
class Argument extends \eGloo\Dialect\Object { 
	
	function __construct($name, $value, $type = [ ]) { 
		
	}
	
	public function toArray() { 
		return [
			'name'  => $this->name,
			'value' => $this->value,
			'type'  => $this->type
		];
	}
	
	protected $name;
	protected $value;
	protected $type;
}