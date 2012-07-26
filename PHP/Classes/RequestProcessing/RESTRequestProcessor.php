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
		// determine http method, request parameters, and call appropriate method
		$method = strtoupper($this->bean->requestMethod());
		
		$this->log(
			"RESTRequestProcessor: Entered processRequest() on $method Request"
		);
		
		
		// a get request will invoke either index  or show, based upon
		// request parameters 
		if ($this->bean->request_is_get()) {
		
			// @TODO determine differentiation between index/show method
			if (isset($this->bean['id'])) {
				
			}
			
			else {
				// determin
				$this->log("RESTRequestProcessor: Invoking {$this->ident()}#index");
				$this->index();				
			}
			
			
		} 
		
		// a post request will invoke create
		else if ($this->bean->request_is_post()) {
			$this->log("RESTRequestProcessor: Invoking {$this->ident()}#create");
			$this->create();
		}
		
		// a put request will invoke edit
		else if ($this->bean->request_is_put()) {
			$this->log("RESTRequestProcessor: Invoking {$this->ident()}#edit");
			$this->edit();			
		}
		
		// a delete request will invoke destroy
		else if ($this->bean->request_is_delete()) {
			$this->log("RESTRequestProcessor: Invoking {$this->ident()}#destroy");
			$this->destroy();
		}

		
		//eGlooResponse::outputXHTML( $templateVariables );
		$this->log(
			"RESTRequestProcessor: Exiting processRequest() on $method Request"
		);
	}
	
	protected function index()   { }
	protected function create()  { }
	protected function edit()    { }
	protected function destroy() { }
	protected function show()    { }

}