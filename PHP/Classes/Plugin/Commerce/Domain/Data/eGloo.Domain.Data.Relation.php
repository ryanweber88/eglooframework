<?php
namespace eGloo\Domain\Data;

class Relation extends \eGloo\Dialect\ObjectSafe {

	public function selects($__mixed) { }
	public function where($__mixed) { }
	public function joins($__mixed) { }
	
	public function on($__mixed) { }
	public function limit($number) { }
	public function offset($number) { }
	public function group($number) { }
	
	/**
	 * Evaluates query 
	 */
	protected function evaluate() {
		
	}

	
	protected $parts = array();
	protected $model;
}