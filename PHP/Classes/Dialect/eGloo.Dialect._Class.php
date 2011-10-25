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
		
		$this->class = ($mixed instanceof Object) 
			? get_class($object)
			: $mixed;
			
		// get class name
		if (class_exists($this->class)) { 
			$this->name = $parts[count($parts)-1];
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
	 */
	public function instantiate(array $arguments = [ ]) {
		$class = $this->class(); 
		return new $class();
	}
	
	protected $name;
	protected $class;
}