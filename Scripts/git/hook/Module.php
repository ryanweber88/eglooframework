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
	
 	abstract public function invoke($hook);
	
	public function up()   { }
	public function down() { }
	
	public function before_invoke($hook) { }
	public function after_invoke($hook, $binding = null) {
		return $context;
	}
	
	public function __invoke($hook) {
		$this->before_invoke($hook);
		$binding = $this->invoke($hook);
		
		return $this->after_invoke($hook, $binding);
	}
 }