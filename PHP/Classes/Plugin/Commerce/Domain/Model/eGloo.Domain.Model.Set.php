<?php
namespace eGloo\Domain\Model;

use eGloo\Domain;

/**
 * Represents a returned set of data - can be accessed as array and is iterable over
 * foreach 
 */
class Set extends \eGloo\Dialect\ObjectSafe
	implements \ArrayAccess, \IteratorAggregate, \Countable, \eGloo\Utilities\ToArrayInterface {
	
	
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
	
	
	public function isEmpty() {
		return count($this) === 0;	
	}
	
	/**
	 * Simply empties out our collection
	 */
	public function clear() {
		$this->collection = array();
	}
	
	/**
	 * Returns filtered set - not that this returns a new instance of
	 * set and not a modified version of the old set
	 * @TODO move this to Collection and override
	 */
	public function collect($__mixed) {
		
		// filters will only work if natural key has been specified
		
		if (!is_null($field = $model::constant('NATURAL_KEY'))) {
			
			$arguments = func_get_args();
			$set       = new static($this->model);
			
			// if our first, and only argument is a lambda, then run
			// against collection; an a return of absolute TRUE
			// will result in instance being added to new set
			if (is_callable($lambda = $arguments[0])) {
				foreach($this as $model) {
					if ($lambda($model) === true) {
						$set[] = $lambda($model);
					}
				}
			}
			
			else { 
				// otherwise, it is assumed that array of collect
				// value been passed
				if (is_array($arguments[0])) {
					$arguments = $arguments[0];
				}
					
				foreach($this as $model) {
					foreach($arguments as $value) {
						if ($model->$field === $value) { 
							$set[] = $model;
							break ;
						}
					}
				}
			}
			
			return $set;
		}
		
		$class = get_class($this);
		
		throw new \Exception(
			"Cannot apply collect to set<$class> because '$class::NATURAL_KEY' is not defined"
		);
	}
	
	/**
	 * Does the opposite of collect - since these are so similar, they should 
	 * probably be composed of similar meta methods
	 */
	function reject	($__mixed) {
		
		// filters will only work if natural key has been specified
		$model = $this->model;
		
		if (!is_null($field = $model::constant('NATURAL_KEY'))) {
			$arguments = func_get_args();
			$set       = new static($model);
			
			// if our first, and only argument is a lambda, then run
			// against collection; an a return of absolute FALSE
			// will result in instance being added to new set
			if (is_callable($lambda = $arguments[0])) {
				foreach($this as $model) {
					if ($lambda($model) === false) {
						$set[] = $lambda($model);
					}
				}
			}
			
			else { 
				// otherwise, it is assumed that array of collect
				// value been passed
				if (is_array($arguments[0])) {
					$arguments = $arguments[0];
				}
					
				foreach($this as $model) {
					$found = false;
					
					// if key is equal to reject value, then 
					// flag found as true and break loop as
					// we no longer need to inspect
					foreach($arguments as $value) {
						if ($model->$field === $value) { 
							$found = true;
							break ;		
						}
					}
					
					// if reject value was not matched, then add to set
					if (!$found) {
						$set[] = $model;
					}
				}
				
				
			}
			
			return $set;
		}
		
		
		throw new \Exception(
			"Cannot apply collect to $this because '$model::NATURAL_KEY' is not defined"
		);
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
		// @TODO cache these results
		try {
			$result = $this[$offset];
		}
		
		catch(\Exception $ignore) { 
			return false;
		}
		
		return !is_null($result);
	}
	
	public function offsetGet($offset) {
		// if a string we are attempting to match by "natural_key" 
		// or a field that is representative of the model in a 
		// collection
		$model = $this->model;
		
		// make sure offset is a string and not some '19' fuckery
		if (is_string($offset) && !is_numeric($offset)) {
			
			
			// if our natural field exist, iterate through collection and
			// determine if we can field a match to offset
			if (!is_null($field = $model::constant('NATURAL_KEY'))) { 
		
				// since we allow regular expression filtering, determine
				// if offset is valid regular expression (this is still a bit
				// dicey since preg_last_error seems to not fucking work, so
				// regular expression have to be delimited by '/'; if you are
				// using the '/' character and you don't intend it as a regular
				// expression, then please shoot yourself
				if (\eGloo\Primitives\RegExp::valid($regexp = $offset)) {
					
					$set = new static($this->model);
					
					foreach($this as $model) {
						if (preg_match($regexp, $model->$field)) {
							$set[] = $model;
						}
					}
						
					return $set;
				}
				
				else {
		
					foreach($this as $model) {
						if ($model->$field == $offset) {
							return $model; 
						}
					}
					
					return false;
				}
			}
			
			$class = get_class($this);
			
			throw new \Exception(
					"Cannot get offset '$offset' to '$this' because '$class::NATURAL_KEY' is not defined"	
			);				
			
			
		}

		// otherwise we create an instance of templated model and push
		// onto queue
		if (!isset($this->collection[$offset])) {
			$this->collection[$offset] = new $this->model;
		}
		
		return $this->collection[$offset];
	}
	
	public function offsetSet($offset, $value) {
		
		if ($value instanceof $this->model) { 
			$index = empty($offset)
				? count($this->collection)
				: $offset;
			
			$this->collection[$index] = $value;
		}
		
		else { 
			throw new \Exception (
				"Collection $this can only accept instance of type " . get_class($this->model)	
			);
		}
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
	
	public function __toArray() {
		return $this->collection;
	}
	
	protected $model;
	protected $collection = array();	
}