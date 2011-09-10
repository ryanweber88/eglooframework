<?php
namespace eGloo\System\Server\Action;

/**
 * 
 * Responsible for dispatch cycle - recieves mongrel2 request, routes to appropriate handler,
 * returns response to mongrel2
 * @author petflowdeveloper
 *
 */
use eGloo\System\Server\Action\Middleware\Session;

class Dispatcher extends \photon\core\Dispatcher { 
	
	/**
	 * 
	 * Dispatches request to appropriate eGloo handler 
	 * @param HTTP\Request $request
	 * @return HTTP\Response $response
	 */
	static public function dispatch($request) { 
		// Check for the minimum PHP version to run the framework
		
		// falsify (motherfucker) request parameters for testing purposes
		$_REQUEST['eg_requestClass'] = 'externalMainPage';
		$_REQUEST['eg_requestID'] = 'extMainViewBase';
		$_GET = &$_REQUEST;
		
		// instantiate response object to return to mongrel2
		$response = new HTTP\Response();
		//return $response;
		
		//var_export($request); exit;
		$application = &\eGloo\System\Server\Application::instance();
		
		// TODO remove this, as request shouldn't be part of application context
		$application->context()->bind('request', $request);
		
		// TODO determine another (more fluid) method to access session
		//$session = new Middleware\Session(new Middleware\Session\Cookie());
		//$session->init('key', $request);		
		//$application->context()->bind(
		//	'session', $session
		//);		
		
		// capture output of proxied dispatch and
		ob_start();
		require '/var/www/client/dispatch.php';
		$response->content = ob_get_clean(); // gzencode(ob_get_clean());
		//$response->content = var_export($request, true);
		
		
		// apply middleware to response - later
		// TODO remove session from directly commiting to response
		//$session->commit($response);
		
		return $response;
	}
}