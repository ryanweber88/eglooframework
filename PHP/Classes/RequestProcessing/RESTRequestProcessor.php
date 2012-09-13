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
 * Handles HTTP $method requests; also as a FRONT controller of sorts to 
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
			"RESTRequestProcessor ({$this->ident()}): Entered processRequest() on $method Request"
		);
		
		
		// a get request will invoke either index  or show, based upon
		// request parameters 
		if ($this->bean->request_is_get()) {
		
			// we leave determination of whether GET request is
			// for collection resource to overrideable method in
			// which we define a generic convention for determining
			// collection routes (in this case, the presence of :id
			// parameter)
			if ($this->isCollectionRoute()) {
				// determin
				$this->log("RESTRequestProcessor: Invoking {$this->ident()}#index");
				$value = $this->index();	

			}
			
			else {
								
				$this->log("RESTRequestProcessor: Invoking {$this->ident()}#show");
				$value = $this->show();			
			}
			
			
		} 
		
		// a post request will invoke create
		else if ($this->bean->request_is_post()) {
			$this->log("RESTRequestProcessor: Invoking {$this->ident()}#create");
			$value = $this->create();
		}
		
		// a put request will invoke edit
		else if ($this->bean->request_is_put()) {
			$this->log("RESTRequestProcessor: Invoking {$this->ident()}#edit");
			$value = $this->edit();			
		}
		
		// a delete request will invoke destroy
		else if ($this->bean->request_is_delete()) {
			$this->log("RESTRequestProcessor: Invoking {$this->ident()}#destroy");
			$value = $this->destroy();
		}

		// @TODO determine echo value should be inspected, etc
		echo $value;
		
		//eGlooResponse::outputXHTML( $templateVariables );
		$this->log(
			"RESTRequestProcessor ({$this->ident()}): Exiting processRequest() on $method Request"
		);
	}

	protected function isCollectionRoute() {
		// determines if requested resource/uri is for a
		// collection	
					 
		// @wtfphp empty(variable_is_0) === true
		return isset($this->bean['ids'])  ||
		       (!isset($this->bean['id']) || !is_numeric($this->bean['id']));
				
	}
	
	protected function index()   { }
	protected function create()  { }
	protected function edit()    { }
	protected function destroy() { }
	protected function show()    { }
	
	/**
	 * Attached error response code and message to response header
	 * @TODO place is RequestProcessor
	 */
	protected function error($code, $message) {
		// @TODO generate response header with error code and
		// response message
		// @TODO this is new to 5.4; it may be better to be backword
		// compatible at the framework
		http_response_code($code);
		
		// generate error response body
		// @TODO decouple/encapsulate
		// @TODO create application specific error code handler
		echo json_encode([
			'message' => $message
		]);
	}
	
	/**
	 * Attach response type and body to response
	 * @TODO place in RequestProcessor
	 */
	protected function render($type, $body) {
		// @TODO attach response directly to rack object
		echo $body;
	}
	
	/**
	 * Responsible for determinig request type and
	 * providing a lambda to handle each type
	 */
	protected function respond(callable $lambda) {
		// @TODO determine response type by looking
		// at request or pulling from default; all of
		// which needs to be handled in separate architecture
		$format = 'json';
		
		// @TODO 
		$this->render($type, $lambda($type));
		
		function($format) {
			$format.
		}
	}

}