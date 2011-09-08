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


$requestInfoBean = &$GLOBALS['requestInfoBean'];
$requestValidator = &$GLOBALS['requestValidator'];	


if ( !$requestValidator->initializeInfoBean($requestInfoBean) ) {
	eGlooLogger::writeLog( eGlooLogger::EMERGENCY, 'Could not initialize request info bean', 'Security' );
	exit;
}


// Validate this request and update the info bean accordingly
$isValidRequest = $requestValidator->validateAndProcess( $requestInfoBean );

if (!isset($GLOBALS['static_content'])) {
	echo 'here'; 
	$GLOBALS['static_content'] = file_get_contents(
		'/tmp/static'
	);
}

echo $GLOBALS['static_content'];

/*

// If the request is valid, process it.  Otherwise, log it and die
if ( $isValidRequest ) {
	$requestProcessor = RequestProcessorFactory::getRequestProcessor( $requestInfoBean );
	//var_export($requestProcessor); exit;
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
*/