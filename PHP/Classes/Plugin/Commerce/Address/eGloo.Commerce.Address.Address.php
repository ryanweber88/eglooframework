<?php
namespace eGloo\Commerce\Address;

use \eGloo\Commerce,
    \eGloo\Utility,
    \eGloo\Domain;

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
class Address extends Domain\Model {


	
	const	TYPE_RESIDENTIAL	= 1,
        TYPE_COMMERCIAL		= 0;
	

	
	public static function saveAddress($label, $fname, $lname, $user_id, $address, $address2, 
			$city, $state, $postal, $phone, $default, $residential = Address::TYPE_RESIDENTIAL, 
			$shippable = Address::TYPE_RESIDENTIAL) {
		return AddressDataAccess::fetch()->insertAddress($label, $fname, $lname, $user_id, $address,
				$address2, $city, $state, $postal, $phone, $default, $residential, $shippable );
	}
}