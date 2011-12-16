<?php
namespace eGloo\System\Server\Action\Middleware;

use \eGloo\System\Server\Action\HTTP\Request;
use \eGloo\System\Server\Action\HTTP\Response;

/**
 * 
 * Responsible for setting PHP superglobal request variables from request object
 * @author Christian Calloway
 *
 */
class RequestParameters extends Middleware { 
	
	
		
	public function processRequest(Request &$request) { 

		// point superglobals (which do not exist in cli environment) to $request object's
		// parsed (from mongrel) values
		$GLOBALS['_GET']     = $request->GET;
		$GLOBALS['_POST']    = $request->POST;
		$GLOBALS['_REQUEST'] = $request->GET;
		$GLOBALS['_COOKIE']  = $request->COOKIE; 
	}
	
}