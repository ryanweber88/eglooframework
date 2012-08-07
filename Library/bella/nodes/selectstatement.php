<?php
namespace Bella;

class NodeSelectStatement extends Node
{
	public $orders, $froms, $projections, $wheres, $groups, $having, $limit;
	public $offset = 0;
	
	public $joins = array();
	public $on    = array();
	public $eq    = array();
	
	public function __construct()
	{
		$this->limit = NULL;
		//$this->offset = NULL;
		$this->orders = array();
		$this->froms = array();
		$this->projections = array();
		$this->wheres = array();
		$this->groups = array();
		$this->having = NULL;
	}
}