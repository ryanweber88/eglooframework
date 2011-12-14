<?php
namespace eGloo\System\Server\Action\Middleware;

use \eGloo\System\Server;
use \eGloo\System\Server\Action\HTTP\Request;
use \eGloo\System\Server\Action\HTTP\Response;

/**
 * 
 * One of the issues of a stateful environment, is that static class properties
 * are essentially rendered as infinite within the context of running application,
 * when expected behavior is that static property will be reset after request
 * @author Christian Calloway
 *
 */
class ClassVariable extends Middleware {
	
	/**
	 * 
	 * @see eGloo\System\Server\Action\Middleware.Middleware::processResponse()
	 * @todo Does this belong in the middleware aspect, as it's not directly
	 * responsible for acting on the response 
	 * This could even be piped into a background response
	 * 
	 */
	public function &processResponse(Request $request, Response &$response) { 

		Server\Application::instance()->context()->retrieve('logger.test')->log(
			print_r(get_declared_classes(), true)
		);
		
		exit;
		
		return $response;
	}		
}