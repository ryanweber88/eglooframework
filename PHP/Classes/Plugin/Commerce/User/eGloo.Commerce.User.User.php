<?php
namespace eGloo\Commerce\User;
use eGloo\Commerce;

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

	/** @var integer user id */
	public $user_id;

	/** @var string user email address */
	public $email;

	/** @var string user name */
	public $username;

	/** @var string password */
	public $password;

	/** @var string security hash key */
	public $secure_key;

	/** @var integer 1/0 for active user */
	public $is_active = 1;

	/** @var integer 1/0 for deleted user */
	public $is_deleted = 0;

	/** @var integer 1/0 for guest user */
	public $is_guest = 0;

	/** @var string created date */
	public $created_date;

	/** @var string deleted date */
	public $deleted_date;

	/** @var string updated date */
	public $updated_date;

	/** @var string last logged in date */
	public $last_logged_date;

	/** @var string is user logged in */
	public $logged_in				= false;

	const PRIVILEGES_REGULAR_USER	= 1,
		  PRIVILEGES_ADMIN_USER		= 4;


	public function __contruct ($uname, $pwd, $priv = self::PRIVILEGES_REGULAR_USER) {
		if ($uname == '' || $pwd == '') {
			throw new \InvalidArgumentException("Invalid User Data Exception: Username or Password is invalid");
		}
		
	}

	public function checkPassword ($password) {
		return MD5($password) == $this->password ?: false;
	}
	
	public static function isLoggedIn() {
		return false;
	}


	public function logout () {
		$this->logged_in = false;
	}

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

	public static function create($uname, Skype$pwd, $priv = self::PRIVILEGES_REGULAR_USER) {
		if ($uname == '' || $pwd == '') {
			throw new \InvalidArgumentException("Invalid User Data Exception: Username or Password is invalid");
		}
		$this->username		= $uname;
		$this->password		= $pwd;
		$this->privileges	= $priv;

		$row = Commerce\User\UserDataAccess::fetch()->createUser();
		return new User(self::createUserFromArray($row));
	}
	
	public static function load($user_id) {
		if ((int)$user_id <= 0) {
			throw new \InvalidArgumentException();
		}
		$user = Commerce\User\UserDataAccess::loadUserByUserID($user_id);
		return new User($user);
	}

	public static function loadUserByZipCode($zip_code) {
		$result = array();
		if ((int) $zip_code == '') {
			throw new \InvalidArgumentException();
		}
		$users = Commerce\User\UserDataAccess::loadUserByZipCode($zip_code);
		foreach ($users as $user) {
			$result[] = new User($user);
		}
		return $result;
	}

	public static function loadUserByEmail($email) {
		$result = array();
		if ($email == '') {
			throw new \InvalidArgumentException();
		}
		$users = Commerce\User\UserDataAccess::loadUserByEmail($email);
		foreach ($users as $user) {
			$result[] = new User($user);
		}
		return $result;
	}

	public static function loadUserByCreditCardCode($cc_code) {
		$result = array();
		if ((int) $cc_code == '') {
			throw new \InvalidArgumentException();
		}
		$users = Commerce\User\UserDataAccess::loadUserByCCCode($cc_code);
		foreach ($users as $user) {
			$result[] = new User($user);
		}
		return $result;
	}

	public static function loadUserByState($state) {
		$result = array();
		if ((int) $state == '') {
			throw new \InvalidArgumentException();
		}
		$users = Commerce\User\UserDataAccess::loadUserByState($state);
		foreach ($users as $user) {
			$result[] = new User($user);
		}
		return $result;
	}


	public static function loadUserByProgramId($program_id) {
		$result = array();
		if ((int) $program_id == '') {
			throw new \InvalidArgumentException();
		}
		$users = Commerce\User\UserDataAccess::loadUserProgramId($program_id);
		foreach ($users as $user) {
			$result[] = new User($user);
		}
		return $result;
	}


	public static function loadUserByOrderId($order_id) {
		$result = array();
		if ((int) $order_id == '') {
			throw new \InvalidArgumentException();
		}
		$users = Commerce\User\UserDataAccess::loadUserByOrderId($order_id);
		foreach ($users as $user) {
			$result[] = new User($user);
		}
		return $result;
	}


	public static function createUserFromArray(array $args) {
		return ;
	}
}