<?php
namespace eGloo\System\Server\Action;

/**
 * 
 * Responsible for dispatch cycle - recieves mongrel2 request, routes to appropriate handler,
 * returns response to mongrel2
 * @author petflowdeveloper
 *
 */
class Dispatcher extends \photon\core\Dispatcher { 
	
	use \eGloo\Utilities\FallbackTrait, \eGloo\System\Server\Context\ContextTrait;
	
	
	/**
	 * 
	 * Dispatches request to appropriate eGloo handler 
	 * @param HTTP\Request $request
	 * @return HTTP\Response $response
	 */
	static public function dispatch($request) { 
		// Check for the minimum PHP version to run the framework
		
		//var_export($request->GET);exit;
		
		// NOT WORKING
		//\eGloo\System\Server\Bridge::parameters($request);		
		// forcibly set request parameters for testing
		
		// TODO define preDispatch needs
		static::preDispatch();


				
		// instantiate response object to return to mongrel2
		$response = new HTTP\Response();
		//return $response;
		
		//var_export($request); exit;
		$application = &\eGloo\System\Server\Application::instance();
		
		// TODO remove this, as request shouldn't be part of application context
		$application->context()->bind('request', $request);
		
		// TODO determine another (more fluid) method to access session
		//$session = new Middleware\Session(new Middleware\Session\Cookie());
		//$session->init('key', $request);		
		//$application->context()->bind(
		//	'session', $session
		//);		
		
		// capture output of proxied dispatch and
		ob_start();
		static::adapter($request);
		$response->content = ob_get_clean(); // gzencode(ob_get_clean());
		//$response->content = var_export($request->GET,true) . $response->content;
		//$response->content = var_export($request, true);
		
		// TODO cleanup in post dispatch
		// static::postDispatch();
		unset($request);
		
		// apply middleware to response - later
		// TODO remove session from directly commiting to response
		//$session->commit($response);
		
		return $response;
	}
	
	static protected function preDispatch() { 
		// perform pre-dispatch build-up
		//pass 
	}
	
	static protected function postDispatch() {
		// perform post-dispatch clean-up
		// pass
	}
	
	
	final static private function adapter($request) { 
		
		// get reference to application context
		$application = &\eGloo\System\Server\Application::instance();
		
		// bridge request variables, since superglobals are not
		// accessible in cli runtime
		// TODO setting navigation, or "front controller" parameters should be 
		// abstracted as much as possible		
		$superGlobalName  = "_{$request->method}";
		$GLOBALS[$superGlobalName] = &$request->{$request->method};
		$_REQUEST  = &$GLOBALS[$superGlobalName];
								
		// set defaults for requestClass and requestID should
		// they not exist
		if (empty($_REQUEST['eg_requestClass'])) { 
			$_GET['eg_requestClass'] = 'oops';
		}
		
		if (empty($_REQUEST['eg_requestID'])) { 
			$_GET['eg_requestID'] = 'index';
		}			
		
		//$_GET['eg_requestClass'] = 'xcss';
		//$_GET['eg_requestID'] = 'rawfile';
		//$_GET['css_name'] = 'page:contact/styles';
		//var_export($_GET); return;
									
		//$requestInfoBean  = $application->context()->retrieve('requestInfoBean');
		
		$requestInfoBean =  $request->context()->retrieve('requestInfoBean');
		$requestValidator = $application->context()->retrieve('requestValidator');
		
		//echo get_class($requestInfoBean); exit;
		
		//$requestInfoBean = RequestInfoBean::getInstance();
		
		// Get a request validator based on the current application and UI bundle
		//$requestValidator =
			//RequestValidator::getInstance( eGlooConfiguration::getApplicationPath(), eGlooConfiguration::getUIBundleName() );
		
		if ( !$requestValidator->initializeInfoBean($requestInfoBean) ) {
			eGlooLogger::writeLog( eGlooLogger::EMERGENCY, 'Could not initialize request info bean', 'Security' );
			exit;
		}
		
				
		
		// Validate this request and update the info bean accordingly
		// TODO From a programmatic standpoint, it isn't clear that this method
		// changes requestInfoBean properties - and if it does, it shouldn't
		// return a method 
		$isValidRequest = $requestValidator->validateAndProcess( $requestInfoBean );
		
		//var_export ($requestInfoBean); return;
		
		
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
		
		//echo $requestInfoBean->signature() . "\n";
		//var_export($requestInfoBean); return;
		
		//return '';
		//echo var_export($requestInfoBean, true); return;
		//echo "request = " . print_r($_REQUEST, true); return;
		
		// If the request is valid, process it.  Otherwise, log it and die
		if ( $isValidRequest ) {
			$requestProcessor = \RequestProcessorFactory::getRequestProcessor( $requestInfoBean );
			//echo var_export($requestProcessor, true);return;
			$requestProcessor->processRequest();
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