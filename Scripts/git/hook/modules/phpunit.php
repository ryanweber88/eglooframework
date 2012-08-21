<?php
/**
 * Contains module_phpunit function definition
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
 namespace eGloo\Script\Git\Hook\Module


/**
 * 
 */
class PHPUnit extends Module {
	
	
	public function __invoke($hook) {
		if (method_exists($hook, 'modified_files')) {
			
			foreach($hook->modified_files() as $file) {
	
			}
			
			exit(1);
		}
		
		else {
			throw new \Exception (
				"Module phpunit failed because parameter hook does not respond to 'modified_files'"
			);
		}		
	}
}
/**
 * Responisble for determining if associated phpunit files exist
 */
function module_phpunit($hook) {
	
	// add a zend autoloader for reflection file; this assumes
	// that zend has been placed into include path
	
	/*
	spl_autoload_register($zend = function($name) {
		$path = implode('/', explode('\\', $name)) . '.php';


		if (!@include_once($path)) {
			throw new \Exception(
				"Failed loading '$name'; please make sure the Zend Framework library " . 
				"classes are available on the include_path"
			);
		}
		
	});
	*/


}