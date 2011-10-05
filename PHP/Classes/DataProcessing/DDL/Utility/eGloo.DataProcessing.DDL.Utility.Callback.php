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
		
		$this->name      = &$this->event;
		$this->arguments = &$this->options; 
	}
	
	/**
	 * 
	 * Overrides parent call to allow for use of "deferred"
	 * arguments - since callbacks are meant to exist in
	 * stack, they also recieve the return of last pop
	 */
	public function call(array $arguments = [ ]) { 
		if (count($arguments) === 0) {
			$arguments = $this->arguments;	
		}
		
		return parent::call($arguments);
	}
	
	
	
	protected $name;
	protected $arguments;
	
}