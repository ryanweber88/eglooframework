<?php
namespace eGloo\System\Server\Action\Middleware;

use \eGloo\System\Server\Action\HTTP\Request;
use \eGloo\System\Server\Action\HTTP\Response;

/**
 * 
 * Header middleware is responsible for bridging headers set at
 * framework level, and placing them into response object, which 
 * acts as vessel or transference or adaptation of header data back
 * to mongrel web server; requires xdebug extension to be installed
 * in order to retrieve any headers set via header()
 * @author Christian Calloway
 *
 */
class Header extends Middleware { 
	
	/**
	 * Adds request headers to $_SERVER global variable
	 * @see eGloo\System\Server\Action\Middleware.Middleware::processRequest()
	 */
	public function processRequest(Request  &$request) { 
		// check if superglobal $_SERVER has not been set, or is not an array
		// in which case instantiate
		if (!isset($GLOBALS['_SERVER']) || !is_array($GLOBALS['_SERVER'])) { 
			$GLOBALS['_SERVER'] = [ ];
		}
		
		// now add values from request headers to server super global
		foreach($request->headers as $key => $value) { 
			$GLOBALS['_SERVER'][$key] = $value;
		}
	}
	
	/**
	 * 
	 * Passes headers set in underlying framework to response object
	 * @param \eGloo\System\Server\Action\HTTP\Request  $request
	 * @param \eGloo\System\Server\Action\HTTP\Response $response
	 * @return unknown_type $response
	 */
	public function &processResponse(Request $request, Response &$response) {

		// ensure the xdebug extension is loaded
		if (extension_loaded('xdebug')) { 
			foreach(xdebug_get_headers() as $delimited) { 
				list($header, $value) = explode (':', $delimited);
				$response->headers[trim($header)] = trim($value);
			}
			
			return $response;
		}
		
		throw new \eGloo\Dialect\Exception(
			'XDEBUG extension must be installed'
		);
	}
	
}