<?php
namespace eGloo\System\Server\Action\Middleware;

use \eGloo\System\Server\Action\HTTP\Request;
use \eGloo\System\Server\Action\HTTP\Response;

/**
 * 
 * Provides stub methods for middleware classes that implement (by inheritance)
 * the middleware interface
 * @author Christian Calloway
 *
 */
abstract class Middleware extends \eGloo\Dialect\Object implements MiddlewareInterface { 

	/**
	 * 
	 * Provides hook to process request object
	 * @param \eGloo\System\Server\Action\HTTP\Request $request
	 */
	public function processRequest(Request &$request) { }
	
	/** 
	 * 
	 * Provides hook to process response object
	 * @param \eGloo\System\Server\Action\HTTP\Request $request
	 */
	public function &processResponse(Request $request, Response &$response) {
		return $response;
	}
}