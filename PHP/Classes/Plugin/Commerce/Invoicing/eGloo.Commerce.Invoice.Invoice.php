<?php
namespace eGloo\Commerce\Invoice;
use \eGloo\Commerce\Slug\InvoiceDataAccess;

/**
 * Invoice Class File
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
 * @author Gilbert Sewovoe-Ekoue
 * @copyright 2011 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @package package
 * @subpackage subpackage
 * @version 1.0
 */

/**
 * Description of Invoice
 * 
 * Representation of Invoice Entity
 * Hold CRUD functionalities and Slug related method
 *
 * @package Plugins
 * @subpackage Commerce
 */
class Invoice {
	
	/**
	 * Create a new Product object
	 * 
	 * @param array $args optional
	 */
	public function __construct (array $args) {
		foreach ($args as $key => $value){
			$this->{$key} = $value;
		}
	}
	
	/**
	 * Populate data int the Setter
	 *
	 * @param type $key
	 * @param type $value
	 */
	public function __set($key, $value) {
		if (property_exists($this, $key)) {
			$this->{$key} = $value;
		} else {
			$this->{$key} = $value;
		}
		return true;
	}

	/**
	 * Getter for the
	 * @param type $key
	 *
	 * @return mix type object retrieved from 
	 */
	public function __get( $key ) {
		if (property_exists($this, $key)) {
			return $this->$key;
		} elseif ( isset($this->properties[$key] )) {
			return $this->properties[$key];
		} 
		return false;
	}
}