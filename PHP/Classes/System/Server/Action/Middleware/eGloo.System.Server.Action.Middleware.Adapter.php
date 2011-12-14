<?php
namespace eGloo\System\Server\Action\Middleware;

use eGloo\System\Server\Environment\Environment;

use \eGloo\System\Server;
use \eGloo\System\Server\Action\HTTP\Request;
use \eGloo\System\Server\Action\HTTP\Response;

/**
 * 
 * Responsible for adapting environment to egloo dispatch cycle; in-other-words,
 * the job of the adapter, is to ensure that underlying framework runs in a 
 * context that it is familiar with, and should have no concept outside of
 * that context
 * The reason adapter exists, is so that it can be subclassed or swapped to
 * fit to different underlying frameworks, or contexts
 * @author Christian Calloway
 *
 */
class Adapter extends Middleware { 
	
	function __construct(EnvironmentInterface $environment) {
		$this->environment = $environment;
	}

	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server\Action\Middleware.MiddlewareInterface::processRequest()
	 */
	public function processRequest(Request   &$request) { 
		// perform needed operation prior to
		// environment setup
		
		$this->environment->setup();
	}
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server\Action\Middleware.MiddlewareInterface::processResponse()
	 */
	public function &processResponse(Request $request, Response &$response) { 
		// load environment and return run into response
		$response->content = $this->environment->load();
		
	}	
	
	protected $environment;
}