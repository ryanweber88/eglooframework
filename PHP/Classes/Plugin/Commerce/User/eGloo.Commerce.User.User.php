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
	
	protected static $loggedIn = false;

	const PRIVILEGES_REGULAR_USER	= 0;
	const PRIVILEGES_ADMIN_USER		= 1;


	public function __contruct ($uname, $email, $pwd, $priv = self::PRIVILEGES_REGULAR_USER) {
		if ($uname == '' || $pwd == '') {
			throw new \InvalidArgumentException("Invalid User Data Exception: Username or Password is invalid");
		}



		static::$loggedIn = true;

	}

	public function __construct($mixed = null) {
	
		if (is_callable($mixed)) {
			$mixed($this);

			new User(function($entiy) {
				$this->entity->id = valuePassedFromJsonOrScope;
			});
		}

		foreach($mixed as $name => $value) {

		}

			
		
	}

	public function checkPassword ($password) {
		return MD5($password) == $this->password ? true : false;
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
	
	public function __call($name, $arguments) {
		
		if ($name == 'logout') {
			return $this->logout();
		}
		
		// @TODO delegate to EPA
	}
	
	public function __callstatic($name, $arguments) {
		
		if ($name == 'logout' && isset($arguments[0])) {
			// @TODO perform needed actions for a static user logout
			// this should be possible if the user has logged in
			// since we should be statically storing our user login
			// information
			
		
		} 
		
		// @TODO delegate to EPA
	}
	
	/**
	 * 
	 * Returns user logged in status
	 */
	public static function loggedIn() {
		return static::$loggedIn;
	}

	
	
	/**
	 * 
	 * Determines user login destination
	 */
	public static function loginDestination() {
		// @TODO pass
	}
	


	public static function createUser($uname, $email, $pwd, $priv = self::PRIVILEGES_REGULAR_USER) {
		if ($uname == '' || $pwd == '') {
			throw new \InvalidArgumentException("Invalid User Data Exception: Username or Password is invalid");
		}
		$this->username		= $uname;
		$this->password		= $pwd;
		$this->privileges	= $priv;

		$row = Commerce\User\UserDataAccess::fetch()->createUser();
		return new User(self::createUserFromArray($row));
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
