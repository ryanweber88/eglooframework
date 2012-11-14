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
 use \eGloo\Utilities;
 use \eGloo\HTTP\Response;

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
		
		eGloo\log(
			"Entered processRequest() on $method Request"
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
				eGloo\log("Invoking #index");
				$this->index();	

			}
			
			else {							
				eGloo\log("Invoking #show");
				$this->show();			
			}
			
			
		} 
		
		// a post request will invoke create
		else if ($this->bean->request_is_post()) {
			eGloo\log("Invoking #create");
			$this->create();
		}
		
		// a put request will invoke edit
		else if ($this->bean->request_is_put()) {
			eGloo\log("Invoking #edit");
			$this->edit();			
		}
		
		// a delete request will invoke destroy
		else if ($this->bean->request_is_delete()) {
			eGloo\log("Invoking #destroy");
			$this->destroy();
		}

		
		eGloo\log(
			"Exiting processRequest() on $method Request"
		);
	}

	protected function isCollectionRoute() {
		// determines if requested resource/uri is for a
		// collection	
					 
		// @wtfphp empty(variable_is_0) === true
		return isset($this->bean['ids'])  ||
		       (!isset($this->bean['id']) || 
		       	!is_numeric($this->bean['id']));
				
	}
	
	protected function index()   { }
	protected function create()  { }
	protected function edit()    { }
	protected function destroy() { }
	protected function show()    { }


	public function __call($name, $arguments) {

		// allow for calling error methods with response
		// codes as part of method name
		if (preg_match('/^error_([0-9]+)$/', $name, $match)) {
			// @TODO check if message has been passed?
			return $this->error($match[1], $arguments[0]);
		}

		// allow for calling respond method with response
		// type as part of method name
		// @PASS
	}
	
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
		header(
			"HTTP/1.0 $code $message", true, $code
		);
		
		// generate error response body
		// @TODO decouple/encapsulate
		// @TODO create application specific error code handler
	  $this->respond(array(
	  	'codes'   => array($code),
	  	'message' => $message
	  ));
	}
	
	
	/**
	 * Responsible for determinig request type and
	 * providing a lambda to handle each type
	 */
	protected function respond($with) {
		// @TODO determine response type by looking
		// at request or pulling from default; all of
		// which needs to be handled in separate architecture
		// @TODO introspect body, the requested format
		// header and convert body
		
		if (($content = json_encode($with)) !== false) {
			// @TODO decouple response content type
			header('Content-Type:application/json');
			
			// return json encoded data to stdout
			echo $content;
		
		} else {
			$this->error_500(
				'Failed to convert argument $with to JSON'
			);
		}
	}
	
}