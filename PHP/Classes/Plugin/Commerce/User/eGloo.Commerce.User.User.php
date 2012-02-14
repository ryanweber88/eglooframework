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

	protected static $active_user_id;
	protected static $logged_in;
	
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
	
		if (count($args)) {
			
			parent::__construct($args);
		
				
			if ($this->user_id > 0 && $this->user_status_id == 1) {
				static::$logged_in = true;
				static::$active_user_id = $this->user_id;
			}
		}
		
		else { 
			throw new \InvalidArgumentException("User does not exist in the System");
		}
	}

	/**
	 * Validate User password
	 * 
	 * @param type $password
	 * @return boolean true/false 
	 */
	public function validatePassword ($password) {		
		return $password == $this->password_hash ?: false;
	}
	
	public function updateUserProfileByID($fname, $lname) {
		return UserDataAccess::fetch()->updateUserProfileByID($fname, $lname, $this->user_id);
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
	
	/**
	 * 
	 * Returns user logged in status
	 */
	public static function loggedIn() {
		return static::$loggedIn;
	}
	
	/**
	 * Login Method
	 * 
	 * @param type $email
	 * @param type $passwd
	 * @return type
	 * @throws \InvalidArgumentException 
	 */
	public static function login ($email, $passwd) {
		if ($email == '' || $passwd == '') {
			throw new \InvalidArgumentException("Invalid User Data Exception: Username or Password is invalid");
		}
		
		$result = UserDataAccess::fetch()->login($email, $passwd);
		return is_array($result) ? new User($result) : false;
	}
	
	/**
	 *
	 * @param type $hash
	 * @return type
	 * @throws \InvalidArgumentException 
	 */
	public static function validateCommunicationKey($hash) {
		if ($hash == '' ) {
			throw new \InvalidArgumentException('Hash key needed');
		}
		$key = UserDataAccess::fetch()->getCommunicationKey($hash);
		return !empty($key) ? $key : false;
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

		return ($id > 0) ? static::loadByID($id) : 'Account creation failed';

	}

	/**
	 *
	 * @param type $user_id
	 * @return \eGloo\Commerce\User\User
	 * @throws \InvalidArgumentException 
	 */
	public static function loadByID($user_id) {
		if ($user_id === '') {
			throw new \InvalidArgumentException();
		}
		$user = UserDataAccess::fetch()->loadUserByID($user_id);
		return !empty($user) ? new User($user) : false;
	}

	public static function loadByPassword($passwd) {
		if ($passwd == '') {
			throw new \InvalidArgumentException();
		}
		$user = UserDataAccess::fetch()->loadUserByPassword($passwd);
		return !empty($user) ? new User($user) : false;
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
		return !empty($user) ? new User($user) : false;
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
