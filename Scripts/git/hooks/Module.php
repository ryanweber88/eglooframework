<?php
/**
 * Contains class definition of Module
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
 namespace eGloo\Script\Git\Hook;
 
 /**
  * Represents a hook module and is responsible for defining concrete methods
  * that are shared amongst hook module instances
  */
 abstract class Module {
 	
	
	function __construct() {
		$this->up();
	}
	
	function __destruct() {
		$this->down();
	}
	
	/**
	 * Responsible for firing on instance callable event
	 */
	public function __invoke($hook) {
		$this->before_invoke($hook);
		$binding = $this->invoke($hook);
		return $this->after_invoke($hook, $binding);
	}	
	
	/**
	 * Called by __invoke and is meant as the definition 
	 * container for module action
	 */
 	abstract protected function invoke($hook);

	/**
	 * Perform and build-up operations
	 */
	protected function up() { }
	
	/**
	 * Perform any tear-down operations
	 */
	protected function down() { }
	
	/** 
	 * A pre-invoke hook
	 */
	protected function before_invoke($hook) { }
	
	/**
	 * A post-invoke hook
	 */
	protected function after_invoke($hook, $binding = null) {
		return $binding;
	}
	

 }