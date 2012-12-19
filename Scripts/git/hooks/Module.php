<?php
/**
 * Contains class definition of Module
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
 namespace eGloo\Script\Git\Hook;
 use       \eGloo\Dialect\ObjectSafe as Object;

 /**
  * Represents a hook module and is responsible for defining concrete methods
  * that are shared amongst hook module instances
  */
 abstract class Module extends Object {


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
	 * Determined if errors occured during
	 * module invocation
	 * @return boolean
	 */
	public function has_errors() {
		return count($this->log) > 0;
	}

	/**
	 * Returns outstanding errors
	 * @TODO refactor and decouple from Module
	 */
	public function errors() {
		return $this->log;
	}

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

	/** @TODO temporary measure until logging has been
	 * cleanly separated
	 */
	protected function log($message) {
		$class_name = str_replace( 'eGloo\Script\Git\Hook\Module\\', '', get_class($this) );

		$this->log[] =
			"Module::" . $class_name . " >> $message";
	}

	private $log = array();
 }
