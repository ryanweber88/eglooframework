<?php
namespace eGloo\Commerce\User;
use \eGloo\DataProcessing\Connection,
	\eGloo\Utility;

/**
 * UserDataAccess Class File
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
 * Description of UserDataAccess
 *
 * Representation of User Entity
 *
 *
 * @package Plugins
 * @subpackage Commerce
 */
class UserDataAccess extends Connection\PostgreSQLDBConnection{

	protected static $instance = null;

	/**
	 * Pass Connection resource to parent constructor
	 * if needed
	 * @return void
	 */
	public function __construct() { }

	/**
	 * Generate an instance of this class
	 * @return object of this class
	 */
	public static function fetch () {
		if (static::$instance === null) {
			static::$instance = new self();
		}
		return static::$instance;
	}

	public function createUserAccount ($email, $passwd, $user_type) {
		$user_id = null;
		if ($email == '' || $passwd == '') {
			throw new \InvalidArgumentException();
		}
		$this->beginTransaction();
		$date = date('Y-m-d H:i:s', time());
		try {
			$email_insert_sql = 'INSERT INTO email_address (email_address, last_action,'
							  . 'last_action_taken) VALUES(?,?,?);';
			parent::executeInsert($email_insert_sql, array($email, 'I', $date));
			
			$user_insert_sql = 'INSERT INTO site_user (email_address, password_old,'
							 . 'password_hash, user_status_id, user_type_id, registration_date,'
							 . 'last_action, last_action_taken) VALUES(?,?,?,?,?,?,?,?)'
							 . ' RETURNING user_id'; 
			$params = array($email, 0, $passwd, 1, $user_type, $date, 'I', $date);
			$user_id = parent::executeInsert($user_insert_sql, $params);
			$this->commitTransaction();

		} catch (\Exception $e) {
			throw  $e;
		}
		return $user_id;
	}
	
	public function login ($email, $passwd) {
		if ($email == '' || $passwd == '') {
			throw new \InvalidArgumentException('::Missing argument error', __METHOD__);
		}
		$sql = 'SELECT * FROM site_user WHERE email_address = ? AND password_hash = ?';
		return parent::getUnique($sql, array($email, $passwd));
	}

	public function loadUserById($user_id) {
		if ($user_id === '') {
			throw new \InvalidArgumentException('::Missing argument error: user_id is required!', __METHOD__);
		}
		return $this->loadUserByField('user_id', $user_id);
	}

	public function loadUserByName($user_name) {
		if ($user_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: user_name is required!', __METHOD__);
		}
		return $this->loadUserByField('user_name', $user_id);	
	}
	
	public function loadUserByEmail($email) {
		if ($email == '') {
			throw new \InvalidArgumentException(__CLASS__ .'::Missing argument: user_name is required!', __METHOD__);
		}		
		return $this->loadUserByField('email_address', $email);	
	}

	public function loadUserByField($field_name, $field_value) {
		if ($field_name == '' || $field_value === '') {
			throw new \InvalidArgumentException('::Missing argument error', __METHOD__);
		}
		$sql = "SELECT * FROM site_user WHERE {$field_name} = ? AND user_status_id = ?";
		return parent::getUnique($sql, array($field_value, 1));
	}

	public function deleteUserById($user_id) {
		if ($user_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: user_id is required!', __METHOD__);
		}

	}

	public function deleteSessionByName($user_name) {
		if ($user_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: user_name is required!', __METHOD__);
		}

	}
	
	public function sendCommunication($user_id, $comm_type_id, $end_time, $code, $user_id, $start_time = null) {
		$sql = 'INSERT INTO user_communication (user_id, user_communication_type_id,'
			 . 'initiation_timestamp, hashcode, valid_through, used, last_action,'
			 . 'last_action_taken, action_by) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)';
		
		$start_time = isset($start_time) ? $start_time : date('Y-m-d H:i:s',time());
		
		$params = array($user_id, $comm_type_id, $start_time, $code, $end_time, 0, 'I', 
			date('Y-m-d H:i:s',time()), $user_id);
		return parent::executeInsert($sql, $params);
	}
	
	public function getCommunicationKey($hash) {
		if ($hash == '') {
			throw new \InvalidArgumentException('::Missing argument error: hash code is required!', __METHOD__);
		}
		$sql = 'SELECT * FROM user_communication WHERE hashcode = ? AND valid_through > ?';
		return parent::getUnique($sql, array($hash, date('Y-m-d H:i:s', time())));
	}
}