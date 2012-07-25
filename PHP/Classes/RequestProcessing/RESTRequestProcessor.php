<?php
/**
 * RESTRequestProcessor Class File
 *
 * Contains the class definition for the RESTRequestProcessor, a
 * subclass of the RequestProcessor abstract class.
 * 
 * Copyright 2011 eGloo, LLC
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *		  http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *	
 * @author Christian Calloway christian@petflow.com callowaylc@gmail.com
 * @copyright 2011 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @package RequestProcessing
 * @version 1.0
 */

/**
 * 
 * Handles HTTP $method requests
 * e.g. www.egloo.com).
 * 
 * @package RequestProcessing
 * @subpackage RequestProcessors
 */
class RESTRequestProcessor extends RequestProcessor {

	/**
	 * Concrete implementation of the abstract RequestProcessor method
	 * processRequest().
	 * 
	 * This methods responsibility is to determine HTTP method type
	 * and call appropriate method
	 * 
	 * @access public
	 */
	public function processRequest() {
		eGlooLogger::writeLog( eGlooLogger::DEBUG, "RESTRequestProcessor: Entered processRequest()" );

		
		//eGlooResponse::outputXHTML( $templateVariables );
		eGlooLogger::writeLog( eGlooLogger::DEBUG, "RESTRequestProcessor: Exiting processRequest()" );
	}
	
	protected function index()   { }
	protected function create()  { }
	protected function edit()    { }
	protected function destroy() { }
	protected function show()    { }

}