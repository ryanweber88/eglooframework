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
	
			// iterate through modified files and retrieve
			// class definitions
			foreach($hook->modified_files() as $file) {
				
				$hook->show_file('test.7');
				
				// we need to issue git command to actually 
				// get our file in question
				exec("git show {$assoc['blob']}", $out);
				echo $assoc['blob'] . "\n";
				var_export($out);
				$classes = $this->classes(implode(
					"\n", $out
				));
				
				//var_export($classes); 
				
				foreach ($classes as $name) {
				//	echo "$name\n";
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