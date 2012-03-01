<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain;

/**
 * Represents a model that can be comprised of many different model
 * types
 */
abstract class Composite extends Domain\Model {

	/**
	 * Because attribute is comprised of data from different
	 * model types, the constructor is overriden to check if
	 * an instance of model has been passed
	 * @TODO the case of composite model types may be used more
	 * frequently then first thought - determine if this a bad design
	 * or a parent reflecting the concept should be written
	 */
	function __construct($mixed = null) {
		// if mixed is a model, then set type, alias primary key and
		// initialize attribute with data provided by model
		if ($mixed instanceof Domain\Model) {
				
			// make sure the model instance has been initialized - if not,
			// we are creating an empty composite
			if ($mixed->initialized()) {
				$class = strtolower(preg_replace(
					'/([a-z])([A-Z])/', '$1_$2', static::classname()
				));
				
				$field = "{$class}_id";
				
				// check if primary key pattern exists - if
				// so, alias it to generic id
				if (isset($mixed->$field)) {
					$this->aliasProperty('id', $field);
				}
				
				// lets keep track of the class this composite
				// type is composed of
				$this->composedOf = get_class($mixed);
				
				
				// finally convert mixed to array representation so that
				// it can be passed to parent constructor
				$mixed = $mixed->toArray(true);
				
			}
				
			else {
				
				throw new \Exception(
					'Failed to initialize composite model ' . 
					get_class($this) . 
					' because model ' . 
					get_class($mixed) . ' has not been initalized'
				);
	
			}
			
	
		}
		
		parent::__construct($mixed);
	}
	
	protected $composedOf;
			
} 