<?php
namespace eGloo\DataProcessing\DDL\Entity;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Represents an entity relationshp
 * @author Christian Calloway
 *
 */
class Relationship extends \eGloo\Dialect\Object { 
	
	const CARDINALITY_ONE   = 0x00;
	const CARDINALITY_MANY  = 0x01;
	
	const STRING_MANY       = 'many';
	const STRING_ONE        = 'one';
		
	public function hasMany() { 
		return $this->has == self::CARDINALITY_MANY;
	}
	
	public function hasOne() { 
		return $this->has == self::CARDINALITY_ONE;
	}
	
	public function belongsMany() { 
		return $this->belongs == self::CARDINALITY_MANY;
	}
	
	public function belongsOne() { 
		return $this->belongs == self::CARDINALITY_ONE;
	}
	
	public function __toString() {
		return $this->format();
	}
	
	protected function format() { 
		// as value will always be valid unless
		// absolute false
		if ($this->as !== false) {
			return $this->as;
		}
		
		// otherwise, determine plurality from
		// relationship type
		else {
			return ucfirst($this->hasMany() 
				? \eGloo\Utilities\Inflections::pluralize($this->to)
				: \eGloo\Utilities\Inflections::singularize($this->to)
			);
		}
			
	}
	
	protected $to;
	protected $has;
	protected $belongs;
	protected $through;
	protected $as = false;
}