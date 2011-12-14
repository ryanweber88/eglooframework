<?php
namespace eGloo\System\Server\Action\Middleware;

use \eGloo\System\Server\Action\HTTP\Request;
use \eGloo\System\Server\Action\HTTP\Response;

/**
 * 
 * Provides needed methods/hooks into dispatch cycle 
 * @author Christian Calloway
 *
 */
interface MiddlewareInterface { 
	
	/**
	 * 
	 * Provides hook to process request object
	 * @param \eGloo\System\Server\Action\HTTP\Request $request
	 * @return mixed
	 */
	public function processRequest(Request &$request);
	
	/** 
	 * 
	 * Provides hook to process response object
	 * @param \eGloo\System\Server\Action\HTTP\Request $request
	 */
	public function &processResponse(Request $request, Response &$response);
	
}