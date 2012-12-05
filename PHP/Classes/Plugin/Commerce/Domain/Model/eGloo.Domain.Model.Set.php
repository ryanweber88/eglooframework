<?php
/**
 * Contains eGloo.Domain.Model.Set Class definition
 * @author Christian Calloway callowaylc@gmail christian@petflow
 */
namespace eGloo\Domain\Model;

use \eGloo\Domain;
use \eGloo\Utilities;
use \eGloo\Performance\Caching;

/**
 * Represents a returned set of data - can be accessed as array and is iterable over
 * foreach 
 * @author Christian Calloway
 */
class Set extends \eGloo\Dialect\Object
	implements \ArrayAccess, \IteratorAggregate, \Countable, Utilities\ToArrayInterface, \Serializable, Caching\CacheKeyInterface {
	
	
	/**
	 * Takes a fully-qualified class name (including namespace) which
	 * is used as template of sorts of initialization
	 * @param String $model
	 */
	function __construct($mixed) {
		parent::__construct();
				
		// @TODO temporary; association data will be part of Model.Relation
		//$this->attr_accessor('association');
				
		// set our model type; think of this as templated collection
		// in c++, where array values may only be of passed
		// in type
		$instance = null;
		
		if ($mixed instanceof Domain\Model) {
			$this->model = get_class(
				$instance = $mixed
			);
			
			
			// if passed in model exists, then add as first element to set
			if ($mixed->exists()) {
				$this->collection[] = $mixed;  
			}
			
		}
		
		// if mixed is an array with 1+ elements, then we wrapping at collection
		// with the functionality provided by set
		else if (is_array($mixed) && count($mixed)) {
			$this->collection = $mixed;
			$this->model      = get_class(
				$instance = $mixed[0]
			);
		}
		
		// in this case, our model is passsed/identified as fully qualified string
		// and our set is currently empty
		else if (is_string($mixed) && class_exists($mixed)) {
			$this->model = $mixed;
		}
		
		else {
						 
			throw new \Exception(
				"Failed constructing set because argument '$mixed' is invalid"
			);
		}
		
		// check if model has natural key, if case, then set key
		// by that; otherwise default to primary key, if available
		if (!is_null($instance)) {

			try {
				$primaryKeyName = $instance->send('primaryKeyName');
			}
			
			catch(\Exception $ignore) { }
		}
			
		$model = $this->model;
			
		if (!is_null($key = $model::constant('NATURAL_KEY'))) {
			$this->key = $key;
		}
		
		else if (isset($primaryKeyName) && !is_null($key = $primaryKeyName)) {
			$this->key = $key;
		}

			
		// check that primary key is returning unique values for 	
		if (!is_null($this->key) && !$this->keyReturnsUnique()) {
			throw new \Exception(
				"Failed constructing $this because key '$key' is not valid because " .
				"it returns non-unique model instances"
			);		
		}
	}

	public function each($lambda) {
		foreach($this as $model) {
			$lambda($model);
		}
	}
	
	/**
	 * Return the first element in a set
	 * @return Model
	 */
	public function first() {
		if (count($this)) {
			return $this[0];
		}
		
		throw new \Exception(
			"Failed to return first element of set '$this' because its empty"
		);
	}
	
	/**
	 * Return the last element in a set
	 * @return Model
	 */
	public function last() {
		if (count($this)) {
			return $this[0];
		}
		
		throw new \Exception(
			"Failed to return first element of set '$this' because its empty"
		);			
	}
	
	/**
	 * Returns json representation of models in set
	 * @TODO use Model#toJson to create json representation 
	 */
	public function toJson($temporary = [ ]) {
		$data = [ ];
		
		
		foreach ($this as $model) {
			$associations = [ ];
			
			// second we pull associations and determine their links
			// @TODO decouple link generation from model
			// @TODO remove tight coupling of server variables..
			
			
			foreach ($model->reference('associations') as $name => $ignore) {
				$name                        = strtolower($name);
				$associations[ "uri_$name" ] = strtolower(
					"{$_SERVER['PATH_INFO']}/{$model->id}/$name"
				);
	
			}
					
			$data[] = array_merge(
				$model->toArray(), $associations
			);
		}
		
		
		// @TODO decouple pretty pretty
		return json_encode($data, JSON_PRETTY_PRINT);
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
	 * An alias method; its intended usage is within templates, where underscores
	 * are used as convention
	 */
	public function is_empty() {
		return $this->isEmpty();
	}
	
	/**
	 * Simply empties out our collection
	 */
	public function clear() {
		$this->collection = array();
	}
	
	/**
	 * Setter/getter for key
	 */
	public function key($value = null) {
		if (is_null($value)) {
			return $this->key;
		}
		
		else {
			$this->key = $value;	
		}
	}
	
	
	/**
	 * Somes a key for given set is not unique (for example, a returned set of categories all shares the same
	 * key which is somethink like parent_category, so this key, in effect, does not function as primary key)
	 * - in these cases, which are bitch to find, we provide a method to make the determination if this is
	 * the case
	 */
	protected function keyReturnsUnique() {
		// there's no point on doing a check of uniqueness if there is only
		// one value	
		if (count($this) > 1 && !is_null($key = $this->key)) {	
			$values = array();
			
			foreach($this as $ignore => $model) {
				foreach($values as $past) {
					if ($model === $past) {
						return false;
					}
				}
			}
		}
		
		return true;
	}
	
	// @TODO this is temporary until Set#collect is fixed
	// to propery implement map pattern
	public function map($lambda) {
		$collected = array();
		
		foreach($this as $element) {
			$collected[] = $lambda($element);
		}
		
		return $collected;
	}
	
	/**
	 * Returns filtered set - note that this returns a new instance of
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
				$collected = array();
				
				foreach($this as $model) {
					if (($value = $lambda($model)) === true) {
						$set[] = $model;
					}
					
					// @TODO this is very messy and a problem with the nature of
					// collect as it has been written/defined; we probably
					// need another method for iterating over a set and collecting
					//
					//else if ($value !== null   &&
					//         $value !== false) {
						 	
					//	$set[] = $value;     
					//}
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
						$set[] = $model;
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
			$class  = $this->model;
			
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
			$class  = $this->model;
			
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
		return parent::__toString() . "<{$this->model}>";
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
	
	public function slice($offset, $length) {
		return new static(array_slice(
			$this->collection, $offset, $length, true
		));
	}
	
	public function offsetGet($offset) {


		// if a string we are attempting to match by "natural_key" 
		// or a field that is representative of the model in a 
		// collection
		
		// make sure offset is a string and not some '19' fuckery
		if (is_string($offset)) {
			
			
			// otherwise check if offset is a valid range "1..10";
			// in which case we return a new set with elements that fall
			// within prescribed range 
			if (\eGloo\Primitives\Range::valid($offset)) {
				// unfortunately we can't 
				$set   = new static($this->model);
				$range = \eGloo\Primitives\Range($offset); 
				
				return $set->slice($range->start(), $range->end());
								
				//return $set;
			}
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
				
				
				else {
					
	
					foreach($this as $key => $amodel) {
						if ($amodel->$field == $offset) {
							$model = $this->collection[$key];
						}
					}
					
						// instead of returning false here, we are going to return an
						// empty instance of model, that can be populated; this way we
						// can add models to a new set or model that doesnt yet exist;
						// please note though, there are no constraints in regards to
						// the domain of model->natural_key values
						// @TODO this doesn't fucking work right now

					if (!isset($model)) {

						$model  = new $this->model(array($field => $offset));
						$this[] = $model;						
					}
				}
			}

			else {
			
				$class = get_class($this);
				
				throw new \Exception(
						"Cannot get offset '$offset' to '$this' because '$class::NATURAL_KEY' is not defined or " .
						"key has not been explicitly set"	
				);
				
			}
			
		}

		else if (is_integer($offset)) {
			$values = array_values($this->collection);
			
			if (isset($values[$offset])) {
				$model = $values[$offset];
			}
		}
		
		
		else {
			throw new \Exception(
				"Failed to retrieve model from set '$this' because offset '$offset' must be a string or integer"
			); 
			
		} 

		// otherwise we create an instance of templated model and push
		// onto queue
		if (!isset($model)) {
			$model = $this->model;
			$model = $model::instantiate();
						
			$this[] = $model;
		}
		
		return $model;
	}

	
	public function offsetSet($offset, $model) {
		
		
		
		if ($model instanceof $this->model) { 
			$index = empty($offset)
				? count($this->collection)
				: $offset;
							
			
			// if model being added to set "belongsTo" another model,
			// as indicated by the presence of association and set within
			// Model#defineRelationship, then we link/reference foreign key
			// to relationship model primary key 
			if (!is_null($this->association)) {
				$owner = $this->association->owner;
				$field = $owner->primaryKeyName();
				
				//if ($model->send('belongsTo', $owner->class->name)) {
				if (\property_exists($model, $pk = $owner->primaryKeyName())) { 
					$model->send('aliasAttribute', $pk, function & () use ($owner) {
						return $owner->id;
					});
					
					//$owner->send('aliasAttribute', $pk, function & () use ($model, $pk) {
					//	return $owner->$pk;
					//});
					
					// @TODO right now alias is deferred, so it doesnt exist until actually called upon
					// so we debunk the deferral - this may be ok, as we only care about foreign key value
					// on crud ops, where it will automatically be called					
					$model->$field;
				}
					

				
			}	
						
			$this->collection[$index] = $model;
			
		}
		
		else { 
			throw new \Exception (
				"Collection '$this' can only accept instance of type '{$this->model}'"
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
		$self  = $this;
		
		return static::cache($this->hash(), function() use ($self) {
			
			$wrapped = array();
			
			if (count($self)) {
						
				// we are gaurenteed that at least one model element exists
				// within collection
				$model = $self[0];
				
				
				
				// make a determiniation on whether to use 'natural key'
				// or precede with numerical indicies
				// @TODO this get's a little overcomplex because
				// php determines numerical-string based indicies
				// as numerical, thus the shitload of checks below
				$key    = $self->reference('key');
				$useKey = !is_null($key)              &&
				          isset($model->$key)         && 
		              !is_null($model->$key)      &&
				          !is_numeric($model->$key);
																	
				
										 	
				foreach ($self as $model) {
								
					if ($useKey) {
						if (isset($model->$key) && !is_null($model->$key)) {
						  
							$index = $model->$key;
						}
						
						else {
							$class = $model::classNameFull();
							
							throw new \Exception (
								"Failed creating index with key '$key' because receiver instance '$model' does not have '$key' as a member"
							);
						}
					}
					
					else {
	
						$index = count($wrapped);
					}
					
					
						
					$wrapped[$index] = new Domain\Utility\ArrayAccess(
						$model
					);
				}
			}
	
			return $wrapped;
			
		});
	}
	
	public function toArray($wrapped = false) {
		return $wrapped
			? $this->__toArray() 
			
			: $this->collection;
	}
	
	public function join() {
		if (!is_null($this->association)    && 
	      $this->association->usesJoin()) {
	      
			if (is_object($owner = $this->association->owner) && $owner instanceof Domain\Model) {
				
								
				// determine if model exists, if not, use generic
				// @TODO going to have to account for different namespaces
				// once heirarchy extends past Common
				$ns    = \eGloo\Dialect\_Namespace::name(
					$this->association->target
				);
				
				$target = $this->association->through;	
				$owner  = $this->association->owner;
				
				// @TODO check for hasRelationship on through
				//if ($owner->hasRelationship($target))

				$joinModel = \class_exists($class = "$ns\\$target")
					? new $class
					: Generic::factory($target);
					
				
				foreach(array($owner, $model) as $amodel) { 
					if (isset($amodel->id)) {
						$key             = $amodel->primaryKeyName();
						$joinModel->$key = $amodel->id; 
					}
					
					else {
						throw new \Exception(
							"Failed to create join '$target' because model '{$model->ident()}' does not exist"
						);
					}
				}
				
				
				// finally attempt save on model
				
				try {
					$joinModel->save();
				}
				
				catch(\Exception $pass) {
					throw $pass;
				} 
			
			}	
		}	

		else {
			throw new \Exception(
				"Failed to join '$this' because join association '{$this->association}' has not been specified"
			);
		} 	
	}	

	/**
	 * Alias to join
	 */
	public function link() {
		return $this->join();
	}

	public function unlink() {
		if (!is_null($this->association)    && 
	      $this->association->usesJoin()) {
		
			if (is_object($owner = $this->association->owner) && $owner instanceof Domain\Model) {
				
				// determine if model exists, if not, use generic
				// @TODO going to have to account for different namespaces
				// once heirarchy extends past Common
				$ns    = \eGloo\Dialect\_Namespace::name(
					$this->association->target
				);
				
				$target = $this->association->through;	
				$owner  = $this->association->owner;
				
				$joinModel = \class_exists($class = "$ns\\$target")
					? new $class
					: Generic::factory($target);
					
					
			
				// now use the primary key of owner to determine our
				// dynamic delete method; we are making an assumption 
				// here that primary key name is a foreign key in
				// join table; if it is not, we will catch the resulting
				// exception and pass to handler
				$deleteMethod = "delete_by_{$owner::primaryKey()}";
					
				try {
					$joinModel::$deleteMethod($owner->id);
				}
				
				catch(\Exception $pass) {
					
					throw $pass;
				} 
				
				$this->clear();
				
			
			}
			
			else {
				
				throw new \Exception(
					"Failed unlinking target '$target' from owner '$owner' because owner must be an instance of Model"
				);
			}
			
		}
	}	
	
	
	/**
	 * Also a convenience method; this needs to be moved to Model.Relation
	 */
	public function save() {
		foreach($this as $model) {
			
			// first we save our model
			try {
				
				// @TODO this needs to be changed to 'model->changed'
				if ($model->valid()) {
					$model->save();
				}
			}
			
			catch (\Exception $pass)	{
				throw $pass;
			}
			

			
			
	    if (!is_null($this->association)    && 
	        $this->association->usesJoin()) {

				if (is_object($owner = $this->association->owner) && $owner instanceof Domain\Model) {
					
									
					// determine if model exists, if not, use generic
					// @TODO going to have to account for different namespaces
					// once heirarchy extends past Common
					$ns    = \eGloo\Dialect\_Namespace::name(
						$this->association->target
					);
					
					$target = $this->association->through;	
					$owner  = $this->association->owner;
	
					$joinModel = \class_exists($class = "$ns\\$target")
						? new $class
						: Generic::factory($target);
						
										
					foreach(array($owner, $model) as $amodel) { 
						if (isset($amodel->id)) {
							$key             = $amodel->primaryKeyName();
							$joinModel->$key = $amodel->id; 
						}
						
						else {
							throw new \Exception(
								"Failed to create join '$target' because model '{$model->ident()}' does not exist"
							);
						}
					}
					
					
					// finally attempt save on model
					
					try {
						$joinModel->save();
					}
					
					catch(\Exception $pass) {
						throw $pass;
					} 
				
				}	
			}		
		}
	}
	
	/**
	 * This is a convenience method and will be removed once
	 * Model.Relation is completed
	 */
	public function delete() {		
		// if a join table is being employed (suggested when we define a relationship 
		// using RelationShipName through JoinTable), then the meaning of delete on
		// a set changes to unlink (via destruction of the join table) as opposed
		// to deleting of models themselves
		if (count($this)) {
			if (!is_null($this->association)    && 
	        $this->association->usesJoin()) {
			
				if (is_object($owner = $this->association->owner) && $owner instanceof Domain\Model) {
					
					// determine if model exists, if not, use generic
					// @TODO going to have to account for different namespaces
					// once heirarchy extends past Common
					$ns    = \eGloo\Dialect\_Namespace::name(
						$this->association->target
					);
					
					$target = $this->association->through;	
					$owner  = $this->association->owner;

					$joinModel = \class_exists($class = "$ns\\$target")
						? new $class
						: Generic::factory($target);
					

						
					
					
					// now use the primary key of owner to determine our
					// dynamic delete method; we are making an assumption 
					// here that primary key name is a foreign key in
					// join table; if it is not, we will catch the resulting
					// exception and pass to handler
					$deleteMethod = "delete_by_{$owner::primaryKey()}";

					try {
						$joinModel::$deleteMethod($owner->id);
					}
					
					catch(\Exception $pass) {
						throw $pass;
					} 
				
				}
				
				else {
					
					throw new \Exception(
						"Failed unlinking target '$target' from owner '$owner' because owner must be an instance of Model"
					);
				}
				
				
			}
			
			else {

				// iterate through models, grab keys and push onto stack
				foreach($this as $model) {
					$keys[] = $model->id;
				}
				
				// now simply pass the stack to model delete method, which
				// will take care of the rest
				try {
					$model::delete($keys);
				}
				
				// throw exception to be managed by caller
				catch(\Exception $pass) {
					throw $pass;
				}
			}
			
			// now actually clear instances in memory
			$this->clear();
		}
	}

	public function keys() {
		$keys = array();
		
		foreach($this as $model) {
			$keys[] = $model->id;
		}
		
		return $keys;
	}

	/** Serializable Interface *************************************************/
	
	/**
	 * Iterates through set and builds serialized form of set
	 */
	public function serialize() {
		
	}
	
	/**
	 * Unserializes model[] data and rebuilds set
	 */
	public function unserialize($unserialized) {
		
	}
	
	


	/** CacheKeyInterface Interface ********************************************/

	/**
	 * Provides a unique cache key
	 */
	public function cacheKey() {
		// first reverse our set and model fully qualified class name	
		$set   = implode('\\', array_reverse(explode('\\', get_class($this))));
		$model = implode('\\', array_reverse(explode('\\', get_class($this)))); 
		$keys  = implode(',',  $this->keys());
		
		return "<$keys><$model>$set";
	}	
	
	protected $model;
	protected $key;
	protected $collection = array();	
	public $association; 
}