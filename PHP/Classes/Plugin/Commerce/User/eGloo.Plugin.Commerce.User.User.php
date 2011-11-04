<?php
namespace eGloo\Plugin\Commerce\User;

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
	
	/**
	 * @var integer user id
	 */
	public $uid;
	
	/**
	 * @var string user email address
	 */
	public $email;
	
	/**
	 * @var string password
	 */
	public $password;
	
	/**
	 * @var string security hash key 
	 */
	public $secure_key;
	
	/**
	 * @var integer 1/0 for active user
	 */
	public $is_active = 1;
	
	/**
	 * @var integer 1/0 for deleted user
	 */
	public $is_deleted = 0;
	
	/**
	 * @var integer 1/0 for guest user
	 */
	public $is_guest = 0;
	
	/**
	 * @var string created date
	 */
	public $created_date;
	
	/**
	 * @var string deleted date
	 */
	public $deleted_date;
	
	/**
	 * @var string updated date
	 */
	public $updated_date;
	
	/**
	 *
	 * @return type 
	 */
	public function getUserInfo(){
		if (isset ($this->uid)){
			
		}
		return $user;
	}
	
}