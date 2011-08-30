<?php
/**
 * Defines bootstrap and loads into application context
 */
class Bootstrap extends \eGloo\Utilities\Bootstrap\BootstrapAbstract { 

	protected function _initPhoton() { 
		// init photon resources
		
		// require bridge
		require_once 'photon.bridge.php';
		
		
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
	}
	
	protected function _initEgloo() { 
		
	}
}