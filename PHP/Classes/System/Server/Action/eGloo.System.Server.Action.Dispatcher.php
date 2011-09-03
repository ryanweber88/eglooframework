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
		
		// capture output of proxied dispatch and
		ob_start();
		require '/var/www/admin/index.php';
		$response->content = ob_get_clean() ;
		
		return $response;
	}
}