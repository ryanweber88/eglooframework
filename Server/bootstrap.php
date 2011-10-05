<?php
/**
 * Defines bootstrap and loads into application context
 */
class Bootstrap extends \eGloo\Utilities\Bootstrap\BootstrapAbstract { 
	
	use \eGloo\System\Server\Context\ContextAccessTrait;

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
			$paths = explode(":", get_include_path());
				
			array_walk($paths, function($path) use ($file) { 
				if (file_exists("$path/$file")) { 
					require_once "$path/$file";
				}
			});
		});	

		// require bridge
		require_once 'photon.bridge.php';		
		
		// command line parameters
		$params = &$GLOBALS['params'];
		$parser = \photon\getParser();
		$result = $parser->parse();
		$params = array('cwd' => __DIR__);
		$params = $params + $result->options;
		$params += @$result->command->command->options;
		$params['argv'] = $GLOBALS['argv'];
		$params['task'] = @$result->command->args['task'];
		
		
	}
	
	protected function _initPear() {
		//initialize pear resources - this will be eventually removed
		
		//spl_autoload_register(function($className) { 
			//@include_once str_ireplace('_', '/', $className) . '.php';
		//});
		
		//$GLOBALS['log'] = \Log::factory('file', DIR . '', 'test');
		
		//var_export($GLOBALS['log']); exit;
		
	}
	
	protected function _initEgloo() { 
		// initialize eGloo resources 
		$application = &\eGloo\System\Server\Application::instance();
		$eglooApplicationPath = $application->target();
		
		// change to application directory
		// @todo I don't like having to change directories to allow for context; 
		// this should be removed entirely
		chdir($eglooApplicationPath);
		
		
		// read htaccess into $_SERVER
		// @TODO this will eventually be replaced and put into configuration
		\eGloo\System\Server\Bridge::htaccess("$eglooApplicationPath/.htaccess");
						
		// require eGloo autoloader
		require_once 'PHP/Includes/eGlooAutoload.php';
		
		if (!extension_loaded('memcache') && !extension_loaded('memcached')) {
			echo 'Memcache support not detected.  Please install Memcache or Memcached for PHP.';
			exit;
		}
		
		// below is for testing purposes only; flag monrel in global scope to denote context 
		// and place requestInfoBean into global context, as it doesn't need to be
		// reinstantiated each time
		$GLOBALS['mongrel'] = true;
		$GLOBALS['payload'] = file_get_contents('/tmp/static');
		
		// change back to server directory
		chdir(__DIR__);
	}
	
	protected function _initComponents() { 
		// bind necessary components (objects) to application context - these are required on
		// every dispatch cycle, and we save on resources moving them to bootstrap
		// TODO more elegant solution (some type of component architecture)
		$context = static::contextApplication();
		
		// Build a request info bean
		//static::contextApplication()->bind('requestInfoBean', \RequestInfoBean::getInstance());
		
		// Get a request validator based on the current application and UI bundle
		static::contextApplication()->bind(
			'requestValidator', \RequestValidator::getInstance( \eGlooConfiguration::getApplicationPath(), \eGlooConfiguration::getUIBundleName() )
		);			
		
		// bind smarty logger 
		// TODO remove once templates are refactored/corrected (purging 
		// object instances from templates)
		// TODO centralize logging and remove
		static::contextApplication()->bind('logger.smarty.object', \Log::factory(
			'file', '/home/petflowdeveloper/Develop/eglooframework/Compiled/SmartyStandAloneComplex/log/object', 'logger.smarty'
		));

		static::contextApplication()->bind('logger.smarty.template', \Log::factory(
			'file', '/home/petflowdeveloper/Develop/eglooframework/Compiled/SmartyStandAloneComplex/log/object', 'logger.smarty.template'
		));		
	}
	
	

	
	protected function _initSymphony() { 
		// add symphony dependency injection compontents and autoloader
		// TODO currently testing - add to valid path
		set_include_path(
			get_include_path() . ':/home/petflowdeveloper/Vendor'
		);
		
		// include autoloader
		require_once 'Symfony/Component/ClassLoader/UniversalClassLoader.php';
		
	}
	
	

}
