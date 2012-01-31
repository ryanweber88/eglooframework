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

	/** @var integer user id */
	public $user_id;

	/** @var string user email address */
	public $email_address;

	/** @var string user name */
	public $username;

	/** @var string password */
	public $password_hash;
	
	/** @var string first name */
	public $first_name;
	
	/** @var string last name */
	public $last_name;
	
	/** @var int Security Question ID*/
	public $security_question_id;
	
	/** @var string first name */
	public $security_answer_hash;

	/** @var integer 1/0 for user type */
	public $user_type_id = 0;
	
	/** @var integer 1/0 for user status */
	public $user_status_id = 0;

	/** @var string created date */
	public $registration_date;

	/** @var string deleted date */
	public $deleted_date;
	
	/** @var string birthday date */
	public $birthday;

	/** @var string updated date */
	public $last_action;

	/** @var string last logged in date */
	public $last_action_date;

	/** @var string is user logged in */	
	protected static $logged_in		= false;
	
	/** @var array/Mix properties of Brands */
	public		$properties;

	const USER_TYPE_NORMAL			= 1,
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
		($this->user_status_id === 1) ? static::$logged_in == true : false;
	}

	/**
	 * Validate User password
	 * 
	 * @param type $password
	 * @return boolean true/false 
	 */
	public function validatePassword ($password) {
		return md5($password) == $this->password_hash ?: false;
	}
	
	/**
	 * Check for valid User
	 * 
	 * @return boolean static true/false 
	 */
	public static function isLoggedIn() {
		return static::$logged_in;
	}


	/**
	 * Populate data int the User object
	 * 
	 * @param type $key
	 * @param type $value 
	 */
	public function __set($key, $value) {
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
	
	public static function login ($email, $passwd) {
		if ($email == '' || $passwd == '') {
			throw new \InvalidArgumentException("Invalid User Data Exception: Username or Password is invalid");
		}
		
		$user = UserDataAccess::fetch()->login($email, $passwd);
		return isset($user) ? new User($user) : 'Unable to find User with email: ' . $email;
	}

	/**
	 * Create User Object
	 * 
	 * @param type $uname
	 * @param type $pwd
	 * @param type $priv
	 * @return type
	 * @throws \InvalidArgumentException 
	 */
	public static function register($email, $passwd, $user_type = self::USER_TYPE_NORMAL) {
		if ($email == '' || $passwd == '') {
			throw new \InvalidArgumentException("Invalid User Data Exception: Username or Password is invalid");
		}
		$id = UserDataAccess::fetch()->createUserAccount($email, $passwd, $user_type);

		return ($id > 0) ? self::loadByID($id) : 'Account creation failed';
	}

	/**
	 *
	 * @param type $user_id
	 * @return \eGloo\Commerce\User\User
	 * @throws \InvalidArgumentException 
	 */
	public static function loadByID($user_id) {
		if ((int)$user_id <= 0) {
			throw new \InvalidArgumentException();
		}
		$user = UserDataAccess::fetch()->loadUserByID($user_id);
		return !empty($user) ? new User($user) : 'Unable to find User with email: ' . $user_id;
	}

	/**
	 *
	 * @param type $zip_code
	 * @return \eGloo\Commerce\User\User
	 * @throws \InvalidArgumentException 
	 */
	public static function loadUserByZipCode($zip_code) {
		$result = array();
		if ((int) $zip_code == '') {
			throw new \InvalidArgumentException();
		}
		$users = UserDataAccess::fetch()->loadUserByZipCode($zip_code);
		foreach ($users as $user) {
			$result[] = new User($user);
		}
		return $result;
	}

	/**
	 *
	 * @param type $email
	 * @return \eGloo\Commerce\User\User
	 * @throws \InvalidArgumentException 
	 */
	public static function loadUserByEmail($email) {
		if ($email == '') {
			throw new \InvalidArgumentException();
		}
		$user = UserDataAccess::fetch()->loadUserByEmail($email);
		return !empty($user) ? new User($user) : 'Unable to find User with email: ' . $email;
	}

	/**
	 *
	 * @param type $cc_code
	 * @return \eGloo\Commerce\User\User
	 * @throws \InvalidArgumentException 
	 */
	public static function loadUserByCreditCardCode($cc_code) {
		$result = array();
		if ((int) $cc_code == '') {
			throw new \InvalidArgumentException();
		}
		$users = UserDataAccess::fetch()->loadUserByCCCode($cc_code);
		foreach ($users as $user) {
			$result[] = new User($user);
		}
		return $result;
	}

	/**
	 *
	 * @param type $state
	 * @return \eGloo\Commerce\User\User
	 * @throws \InvalidArgumentException 
	 */
	public static function loadUserByState($state) {
		$result = array();
		if ((int) $state == '') {
			throw new \InvalidArgumentException();
		}
		$users = UserDataAccess::fetch()->loadUserByState($state);
		foreach ($users as $user) {
			$result[] = new User($user);
		}
		return $result;
	}

	/**
	 *
	 * @param type $program_id
	 * @return \eGloo\Commerce\User\User
	 * @throws \InvalidArgumentException 
	 */
	public static function loadUserByProgramId($program_id) {
		$result = array();
		if ((int) $program_id == '') {
			throw new \InvalidArgumentException();
		}
		$users = UserDataAccess::fetch()->loadUserProgramId($program_id);
		foreach ($users as $user) {
			$result[] = new User($user);
		}
		return $result;
	}

	/**
	 *
	 * @param type $order_id
	 * @return \eGloo\Commerce\User\User
	 * @throws \InvalidArgumentException 
	 */
	public static function loadUserByOrderId($order_id) {
		$result = array();
		if ((int) $order_id == '') {
			throw new \InvalidArgumentException();
		}
		$users = UserDataAccess::fetch()->loadUserByOrderId($order_id);
		foreach ($users as $user) {
			$result[] = new User($user);
		}
		return $result;
	}
}