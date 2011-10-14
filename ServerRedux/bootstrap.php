<?php
/**
 * Defines bootstrap and loads into application context
 */
class Bootstrap extends \eGloo\Utilities\Bootstrap\BootstrapAbstract { 

	
	protected function _initEgloo() { 
		// initialize eGloo resources 
		$application = & \eGloo\System\Server\Application::instance();
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
		
		// Build a request info bean
		$application->context()->bind('requestInfoBean', \RequestInfoBean::getInstance());
		
		// Get a request validator based on the current application and UI bundle
		$application->context()->bind(
			'requestValidator', \RequestValidator::getInstance( \eGlooConfiguration::getApplicationPath(), \eGlooConfiguration::getUIBundleName() )
		);			
		
		// change back to server directory
		chdir(__DIR__);
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
	
	protected function _initComponents() { 
		// class and system instances defined at application load time
	
		$container = Symfony\Component\DependencyInjection\ContainerBuilder;
		$definition = Symfony\Component\DependencyInjection\Definition;		
		
	}	
	

}