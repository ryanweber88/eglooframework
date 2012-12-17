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

	protected $routes = [
		'index' => [
			'methods' => ['GET'],
			'matches' => [
				'@controller/?',
				'@controller/index'
			],
		],
		'new' => [
			'methods' => ['GET'],
		],
		'create' => [
			'methods' => ['POST'],
		],
		'edit' => [
			'methods' => ['GET'],
			'matches' => [
				'@controller/:id/edit',
				'@controller/edit/:id',
				// ['@controller/edit/:id' => '@controller#index'], example reroute
			],
		],
		'update' => [
			'methods' => ['POST'],
			'matches' => ['@controller/:id'],
		],
		'show' => [
			'methods' => ['GET'],
			'matches' => ['@controller/:id'],
		],
		'destroy' => [
			'methods' => ['DELETE'],
			'matches' => ['@controller/:id'],
		],
	];

	// new /controller/new action GET
	protected function _new( $validation_result = null )  {}

	// create /controller/ action POST
	protected function create( $validation_result = null )  { }

	// edit /controller/edit/:id action GET
	protected function edit( $validation_result = null )    { }

	// update /controller/:id action PUT
	protected function update( $validation_result = null )    { }

	// show /controller/:id action GET
	protected function show( $validation_result = null )    { }

	// destroy /controller/:id action DELETE
	protected function destroy( $validation_result = null ) { }

	protected function limitTo( $routes_allowed ) {
		// TODO
	}

}
