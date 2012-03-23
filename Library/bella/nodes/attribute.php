<?php
namespace Bella;

class NodeAttribute extends NodeSQLLiteral
{
	public $relation;
	
	public function __construct($value, $relation)
	{
		parent::__construct($value);
		$this->relation = $relation;
	}
}