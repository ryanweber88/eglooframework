<?php
namespace eGloo\System\Server\Action\Middleware;

use \eGloo\System\Server;
use \eGloo\System\Server\Action\HTTP\Request;
use \eGloo\System\Server\Action\HTTP\Response;

/**
 * 
 * Acts a test bed for injecting new functionality into underlying framework
 * @author Christian Calloway
 *
 */
class Test extends Middleware { 

	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server\Action\Middleware.MiddlewareInterface::processRequest()
	 */
	public function processRequest(Request &$request) { 
		
		$product = \eGloo\DataProcessing\DDL\Entity\Test\Product::find(10);
		echo $product; exit('here');
		
		// return empty response, which will be basis for post processing
		// of middleware components will begin
		return new Response();
	}
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server\Action\Middleware.MiddlewareInterface::processResponse()
	 */
	public function &processResponse(Request $request, Response &$response) { 

		
		
		return $response;
	}	
}