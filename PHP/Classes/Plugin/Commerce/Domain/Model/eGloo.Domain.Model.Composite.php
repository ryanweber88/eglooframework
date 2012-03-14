<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain;
use \eGloo\Domain\Model as Model;

/**
 * Represents a model that can be comprised of many different model
 * types
 */
abstract class Composite extends Model {
	// abstract class Composite {

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

				// lets keep track of the class this composite
				// type is composed of
				$this->composed = get_class($mixed);
				
				// finally convert mixed to array representation so that
				// it can be passed to parent constructor
				$mixed = $mixed->toArray();
				
				
			} else {
				$class    =  get_called_class();
				$composed =  get_class($mixed);
				
				throw new \Exception(
					"Failed to initialize composite model '$class' because argument model '$composed' is not initialized"
				);
	
			}
		}

		parent::__construct($mixed);
	}
	
	/**
	 * Composite#__get composite allows for on-the-fly model initialization; since 
	 * a composite is "composed-of" data from multiple targets, we can in effect
	 * feed that data into model at runtime and return; the caller will in turn
	 * retrieve the model-specific behaviors of retrieved instance
	 */
	public function __get($name) {
				
		// parent __get takes precedence over composite model
		// generation; we first attempt to retrieve from parent
		// 
		try {
			return parent::__get($name);
		}
		
		// save exception "defered exception"  
		catch(\Exception $defer) { }
		
		// check if model exists with namespace of current 
		// receiver
		$namespace = $this->namespace();
		$class     = $this->classname();
		
		
		// we check against namespace/$name and namespace/class/namespace
		// anything beyond that, and our complexity of convetion becomes
		// to great
		if (\class_exists($model = "$namespace\\$name")) { 
		   // \class_exists($model = "$namespace/$class/$potential")) {

			$this->$name = new $model($this->toArray());
			return $this->$name;
		}
				
		// otherwise throw deferrred exception
		throw $defer;		
		
	}
	
	/**
	 * Here we override the method since we don't need automatic
	 * property aliasing
	 */
	protected function __attributes() { }

	protected $composed;
}

