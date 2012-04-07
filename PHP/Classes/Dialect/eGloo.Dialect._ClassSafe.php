<?php
namespace eGloo\Dialect;

/**
 * 
 * Similar in scope to ruby's class class object
 * @author Christian Calloway
 *
 */
class _ClassSafe { 
	
	function __construct($mixed) { 
		//parent::__construct();
		
		if (is_object($mixed)) {			
			$this->class    = get_class($mixed);
			$this->qualified_name = get_class($mixed); 
			//$this->instance = new \WeakRef($mixed);
			//$this->instance = $mixed;
		}
		
		else { 
			$this->class          = $mixed;
			$this->qualified_name = $mixed; 
		}
			
		// get class name and namespace
		if (class_exists($this->class)) { 
			$parts           = explode('\\', $this->class);
			$this->name      = $parts[count($parts)-1];
			
			// make sure we are namepace exists
			if (count($parts) > 1) {  
				$this->namespace = implode('\\', array_slice(
					$parts, 0, count($parts)-1	
				));
			}
			
		}
	
		else { 
			throw new \Exception(
				"Failed constructing _Class instance because argument '$mixed' must be fully " .
				"qualified class name or instance"
			);
		}
	}
	
	
	/**
	 * 
	 * Returns fully qualified class name as string
	 */
	public function __toString() {
		return $this->qualified_name;
	}
	
	/**
	 * 
	 * Only getter is provided for instance
	 */
	public function instance(array $arguments = array()) { 
		if (is_null($this->instance)) { 
			$this->instance = new \WeakRef($this->instantiate(
				$arguments
			));
		}
		
		if ($this->instance->valid()) {
			return $this->instance->get();
		}
		
		return false;
	}
	
	public function instantiate(array $arguments = array()) {
		// instantiates dynamic class with given arguments
		
		// use reflection to retrieve constructor and read parameter list
		$reflection = new \ReflectionClass(
			$this->class
		);
		
		return $reflection->newInstanceArgs($arguments);
		
	}	
	

	public $name;
	public $qualified_name;
	public $class;
	public $instance;
	public $namespace = false;
}