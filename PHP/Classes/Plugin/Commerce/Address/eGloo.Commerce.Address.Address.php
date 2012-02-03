<?php
namespace eGloo\Commerce\Address;
use \eGloo\Commerce\Brand\AddressDataAccess;

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
	public		$address_id;
	
	/*** @var Integer User ID */
	public		$user_id;
	
	/*** @var String Name 	*/
	public		$first_name;
	
	/*** @var String Name  */
	public		$last_name;
	
	/*** @var String Address 1	 */
	public		$address_1;
	
	/*** @var String Address 2	 */
	public		$address_2;
	
	/*** @var String City 	*/
	public		$city;
	
	/*** @var String State Code 2 */
	public		$state;
	
	/*** @var Integer Zip Code 	 */
	public		$zip_code;
	
	/*** @var String County  */
	public		$county;
	
	/*** @var String Country code 2	 */
	public		$country;
	
	/*** @var string address label 	 */
	public		$label;
	
	const		ADDRESS_TYPE_RESIDENTIAL	= 1,
				ADDRESS_TYPE_COMMERCIAL		= 0;
	
	const		ADDRESS_ALLOW_PO			= 0;
	
	public function __construct() {
		
	}
	
	public function toArray() {
		
	}
	
	public function __toString() {
		
	}
	
	public static function load() {
		
	}
}