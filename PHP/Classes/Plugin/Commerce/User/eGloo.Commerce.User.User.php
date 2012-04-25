<?php
namespace eGloo\Commerce\User;

use \eGloo\Domain;
use \eGloo\Commerce\User\UserDataAccess;

/**
 * User Class File
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
 * Description of User
 *
 * Representation of User Entity
 * Hold CRUD functionalities and user related method
 *
 * @package Plugins
 * @subpackage Commerce
 */
class User extends Domain\Model {

	/** @var string is user logged in */
	protected static $logged_in = false;

	/** * @var type Anonymous	 */
	public static $active_user_id = 0;

	const USER_TYPE_NORMAL			= 1,
	      USER_TYPE_EMPLOYEE		= 2,
	      USER_TYPE_AFFILIATE		= 3;


	/**
	 * Construct User Object
	 * 
	 * @param array $args
	 * @throws \InvalidArgumentException 
	*/
	public function __construct ($__mixed = null) {
		
		$arguments = \eGloo\Utilities\Collection::flatten(
			func_get_args()
		);
				
		if (count($arguments)) {
			parent::__construct($arguments);

			if ($this->user_id > 0 && $this->user_status_id == 1) {
				static::$logged_in      = true;
				static::$active_user_id = $this->user_id;
			}

		// we wan't to be able to instantiate a new user without having it
		// explicitly linked to an anonymous user; thus commenting out our
		// invalid exception
		} else { 
			//throw new \InvalidArgumentException("User does not exist in the System");
			exit('here');
		}
		
	}

	/**
	 * Check for valid User
	 * 
	 * @return boolean static true/false 
	 */
	public static function isLoggedIn() {
		return static::$logged_in;
	}
	
	public static function getActiveUserID() {
		return static::$active_user_id;
	}


	/**
	 * Return String version of this object
	 * @return type
	 */
	public function __toString () {
		$user_data = '';
		foreach ($this as $field => $value) {
			if ($field == 'password') {
				continue;
			}
			$user_data .= "$field: $value\n";
		}
		return $user_data;
	}


}