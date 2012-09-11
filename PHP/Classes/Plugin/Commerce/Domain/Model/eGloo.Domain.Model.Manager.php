<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain;
use \eGloo\Dialect\ObjectSafe as Object;

/**
 * 
 * The default entity manager; responsible for 
 *   - managing models in persistence context
 *   - crud operations between data and entity layers
 *   
 * @author Christian Calloway
 * @TODO this is slimmed down version of persistence api, while it will have same interface, it will eventually
 * be replaced
 *
 */
class Manager extends Object {
	
	function __construct() {
		parent::__construct();
		
		// initialize pool
		//$this->pool = new Model\Pool($this);	
		
		// @TODO for now pool will simply be an array, but will require
		// further abstraction later
		$this->pool = array();	
	}
	
	/**
	 * Persists model for duration of application
	 * run-time	 
	 * @return void
	 * */
	public function persist(Domain\Model $model) {
		return ;
		// we lock the model instance to read only and insert
		// into persistence store		
		$model->lock();
		$this->pool[$model::classnamefull()][$model->id] = $model;
	}
	
	/**
	 * Attempts to find model in persistence-context, 
	 * @return Model | boolean
	 * 
	 */
	public function find($mixed, $key, $lambda = null) {
		
		// our mixed parameter may be of either type Model or a string
		// representing a valid, fully qualified class name
		$class = (is_object($instance = $mixed) && $mixed instanceof Object)  
			? $mixed->class->qualified_name
			: $mixed;

					
		if (class_exists($class)) { 
			if (isset($this->pool[$class][$key])) {
				return $this->pool[$class][$key];
			}
			
			// if we have a callable lambda, then attempt to retrieve
			// model from lambda
			else if (is_callable($lambda)) {
				if (($model = $lambda($class, $key))) {
	
					// persist found model and return to caller
					if ($model->exists()) {
						$this->persist($model);
					}

					return $model;
				}
			}
		}
		
		else {
			throw new \Exception (
				"Failed to find model-instance because the constant '$class' does not exist"
			);
		}
		
		return false;
	}
	
	/**
	 * Check if the instance belongs to the current persistence context
	 */
	public function contains(Domain\Model $model)  {
		return $this->find($model) !== false;
	}
	
	/**
	 * Remove the entity from the persistence context
	 */
	public function remove (Domain\Model $model) {
		
		// we will NOT do an explicit check to see if model
		// has previously been attached to persistence context
		// as that onus is upon the developer to check explicitly
		unset($this->pool[$model::classnamefull()][$model->id]);
	}
	
	/**
	 * This is stubbed for the time being: since our objects are currently all
	 * references and locking hasn't yet been implemented, i don't know how
	 * to proceed from this point
	 */
	public function merge(Domain\Model $model) { }
	
	/**
	 * Synchronize the persistence context to the underlying database.
	 */
	public function flush() { }
	
	protected $pool;
}
