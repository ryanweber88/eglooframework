<?php
/**
 * Contains module_phpunit function definition
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
 namespace eGloo\Script\Git\Hook\Module;
 use       \eGloo\Script\Git\Hook;


/**
 * Responsible for checking to ensure phpunit files exist
 */
class PHPUnit extends Hook\Module {
	
	const COMMAND_GIT_SHOW = 'git show';
	
	protected function up() {
		// include another library to do class checks
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
	
	
	protected function invoke($hook) {
		// first ensure that hook is valid in the sense
		// that it responds to modified_files method (
		// we're approaching this from a duck-typing perspective
		// as opposed to enforcingt type)	
		if (method_exists($hook, 'modified_files')) {
			$files = $hook->modified_files();
			
			// iterate through modified files and retrieve
			// class definitions
			foreach($files as $file) {
				
				// make sure we are looking at a php file
				if (preg_match('/\.php/i', $file)) {
					
						
					// get class definitions
					$classes = $this->classes(implode(
						"\n", $out
					));
					
					
					// iterate through class definitions and attempt to
					// find the appropriate Test class definition
					foreach ($this->classes($hook->file_contents($file)) as $name) {
						$test  = "{$name}Test";
						$found = false;
						exit('asdf');
						 	
						foreach($files as $compare_file) {
								
							// @TODO we need to match against an appropriate test
							// class in the correct location
							$compare = basename($compare_file, ".php");
							      
							if ($compare == $test) {
								$found = true;
								break;		
							}
						}
						
						if (!$found) {
							echo "Module::PHPUnit >> failed to find test class for '$name'";
						}
					}
				}
			}
			
			exit(1);
		}
		
		else {
			throw new \Exception (
				"Module phpunit failed because parameter hook does not respond to 'modified_files'"
			);
		}		
	}
	
	private function classes($content) {
		// this was culled from an online source and
		// thus may not be reliable
		
	  $classes = array();
	  $tokens = token_get_all($content);
	  $count = count($tokens);
	  for ($i = 2; $i < $count; $i++) {
	    if (   $tokens[$i - 2][0] == T_CLASS
	        && $tokens[$i - 1][0] == T_WHITESPACE
	        && $tokens[$i][0] == T_STRING) {
	
	        $class_name = $tokens[$i][1];
	        $classes[] = $class_name;
	    }
	  }
	  return $classes;
	}
}