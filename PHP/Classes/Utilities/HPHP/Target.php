<?php
namespace \eGloo\Utilities\HPHP;

/**
 * 
 * A wrapper to interface hiphop compiled programs
 * @author Christian Calloway
 *
 */
abstract class Target extends \eGloo\Dialect\Object { 

	use \eGloo\Utilities\ParametersTrait;
	
	function __construct() { }
	
	/**
	 * 
	 * Performs interface with compiled program; provides closure
	 * to allow for specific handling of 
	 */
	public function execute(Closure $callback = null) {
		// perform pre-execute routines before calling target directly
		$this->preCall();
		
		// call handler with instance of self and retrieve
		// value, if any, from callback
		$value = $this->postCall($this->call());
		
		return (is_callable($callback))
			? $callback($data)
			: $value;
		
	}
	
	/**
	 * 
	 * Perform any steps required before callback; since this is optional
	 * a stub method is provided for inheriting classes
	 */
	protected function preCall() { }
	
	protected function postCall($mixed) {
		return $mixed;
	}
	
	/**
	 * 
	 * Make specific call to target
	 */
	abstract protected function call();
	
	
	
	protected $handler;
}