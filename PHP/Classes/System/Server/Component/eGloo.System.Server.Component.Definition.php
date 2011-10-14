<?php
namespace eGloo\System\Server\Component;

/**
 * 
 * Enter description here ...
 * @author petflowdeveloper
 *
 */
class Definition extends \eGloo\Dialect\Object { 
	
	function __construct($class) { 
		$this->class = $class;
	}
	
	/**
	 * Specify class constructor arguments, if any
	 */
	public function &argument($argument) { 
		$this->arguments[] = $argument;
		
		return $this;
	}
	
	protected $class;
	protected $arguments = array();
	
}