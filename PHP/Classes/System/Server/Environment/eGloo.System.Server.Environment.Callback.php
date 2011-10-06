<?php
namespace eGloo\System\Server\Environment;

/**
 * 
 * Provides callback mechanism 
 * @author Christian Calloway
 *
 */
class Callback extends Environment {
	
	function __construct($lambda) {
		// provide an include path to environment to load
		if (is_callable($lambda)) {
			$this->callback = $lambda;
		}
		
		else {
			throw new DDL\Exception\Exception (
				'Illegal Argument Exception : must pass ' . 
				'callable handler to constructor'
			);
		}
		
		
	}
	
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server\Environment.Environment::load()
	 */
	public function load() { 
		return $this->callback();
	}
	
	protected $callback;
}