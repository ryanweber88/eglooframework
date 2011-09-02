<?php
namespace eGloo\System\Server\Action;

/**
 * 
 * Responsible for dispatch cycle - recieves mongrel2 request, routes to appropriate handler,
 * returns response to mongrel2
 * @author petflowdeveloper
 *
 */
class Dispatcher extends \photon\core\Dispatcher { 
	
	/**
	 * 
	 * Dispatches request to appropriate eGloo handler 
	 * @param HTTP\Request $request
	 */
	static public function dispatch($request) { 
		// Check for the minimum PHP version to run the framework

		// Check for Memcache
		if (!extension_loaded('memcache') && !extension_loaded('memcached')) {
			echo 'Memcache support not detected.  Please install Memcache or Memcached for PHP.';
			exit;
		}
		
		// Build a request info bean
		$requestInfoBean = \RequestInfoBean::getInstance();
		
		// Get a request validator based on the current application and UI bundle
		$requestValidator =
			\RequestValidator::getInstance( \eGlooConfiguration::getApplicationPath(), \eGlooConfiguration::getUIBundleName() );
		
		if ( !$requestValidator->initializeInfoBean($requestInfoBean) ) {
			\eGlooLogger::writeLog( eGlooLogger::EMERGENCY, 'Could not initialize request info bean', 'Security' );
			exit;
		}		
		
		//var_export($requestInfoBean); exit;

		ob_start();
		echo 'here';
		require_once '/var/www/admin/index.php';
		
		echo ob_get_clean();
		flush();
		
		exit;
	}
}