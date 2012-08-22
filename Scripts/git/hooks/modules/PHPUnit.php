<?php
/**
 * Contains module_phpunit function definition
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
 namespace eGloo\Script\Git\Hook\Module;
 use       \eGloo\Script\Git\Hook;
 use       \eGloo\Script\Git\Git;


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
		
		$succeed = false;
		
		// get list of modified files between last commit and 
		// current
		$files = Git::modified_files(
			$hook->revision_old, $hook->revision_new
		);
		
		
		// iterate through modified files and retrieve
		// class definitions
		foreach($files as $file) {
							
			
			// make sure we are looking at a php file
			if (preg_match('/\.php/i', $file) && 
			    static::in_domain($file)) {
				
				$file_content = Git::content(
					$file, $hook->revision_new
				);
				
				
				// iterate through class definitions and attempt to
				// find the appropriate Test class definition
				foreach (static::classes($file_content) as $name) {
					
					// we get the theoretical path to our test file based on
					// the filename
					$test_file = static::test_file($file);
					
					
					// check if the test file exists in the most recent revision;
					// if not, we check the repo in its entirety 
					$in_head = false;
					
					if (Git::exists($test_file, $hook->revision_new) || 
					    ($in_head = Git::exists($test_file))) {
					    
	
						// get test file content, and perform reflection checks
						// on methods and method body definitions
						$test_file_content = $in_head 
							? Git::content($test_file) 
							: Git::content($test_file, $hook->revision_new); 
									
						
						echo $test_file_content;
						exit(1);
						$test_file_methods = static::methods(
							$test_file_content, '/public/i'
						);
						
						
							
						// make sure we have AT LEAST as many test methods defined on 
						// test class as their are on class being tested (there should
						// be 1 test method per public method)
						// @TODO we should match method signatures as opposed to doiung
						// a whole count		
						if (count($test_file_methods) >= count(static::methods($file_content, '/public/i'))) {
							
						}
						
					
					// @TODO a test definition does not exist, so we make note
					// of the error	
					} else {
						$succeed = false;
						
						// log error
						// @TODO clearly we need a logging tool here
						echo "Module::PHPUnit >> Failed to find test definition for class '$name' defined in '$file'. " . 
						     "Please define test class '$test_file'\n";
								 
						echo "\n\n"; 
					}		
					 	
					
				}
								
			}
		}
		
		return $succeed;
	}
	
	

	// @NOTE most of our methods below will be refactored later

	
	private static function classes($content) {
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
	
	private static function methods($content, $__expressions = null) {
		// retrieves all method definitions within a class definition
		
		// get list of possible expressions
		$expressions = array_slice(func_get_args(), 1);
		
		// attempts to retrieve all methods
		preg_match_all(
			'/.+?function\s+?([a-zA-Z0-9]+)/i', $content, $matches
		);
		
		var_export($matches);
		exit(1);
	 
	}
	
	private static function test_file($file) {
		// Determines test base directory given pattern from
		// file name; this method assumes that file has
		// fallen within the domain of acceptable/testable
		// files
		
		// find our correct domain and then retrieve pre and
		// post strings as we are using the pattern pre + test dir + 
		// namespaced path to class
		// @TODO this may wholly change as additional testable
		// domains are added 		
		foreach(static::$domains as $domain) {
			if ( ($position = strpos($file, $domain)) !== false ) {
				$pre  = substr($file, 0, $position);


				// post is a bit more complicated, because we need to
				// add 'Test' to the end of filename
				$post = substr(
					$file, $position + strlen($domain)
				);				
				$post = dirname($post) . 
				        '/'            . 
				        basename($post, '.php') . 'Test.php';
				
				return $pre . 'Test/PHPUnit/Classes/' . $post;
			}
		}	
	}
	
	private static function in_domain($file) {
		// determines if file path is in domain of testable
		// code
		foreach(static::$domains as $domain) {
			if (strpos($file, $domain) !== false) {
				return true;
			}	
		}
		
		return false;
	}
	
	
	
	static private $domains = array(
		'PHP/Classes/'
	);
}