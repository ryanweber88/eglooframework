<?php
namespace eGloo\RequestProcessing;

/**
 * eGloo\RequestProcessing\EncryptedRequestClass Class File
 *
 * Contains the class definition for the eGloo\RequestProcessing\EncryptedRequestClass
 * 
 * Copyright 2012 eGloo LLC
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
 * @copyright 2012 eGloo LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @category $category
 * @package $package
 * @subpackage $subpackage
 * @version 1.0
 */

/**
 * eGloo\RequestProcessing\EncryptedRequestClass
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class EncryptedRequestClass {

	public $id = null;

	protected $domainModel = null;

	public function __construct( $domainModel ) {
		echo_r('here');
		$this->domainModel = $domainModel;
	}

}

