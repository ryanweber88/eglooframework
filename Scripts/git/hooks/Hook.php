<?php
/**
 * Contains Hook class definition
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
 namespace eGloo\Script\Git\Hook;
 

 /**
  * Defines concrete methods employed by git hook handlers
  */
 abstract class Hook {
 	
	static public function fire() {
		$instance = new static;
		$instance->main();
	}
	
  public function main() {
  	// iterate through defined modules and call each
  	// passing an instance of self as the parameter
  	// @TODO do we need a way to organize module calls?
  	foreach($this->modules() as $name => $module) {
  		$module($this);
  	}
  }
	
	
	public function __call($name, $arguments) {
		// provides simple dispatch to protected methods
		// @TODO this will be removed once move to 5.4	
		if (method_exists($this, $name)) {
			return call_user_func_array(
				array($this, $name), $arguments
			);		
		}
	}
	
	/**
	 * Retrieve a list of modules attached to git hook type
	 * and all
	 */
	protected function modules() {
		$modules = array();
			
		// get global and hook specific modules
		$files = array_merge(
			glob(__DIR__ . '/modules/*.php'),
			glob(__DIR__ . '/' . $this->hook_name() . '/modules/*.php')
		);
				
		// iterate across files, include each, and wrap within
		// closure
		foreach($files as $file) {
			
			// require the file and, following convetion, build
			// function name
			require_once $file;
			
			// get name of module class and make sure
			// it exists
			$name  = basename($file, '.php');
			$class = __NAMESPACE__ . "\\Module\\$name";
						
			if (class_exists($class)) {
				if (is_callable($module = new $class)) {
					
					$modules[ strtolower($name) ] = function($self) use ($module) {
						return $module($self);
					};
				}
				
				else {
					throw new \Exception(
						"Could not invoke module '$name' because it does define #__invoke"
					);
				}
				
			// if function does not exist in required file then
			// throw exception to that fact
			} else {
				throw new \Exception(
					"Failed to include module '$name' because class '$name' is not defined"
				);
			}

		}
		
		
		return $modules;
	}
	
	private function hook_name() {
		// determines hook name by looking at
		// current class name
		
		// first retrieve class name from fully qualified 
		$tokens = explode('\\', get_class($this));
		$class  = $tokens[ count($tokens) - 1 ];
		
		// now use regular expression to replace camel
		// case 
		return strtolower(preg_replace(
			'/[(a-z)(A-Z)]/', '$1-$2', $class
		));
	}
	
 }