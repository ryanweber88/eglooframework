<?php
namespace eGloo\System\Server\Action\Middleware;

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

	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server\Action\Middleware.MiddlewareInterface::processRequest()
	 */
	public function processRequest(Request   &$request) { 

		Server\Application::instance()->context()->retrieve('logger.test')->log(
			'Adapter::processRequest'
		);
						
		// set defaults for requestClass and requestID should
		// they not exist
		if (empty($_REQUEST['eg_requestClass'])) { 
			$_GET['eg_requestClass'] = 'oops';
		}
		
		if (empty($_REQUEST['eg_requestID'])) { 
			$_GET['eg_requestID'] = 'index';
		}

		// TODO place bootstrap of egloo environment here?

	
		
		
		
		// return empty response, which will be basis for post processing
		// of middleware components will begin
		return new Response();
	}
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server\Action\Middleware.MiddlewareInterface::processResponse()
	 */
	public function &processResponse(Request $request, Response &$response) { 

		Server\Application::instance()->context()->retrieve('logger.test')->log(
			'Adapter::processResponse'
		);
		
		// get reference to application instance
		$application = &\eGloo\System\Server\Application::instance();
				
		$requestInfoBean =  $request->context()->retrieve('requestInfoBean');
		$requestValidator = $application->context()->retrieve('requestValidator');
		
		
		if ( !$requestValidator->initializeInfoBean($requestInfoBean) ) {
			eGlooLogger::writeLog( eGlooLogger::EMERGENCY, 'Could not initialize request info bean', 'Security' );
			exit;
		}
		
		
		
		// prepare requestInfoBean for egloo dispatch
		// Validate this request and update the info bean accordingly
		// TODO From a programmatic standpoint, it isn't clear that this method
		// changes requestInfoBean properties - and if it does, it shouldn't
		// return a method 
		$isValidRequest = $requestValidator->validateAndProcess( $requestInfoBean );
		
		//$product = new \eGloo\DP\Product;
		//exit('test');
						
		// TODO cache this based upon request passed, and if lambda return is boolean true, plus request
		// itself taken into account; caching at the moment to determine performance gain
		// TODO I hate having to pass the signature - I'd like to find a way to understand request context and
		// only pass lambda; right now this can't be done as request signature will obviously change
		// based upon request
		
		// TODO this doesn't work at all - the request signature is formalized by validateAndProcess, which
		// is the process we are trying to cache. A signature needs to be placed into the request class
		// itself
		
		/*
		$results = $application->context()->retrieve($requestInfoBean->signature(), function(&$context, $key) use ($requestValidator, &$requestInfoBean) { 	
			echo 'run/lambda with signature ' . $requestInfoBean->signature();
			
			// perform work on requestInfoBean (expensive process)
			$isValidRequest = $requestValidator->validateAndProcess( $requestInfoBean );
			
			// bind value to $key (which is based on hash of request signature)
			// and and expire value in 60
			$context
				->bind($key, ['is_valid_request' => $isValidRequest, 'request_info_bean' => $requestInfoBean])
				->expire($key, 60);
				
		});
		
		$isValidRequest =  $validated['is_valid_request'];
		$requestInfoBean = &$validated['request_info_bean'];
		*/			

		// If the request is valid, process it.  Otherwise, log it and die
		if ( $isValidRequest ) {
			$requestProcessor = \RequestProcessorFactory::getRequestProcessor( $requestInfoBean );
			//echo var_export($requestProcessor, true);return;
			
			ob_start();
			$requestProcessor->processRequest();			
			$response->content = ob_get_clean();
			
			$_SESSION['testmyshit'] = 'fuckyourmom';
						
		} else {
			$errorRequestProcessor = \RequestProcessorFactory::getErrorRequestProcessor( $requestInfoBean );
			
			if ($errorRequestProcessor) {
				$errorRequestProcessor->processErrorRequest();
			} else {
				// We probably want to do something a bit more... elegant here.  Eventually
				\eGlooLogger::writeLog( \eGlooLogger::DEBUG, 'INVALID request!', 'RequestValidation', 'Security' );
			}
		}
		
		
		
		
		return $response;
	}	
}