<?php
namespace Bella;

class NodeHaving extends Node {
	public $expression;
	
	public function __construct($expression)
	{
		$this->expression = $expression;
	}
}