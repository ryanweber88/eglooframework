<?php
namespace eGloo\System\Server\Action;

/**
 * 
 * Responsible for dispatch cycle - recieves mongrel2 request, routes to appropriate handler,
 * returns response to mongrel2
 * @author petflowdeveloper
 *
 */
use eGloo\System\Server\Action\HTTP\Response;

use eGloo\System\Server\EventMachine\Connection\HTTP;

class Dispatcher extends \photon\core\Dispatcher { 
	
	
	/**
	 * 
	 * Dispatches request to appropriate eGloo handler 
	 * @param  HTTP\Request $request
	 * @return HTTP\Response $response
	 * @throws \eGloo\Dialect\Exception 
	 */
	static public function dispatch($request) { 
		
		$response = null;
		
		
		// TODO set middleware components in configuration
		// TODO make adapter middleware component REQUIRED
		$middleware = [
			new \eGloo\System\Server\Action\Middleware\Session(), 
			new \eGloo\System\Server\Action\Middleware\Adapter()
		];
				
		
		// perform pre-processing on request
		foreach ($middleware as $component) { 
			
			// if a response is returned, then run middleware post processing
			// on response object
			if (($response = $component->processRequest($request)) instanceof \eGloo\System\Server\Action\HTTP\Response) { 

				// reverse array as middleware components should have purposeful
				// ordering
				foreach (array_reverse($middleware) as $component) { 
					$response = &$component->processResponse($request, $response);
				}				
			}
		}		
						

		if ($response instanceof \eGloo\System\Server\Action\HTTP\Response) { 
			return $response;
		}

		// throw exception if response has not been returned from middleware components
		// TODO is it the middlewares job to ensure a response is returned? Perhaps
		// adapter should be put into its own class		
		throw \eGloo\Dialect\Exception(
			'FAILED to generate proper response'
		);
					
		
	}
	

	

	
}