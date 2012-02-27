<?php
namespace eGloo\Domain\Model;

use eGloo\Domain;

class Set extends \eGloo\Dialect\ObjectSafe
	implements \ArrayAccess, \IteratorAggregate, \Countable {
	
	
	/**
	 * Takes a fully-qualified class name (including namespace) which
	 * is used as template of sorts of initialization
	 * @param String $model
	 */
	function __construct($mixed) {
		
		// set our model type; think of this as templated collection
		// in c++, where array values may only be of passed
		// in type
		if ($mixed instanceof Domain\Model) {
			$this->model = $mixed;
		}
		
		// if mixed is an array with 1+ elements, then we wrapping at collection
		// with the functionality provided by set
		else if (is_array($mixed) && count($mixed)) {
			$this->collection = $mixed;
			$this->model      = get_class($mixed[0]);
		}
		
		// in this case, our model is passsed/identified as fully qualified string
		// and our set is currently empty
		else if (is_string($mixed) && class_exists($mixed)) {
			$this->model = new $mixed;
		}
		
		else { 
			throw new \Exception(
				"Failed constructing set because argument '$mixed' is invalid"
			);
		}
		

	}
	
	/**
	 * Find is similar in scope to each, but returns boolean false if
	 * item cannot be found; otherwise returns item in collection
	 */
	public function find($lambda) {
		if (is_callable($lambda)) {
			foreach($this->collection as $model) {
				if (($model = $lambda($model)) !== false) {
					return $model;
				}
			}
			
			return false;
		}
		
		throw new \Exception (
			"Passed argument must be a closure/block on reciever $this"
		);
	}
	
	/**
	 * Prints out a bit more descriptive information about our set
	 */
	public function __toString() {
		return parent::__toString() . '<' . get_class($this->model) . '>';
	}
	
	public function offsetExists($offset) {
		return isset($this->collection[$offset]);
	}
	
	public function offsetGet($offset) {
		// if a string we are attempting to match by "natural_key" 
		// or a field that is representative of the model in a 
		// collection
		$model = $this->model;
		
		if (is_string($offset) && 
				!is_numeric($offset) &&
				!is_null($field = $model::constant('NATURAL_KEY')) ) { 
		

			// if our natural field exist, iterate through collection and 
			// determine if we can field a match to offset
			foreach($this as $model) {
				if ($model->$field == $offset) {
					return $model; 
				}
			}
			
		}

		// otherwise attempt to return model at $offset value
		return $this->collection[$offset];
	}
	
	public function offsetSet($offset, $value) {
		$this->collection[$offset] = $value;
	}
	
	public function offsetUnset($offset) {
		unset($this->collection);
	}
	
	public function getIterator() {
		return new \ArrayIterator($this->collection);
	}
	
	public function count() {
		return count($this->collection);
	}
	
	protected $model;
	protected $collection = array();	
}