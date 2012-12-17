<?php
/**
 * CRUDPageRequestProcessor Class File
 *
 * Contains the class definition for the CRUDPageRequestProcessor
 *
 * Copyright 2012 eGloo, LLC
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
 * @copyright 2012 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @category $category
 * @package $package
 * @subpackage $subpackage
 * @version 1.0
 */

/**
 * CRUDPageRequestProcessor
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class CRUDPageRequestProcessor extends PageRequestProcessor {

	protected $actions = array(
		'index' => 'GET',
		'new' => 'GET',
		'create' => 'POST',
		'edit' => 'GET',
		'update' => 'PUT',
		'show' => 'GET',
		'destroy' => 'DELETE'
	);

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
		$method = strtoupper( $this->bean->requestMethod() );

		eGloo\log( "Entered processRequest() on $method Request" );

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
			} else {
				eGloo\log("Invoking #show");
				$this->show();
			}
		} else if ( $this->bean->request_is_post() ) {
			// a post request will invoke create
			eGloo\log("Invoking #create");
			$this->create();
		} else if ( $this->bean->request_is_put() ) {
			// a put request will invoke edit
			eGloo\log("Invoking #edit");
			$this->edit();
		} else if ( $this->bean->request_is_delete() ) {
			// a delete request will invoke destroy
			eGloo\log("Invoking #destroy");
			$this->destroy();
		}

		//eGlooResponse::outputXHTML( $templateVariables );
		eGloo\log( "Exiting processRequest() on $method Request" );
	}

	protected function isCollectionRoute() {
		// determines if requested resource/uri is for a
		// collection

		// @wtfphp empty(variable_is_0) === true
		return isset($this->bean['ids'])  ||
		       (!isset($this->bean['id']) ||
		       	!is_numeric($this->bean['id']));

	}

	// new /controller/new action GET
	protected function _new()  { }

	// create /controller/ action POST
	protected function create()  { }

	// edit /controller/edit/:id action GET
	protected function edit()    { }

	// update /controller/:id action PUT
	protected function update()    { }

	// show /controller/:id action GET
	protected function show()    { }

	// destroy /controller/:id action DELETE
	protected function destroy() { }

}
