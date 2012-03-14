<?php
namespace eGloo\Commerce\Coupon;
use \eGloo\Commerce,
	\eGloo\Utility;

/**
 * Coupon Class File
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
 * Description of Coupon
 * 
 * Representation of Coupon Entity
 * Hold CRUD functionalities and Coupon related method
 *
 * @package Plugins
 * @subpackage Commerce
 */

class Coupon {
	
	const COUPON_TYPE_SHIPPING		= 1,
			COUPON_TYPE_PRODUCT		= 2,
			COUPON_TYPE_ORDER		= 3;
	
	const DISCOUNT_TYPE_AMOUNT		= 1,
			DISCOUNT_TYPE_PERCENT	= 2,
			DISCOUNT_TYPE_FLAT_RATE = 3;
	
	public function __construct (array $args) {
		if (!is_array($args) || sizeof($args) == 0) {
			throw new \InvalidArgumentException();
		}
		
		foreach ( $args as $key => $value ){
			$this->{$key} = $value;
			
		}
	}
	
	/**
	 * Populate data int the Coupon object
	 * 
	 * @param type $key
	 * @param type $value 
	 */
	public function __set($key, $value) {
		$this->$key = $value;
		return true;
	}
	
	/**
	 * Getter for the Coupon Object
	 * 
	 * @param type $key
	 * 
	 * @return mix type object retrieved from user
	 */
	public function __get( $key ) {
		if (isset($this->properties[$key])) {
			return $this->properties[$key];
		}
		return false;
	}
	
	/**
	 * Return String version of this object
	 * @return type 
	 */
	public function __toString () {
		return var_export($this, true);
	}
	
}