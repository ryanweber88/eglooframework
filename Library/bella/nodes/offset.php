<?php
namespace Bella;

class NodeOffset extends Node {
	public $value;
	
	public function __construct($value)
	{
		$this->value = $value;
	}
}