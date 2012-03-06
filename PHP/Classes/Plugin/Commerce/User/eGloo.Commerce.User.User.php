<?php
namespace eGloo\Commerce\User;
use eGloo\Commerce\User\UserDataAccess;

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
class User {
	
	/** * @var type Anonymous	 */
	public static $active_user_id;
	
	/** @var string is user logged in */
	protected static $logged_in		= false;
	
	
	const	USER_TYPE_NORMAL		= 1,
			USER_TYPE_EMPLOYEE		= 2,
			USER_TYPE_AFFILIATE		= 3;
	

	/**
	 * Construct User Object
	 *
	 * @param array $args
	 * @throws \InvalidArgumentException
	 */
	public function __construct (array $args) {
		if (!is_array($args) || sizeof($args) == 0) {
			throw new \InvalidArgumentException("User does not exist in the System");
		}
		foreach ( $args as $key => $value ){
			$this->{$key} = $value;
		}

		if ($this->user_id > 0 && $this->user_status_id == 1) {
			self::$logged_in = true;
			self::$active_user_id = $this->user_id;
		}
		//isset($this->user_id) ? self::$active_user_id = $this->user_id : 0;
	}

	/**
	 * Populate data int the User object
	 *
	 * @param type $key
	 * @param type $value
	 */
	public function __set($key, $value) {
		$this->$key = $value;
		return true;
	}

	/**
	 * Getter for the User Object
	 * @param type $key
	 *
	 * @return mix type object retrieved from user
	 */
	public function __get( $key ) {
		if ( property_exists($this, $key) ) {
			return $this->$key;
		}
		return false;
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

	/**
	 * Magic method __Call
	 * @param type $name
	 * @param type $arguments
	 * @return type
	 */
	public function __call($name, $arguments) {
		if ($name == 'logout') {
			return $this->logout();
		}
		// @TODO delegate to EPA
	}

	/**
	 * Magic Method
	 *
	 * @param type $name
	 * @param type $arguments
	 */
	public static function __callstatic($name, $arguments) {
		if ($name == 'logout' && isset($arguments[0])) {
			// @TODO perform needed actions for a static user logout
			// this should be possible if the user has logged in
			// since we should be statically storing our user login
			// information
		}
		// @TODO delegate to EPA
	}
}