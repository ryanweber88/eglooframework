<?php
/**
 * Defines bootstrap and loads into application context
 */
class Bootstrap extends \eGloo\Utilities\Bootstrap\BootstrapAbstract { 

	protected function _initPhoton() { 
		// init photon resources	
		
		// photon global namespace
		$GLOBALS['photon'] = array(
			'params'
		);
		
		// define autoloader
		spl_autoload_register(function($className) { 
				
		    $parts = array_filter(explode('\\', $className));
		    if (1 < count($parts)) {
		        // We have a namespace.
		        $class_name = array_pop($parts);
		        $file = implode(DIRECTORY_SEPARATOR, $parts) . '.php';
		    } else {
		        $file = str_replace('_', DIRECTORY_SEPARATOR, $className) . '.php';
		    }
		    // As we load only once to have everything is the process, the
		    // require_once instead of require penalty is low. But the
		    // require_once will prevent double loading a file and will result
		    // in non confusing error messages.
		    // printf("Class: %s, file: %s\n", $class, $file);    
		    @include_once $file;
		});	

		// require bridge
		require_once 'photon.bridge.php';		
		
		// command line parameters
		$params = &$GLOBALS['params'];
		$parser = \photon\getParser();
		$result = $parser->parse();
		$params = array('cwd' => getcwd());
		$params = $params + $result->options;
		$params += $result->command->command->options;
		$params['argv'] = $argv; 
		$params['task'] = @$result->command->args['task'];
		
	}
	
	protected function _initEgloo() { 
		// initialize eGloo resources
		
		// define autoloader for eGloo class library
		// TODO : Remove and place into centralized 
		spl_autoload_register(function($className) { 
			
			// assume classes are namespaced and remove top level domain "eGloo"
			// as its a synonym for /root/PHP/Classes/
			//echo "class = $className\n";
			$parts = array_slice(
				explode ('\\', $className), 1
			);
			
			$path  = implode(
				DIRECTORY_SEPARATOR, array_slice($parts, 0, count($parts) - 1)
			);
		
			$file = implode('.', $parts) . '.php';
			
			
			// load file into currently running context 	
			if (!(@include_once "$path/eGloo.$file")) { 
				
				// log className which could not be loaded
			} 
			
		});		
	}
}