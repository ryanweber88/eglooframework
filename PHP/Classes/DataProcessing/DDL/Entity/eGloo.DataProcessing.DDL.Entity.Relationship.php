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
	
	protected $to;
	protected $has;
	protected $belongs;
}