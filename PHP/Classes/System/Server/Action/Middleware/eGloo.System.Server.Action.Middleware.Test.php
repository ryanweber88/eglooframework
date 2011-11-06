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

		$start = time();
		$counter = 0;
		$logger  = Server\Application::instance()->context()->retrieve('logger.test');
		
		$user = \eGloo\DataProcessing\DDL\Entity\Test\User::find(12427);
		echo $user->name . "\n";
		echo $user->Product[0]->title . "\n";
		
		echo "\ntime elapsed : " . (time() - $start) . "\n";
		
		$logger->log(ob_get_clean());
		
		//exit ('Middleware\\Test::processRequest');
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