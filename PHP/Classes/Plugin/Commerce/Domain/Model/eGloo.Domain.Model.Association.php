<?php
namespace eGloo\Domain\Model;

/**
 * Meta information describing the cardinality of a relationship 
 * @author Christian Calloway
 */
class Association extends \eGloo\Dialect\Object {
	
	const SINGULAR = 1;
	const MANY     = 2;
	
	
	function __construct(array $intialize) {
		parent::__construct();

		// @TODO replace with HashInitializeTrait trait
		foreach ($intialize as $property => $value) {
			$this->$property = $value;
		}
		
		
		//$this->attr_reader('through', 'target');
		//$this->attr_accessor('owner');
	}
	
	public function many() {
		return $this->cardinality == self::MANY;
	}
	
	public function usesJoin() {
		return $this->through !== null;
	}
	
	public function usesJunction() {
		return $this->through !== null;
	}
	
	public function through() {
		return preg_replace('/(.|::)/', '\\', $this->target);
	}
	


	// @TODO change once attr_xxx is fixed
	public $cardinality;
	public $owner;
	public $target;
	public $through;
}