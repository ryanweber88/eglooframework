<?php

/**
 * 
 * Enter description here ...
 * @author Christian Calloway
 *
 */
class Environment extends \eGloo\System\Server\Environment\Environment {
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server\Environment.Environment::setup()
	 */
	public function setup() {
		// provide needed initialization for runtime
		if (empty($_REQUEST['eg_requestClass'])) { 
			$_GET['eg_requestClass'] = 'oops';
		}
		
		if (empty($_REQUEST['eg_requestID'])) { 
			$_GET['eg_requestID'] = 'index';
		}
	}
	
	public function teardown() {
		unset($_GET['eg_requestID']);
		unset($_GET['eg_requestClass']);
	}
	
	public function load() {
			
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
		
		

		// If the request is valid, process it.  Otherwise, log it and die
		if ( $isValidRequest ) {
			$requestProcessor = \RequestProcessorFactory::getRequestProcessor( $requestInfoBean );
			
			
			return \eGloo\IO\IO::buffer(function() use ($requestProcessor) { 
				$requestProcessor->processRequest();
			});
						
			
						
		} else {
			$errorRequestProcessor = \RequestProcessorFactory::getErrorRequestProcessor( $requestInfoBean );
			
			if ($errorRequestProcessor) {
				$errorRequestProcessor->processErrorRequest();
			} else {
				// We probably want to do something a bit more... elegant here.  Eventually
				\eGlooLogger::writeLog( \eGlooLogger::DEBUG, 'INVALID request!', 'RequestValidation', 'Security' );
			}
		}
				
	}
}