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
		parent::__construct();
		
		if (is_object($mixed)) {
			$this->class    = get_class($mixed);
			$this->instance = new WeakRef($mixed);
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
					$parts, 0, count($parts)-2	
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
	 * 
	 * Attempts to create new instance of class
	 * @todo need to map arguments or use call_user_function_array
	 */
	protected function instantiate(array $arguments = [ ]) {
		return call_user_func_array($function, $param_arr)
	}
	
	/**
	 * 
	 * Only getter is provided for instance
	 */
	public function instance(array $arguments = [ ]) { 
		if (is_null($this->instance)) { 
			$this->instance = new WeakRef(array()
			
			);
		}
		
		if ($this->instance->valid()) {
			return $this->instance->get();
		}
		
		return false;
	}
	
	
	protected $name;
	protected $class;
	protected $instance;
	protected $namespace = false;
}