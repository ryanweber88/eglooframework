<?php
/**
 * eGloo Framework Dispatch file
 *
 * Responsible for routing request to appropriate handler; environment must
 * be loaded prior to running dispatch and request is made from application
 * server.
 *
 * Copyright 2011 eGloo, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @author George Cooper
 * @author Christian Calloway
 * @copyright 2011 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @package Bootstrap
 * @version 1.0
 */


$requestInfoBean  = $application->context()->retrieve('requestInfoBean');
$requestValidator = $application->context()->retrieve('requestValidator');

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
// $isValidRequest = $requestValidator->validateAndProcess( $requestInfoBean );





// TODO cache this based upon request passed, and if lambda return is boolean true, plus request
// itself taken into account; caching at the moment to determine performance gain
// TODO I hate having to pass the signature - I'd like to find a way to understand request context and
// only pass lambda; right now this can't be done as request signature will obviously change
// based upon request


$isValidRequest = $application->context()->retrieve($requestInfoBean->signature(), function(&$context, $key) use ($requestValidator, &$requestInfoBean) { 	
	//echo 'run/lambda';
	
	// perform work on requestInfoBean (expensive process)
	$isValidRequest = $requestValidator->validateAndProcess( $requestInfoBean );
	
	// bind value to $key (which is based on hash of request signature)
	// and and expire value in 60
	$context
		->bind($key, $isValidRequest)
		->expire($key, 60);
		
});



$GLOBALS['payload'] = true;
if (!isset($GLOBALS['payload'])) {
	$GLOBALS['payload'] = file_get_contents(
		'/tmp/static'
	);
}

echo "request = " . print_r($_REQUEST, true); return;

// If the request is valid, process it.  Otherwise, log it and die
if ( $isValidRequest ) {
	$requestProcessor = RequestProcessorFactory::getRequestProcessor( $requestInfoBean );
	//echo var_export($requestProcessor, true);return;
	$requestProcessor->processRequest();
} else {
	$errorRequestProcessor = RequestProcessorFactory::getErrorRequestProcessor( $requestInfoBean );
	
	if ($errorRequestProcessor) {
		$errorRequestProcessor->processErrorRequest();
	} else {
		// We probably want to do something a bit more... elegant here.  Eventually
		eGlooLogger::writeLog( eGlooLogger::DEBUG, 'INVALID request!', 'RequestValidation', 'Security' );
	}
}