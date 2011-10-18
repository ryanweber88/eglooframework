<?php
namespace eGloo\DataProcessing\DDL\Entity\Definition;

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
	
	public function belongsMany() { 
		return $this->belongs == self::CARDINALITY_MANY;
	}
	
	protected $to;
	protected $has;
	protected $belongs;
}