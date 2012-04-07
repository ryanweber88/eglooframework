<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain;

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
class Manager extends \eGloo\Dialect\ObjectSafe {
	
	function __construct() {
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
		// we lock the model instance to read only and insert
		// into persistence store
		$model->lock();
		$this->pool[$model->classNameFull()][$model->id()] = $model;
	}
	
	/**
	 * Attempts to find model in persistence-context, 
	 * @return Model | boolean
	 * 
	 */
	public function find($mixed, $key) {
		$class = (is_object($mixed) && $mixed instanceof Domain\Model)  
			? $mixed->classNameFull()
			: $mixed;
			
		if (class_exists($class)) { 
			if (isset($this->pool[$class][$key])) {
				return $this->pool[$class][$key];
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
	public function remove ($mixed) { }
	
	/**
	 * Synchronize the persistence context to the underlying database.
	 */
	public function flush() { }
	
	protected $pool;
}
