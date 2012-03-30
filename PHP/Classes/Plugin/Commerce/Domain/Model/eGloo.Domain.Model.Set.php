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
			$model = get_class($mixed);
			$this->model = new $model;

			
			// if passed in model exists, then add as first element to set
			if ($mixed->exists()) {
				$this->collection[] = $mixed;  
			}
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
		
		// check if model has natural key, if case, then set key
		$model          = $this->model;
		$model          = new $model;
		$primaryKeyName = null;
		 
		try {
			$primaryKeyName = $model->send('primaryKeyName');
		}
		
		catch(\Exception $ignore) { }
		
				
		$this->key = is_null($key = $model::constant('NATURAL_KEY'))
			? $primaryKeyName
			: $key;
		
	}
	
	/**
	 * Adds reduce/inject functionality to set; please note that lambda takes two parameters
	 * lambda (result, model)
	 * @returns mixed
	 * @TODO this behavior should be moved to abstract Collection
	 */
	public function reduce($lambda, $initial = null) {
		$inject = $initial;
		
		foreach($this as $model) {
			$inject = $lambda($inject, $model);	
		}
		
		return $inject;
	}
	
	/**
	 * An alias to reduce
	 */
	public function inject($lambda, $initial = null) {
		return $this->reduce($lambda, $initial);
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
	
	public function key($value) {
		$this->key = $value;	
	}
	
	/**
	 * Returns filtered set - not that this returns a new instance of
	 * set and not a modified version of the old set
	 * @TODO move this to Collection and override
	 */
	public function collect($__mixed) {
		
		// filters will only work if natural key has been specified
		$model = $this->model;
		
		if (!is_null($field = $this->key)) {
			
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
			"Cannot apply collect to set<$class> because '$class::NATURAL_KEY' is not defined " . 
			"or key has not been explicitly set"
		);
	}
	
	/**
	 * Does the opposite of collect - since these are so similar, they should 
	 * probably be composed of similar meta methods
	 */
	function reject	($__mixed) {
		
		// filters will only work if natural key has been specified
		$model = $this->model;
		
		if (!is_null($field = $this->key)) {
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
			"Cannot apply collect to $this because '$model::NATURAL_KEY' is not defined " .
			"or key has not been explicitly set"
		);
	}


	/**
	 * Runs a "column statistic" on returned set and determines minimum value containg
	 * model within set
	 */
	public function minimum($attribute, $lambda = null) {
		$statistic = null;
		
		// first check that last has at least one value
		if (!$this->isEmpty()) {
			 
			// how check that attribute is valid
			if (isset($this[0]->$attribute)) {	
				foreach($this as $model) {
					
					
					$compare = is_callable($lambda)
						? $lamba($model->$attribute)
						: $model->$attribute;
					
					if (is_null($statistic)) {
						$statistic = $model;
					}
					
					else {
						$against = is_callable($lambda)
							? $lambda($statistic->$attribute)
							: $statistic->$attribute;
							
						if ($compare < $against) {
							$statistic = $model;
						}
					}
					
				}
			}
			
			else {
				throw new \Exception(
					"Failed running column statistic '$method' on receiver '$this' for model-type '$class' ".
					"because attribute '$attribute' does not exist"
				);
			}
		}
		
		else {
			$method = __FUNCTION__;
			$class  = get_class($this->model);
			
			throw new \Exception(
				"Failed running column statistic '$method' on receiver '$this' for model-type '$class' because it is empty"
			);
		}
		
		return $statistic;
	}

	public function statistic($lambda) {
		$statistic = null;
		
		
		// first check that last has at least one value
		if (!$this->isEmpty()) {
			 
			// how check that attribute is valid
			if (isset($this[0]->$attribute)) {	
				foreach($this as $model) {
					$statistic = $lambda($model);
				}
			}
			
			else {
				throw new \Exception(
					"Failed running column statistic '$method' on receiver '$this' for model-type '$class' ".
					"because attribute '$attribute' does not exist"
				);
			}
		}
		
		else {
			$method = __FUNCTION__;
			$class  = get_class($this->model);
			
			throw new \Exception(
				"Failed running column statistic '$method' on receiver '$this' for model-type '$class' because it is empty"
			);
		}
		
		return $statistic;		
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
		// @TODO cache these results and below is lazy - 
		// we should do a true check on exists
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
		if (is_string($offset)) {
			
			
			// if our natural field exist, iterate through collection and
			// determine if we can field a match to offset
			if (!is_null($field = $this->key)) {
		
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
				
				// otherwise check if offset is a valid range "1..10";
				// in which case we return a new set with elements that fall
				// within prescribed range 
				else if (\eGloo\Primitives\Range::valid($offset)) {
					// unfortunately we can't 
					$set = new static($this->model);
					
					foreach($this as $model) {
						$set[] = $model;
					}
					
					return $set;
				}
				
				else {
					
		
					foreach($this as $key => $model) {
						if ($model->$field == $offset) {
							return $this->collection[$key];
						}
					}
					
					// instead of returning false here, we are going to return an
					// empty instance of model, that can be populated; this way we
					// can add models to a new set or model that doesnt yet exist;
					// please note though, there are no constraints in regards to
					// the domain of model->natural_key values
					// @TODO this doesn't fucking work right now
					//$this[] = new $this->model(array($field => $offset));
					
					return false;
				}
			}
			
			$class = get_class($this);
			
			throw new \Exception(
					"Cannot get offset '$offset' to '$this' because '$class::NATURAL_KEY' is not defined or " .
					"key has not been explicitly set"	
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
		unset($this->collection[$offset]);
	}
	
	public function getIterator() {
		return new \ArrayIterator($this->collection);
	}
	
	public function count() {
		return count($this->collection);
	}
	
	public function __toArray() {
		$wrapped = array();
		
		foreach ($this->collection as $model) {
			$wrapped[] = new Domain\Utility\ArrayAccess(
				$model
			);
		}
		
		return $wrapped;
	}
	
	public function toArray($wrapped = false) {
		return $wrapped
			? $this->__toArray() 
			
			: $this->collection;
	}
	
	protected $model;
	protected $key;
	protected $collection = array();	
}
