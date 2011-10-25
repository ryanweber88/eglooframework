<?php
namespace eGloo\DataProcessing\DDL\Utility;

/**
 * 
 * Extends ZF2 framework callback handler; acts as adapter
 * in a way to parent class, by dropping notion of
 * event and options, or renaming them
 * @author Christian Calloway
 *
 */
class Callback extends \Zend\Stdlib\CallbackHandler { 
	
	function __construct($name, $callback, array $arguments = [ ]) { 
		parent::__construct ($name, $callback, $arguments);
		
		$this->name      = $name;
		$this->arguments = $arguments;
	}
	
	/**
	 * 
	 * Overrides parent call to allow for use of "deferred"
	 * arguments
	 */
	public function call(array $arguments = [ ]) { 
		if (!count($arguments)) { 
			$arguments = $this->arguments;
		}
		
		parent::call($this->arguments);
	}
	
	
	
	protected $name;
	protected $arguments;
	
}