<?php
namespace eGloo\Dialect;

/**
 * 
 * Similar in scope to ruby's class class object
 * @author Christian Calloway
 *
 */
class _Class extends Object implements MetaInterface { 
	
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
	 * Defines a method on class - which is to say that method is available to 
	 * all instances of this class, but not its descendants
	 * @return lambda
	 */
	public function defineMethod($name, callable $lambda) {
		
		// defines static methods across class hierarchy
		if (is_callable($lambda)) {
			$this->methods[$name] = $lambda;
			
			return $lambda;
		}
		
		throw new DDL\Exception\Exception(
			'Illegal argument exception : parameter ' . 
		    'must be of type lambda'
		);
		
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
	
	protected function instantiate(array $arguments = [ ]) {
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