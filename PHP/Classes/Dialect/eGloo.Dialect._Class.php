<?php
namespace eGloo\Dialect;

/**
 * 
 * Similar in scope to ruby's class class object
 * @author Christian Calloway
 *
 */
class _Class extends Object { 
	
	function __construct($mixed) { 
		//parent::__construct();
		
		if (is_object($mixed)) {			
			$this->class    = get_class($mixed);
			$this->instance = new \WeakRef($mixed);
		}
		
		else { 
			$this->class = $mixed;
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
			throw new Exception(
				'Illegal Argument: _Class constructor requires object instance or fully qualified class name ' . $mixed
			);
		}
	}
	
	/**
	 * Override parent class to provide _Class specific funcitonality
	 * for defining a dynamic method
	 */
	public function respondTo($name) {
		return isset($this->methods[$name]);
	}

	public function defineMethod($name, callable $lambda) {
		$this->methods[$name] = $lambda;
	}
	
	/**
	 * 
	 * Returns fully qualified class name as string
	 */
	public function __toString() {
		return $this->class;
	}
	
	/**
	 * 
	 * Only getter is provided for instance
	 */
	public function instance(array $arguments = [ ]) { 
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
	
	public function instantiate(array $arguments = [ ]) {
		// instantiates dynamic class with given arguments
		
		// use reflection to retrieve constructor and read parameter list
		$reflection = new \ReflectionClass(
			$this->class
		);
		
		return $reflection->newInstanceArgs($arguments);
		
	}	
	

	
	
	
	
	protected $name;
	protected $class;
	protected $instance;
	protected $namespace = false;
	protected $methods   = [ ];
}