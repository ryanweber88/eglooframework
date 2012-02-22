<?php
namespace eGloo\Commerce\Address;
use \eGloo\Commerce,
	\eGloo\Utility;

/**
 * Address Class File
 *
 * file_block_description
 *
 * Copyright 2010 eGloo, LLC
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
 * @author		Gilbert Sewovoe-Ekoue <gilbert@petflow.com>
 * @copyright	2010 eGloo, LLC
 * @license		http://www.apache.org/licenses/LICENSE-2.0
 * @package		Package
 * @subpackage	Subpackage
 * @version		1.0
 */

/**
 * Address
 *
 * Short description for Address
 *
 * Long description for Address
 *
 * @author		Gilbert Sewovoe-Ekoue <gilbert@petflow.com>
 * @package		Package
 * @subpackage	Subpackage
 * @version		Release: 1.0
 */
class Address {

	/*** @var Integer address ID  */
	public		$user_address_id;
	
	/*** @var Integer User ID */
	public		$user_id;
	
	/*** @var String Name 	*/
	public		$first_name;
	
	/*** @var String Name  */
	public		$last_name;
	
	/*** @var String Address 1	 */
	public		$address_line_1;
	
	/*** @var String Address 2	 */
	public		$address_line_2;
	
	/*** @var String City 	*/
	public		$city;
	
	/*** @var String State Code 2 */
	public		$state;
	
	/*** @var Integer Zip Code 	 */
	public		$zip_code5;
	
	/*** @var Integer Zip Code 	 */
	public		$zip_code4;
	
	/*** @var boolean residential 	 */
	public		$residential = true;
	
	/*** @var boolean shippable 	 */
	public		$shippable = true;
	
	/*** @var String County  */
	public		$county;
	
	/*** @var String Shipping Region  */
	public		$shipping_region;
	
	/*** @var String Country code 2	 */
	public		$country;
	
	/*** @var string address label 	 */
	public		$label;
	
	public		$validated = false;
	
	/** @var array/Mix properties of Brands */
	public		$properties;
	
	const		TYPE_RESIDENTIAL	= 1,
				TYPE_COMMERCIAL		= 0;
	
	public function __construct($args) {
		foreach ( $args as $key => $value ){
			$this->{$key} = $value;
		}
	}
	
	/**
	 * Populate data int the User object
	 * 
	 * @param type $key
	 * @param type $value 
	 */
	public function __set($key, $value) {
		if (property_exists($key, $this)) {
			$this->$key = $value;
		}
		$this->properties[$key] = $value;
		return $this;
	}
	
	/**
	 * Getter for the User Object
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
	
	public function __toString() {
		return serialize($this);
	}
	
	public static function loadByID($address_id) {
		
	}
	
	public static function saveAddress($label, $fname, $lname, $user_id, $address, $address2, 
			$city, $state, $postal, $phone, $default, $residential = Address::TYPE_RESIDENTIAL, 
			$shippable = Address::TYPE_RESIDENTIAL) {
		return AddressDataAccess::fetch()->insertAddress($label, $fname, $lname, $user_id, $address,
				$address2, $city, $state, $postal, $phone, $default, $residential, $shippable );
	}
}