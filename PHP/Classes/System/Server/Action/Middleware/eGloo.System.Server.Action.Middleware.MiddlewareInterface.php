<?php
namespace eGloo\System\Server\Action\Middleware;

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
	 */
	public function processRequest(\eGloo\System\Server\Action\HTTP\Request   &$request);
	
	/** 
	 * 
	 * Provides hook to process response object
	 * @param \eGloo\System\Server\Action\HTTP\Request $request
	 */
	public function &processResponse(\eGloo\System\Server\Action\HTTP\Request $request, \eGloo\System\Server\Action\HTTP\Response &$response);
	
}