<?php
namespace eGloo\Commerce\User;
use eGloo\Commerce\User\UserDataAccess;

/**
 * UserCommunication Class File
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
 * Description of UserCommunication
 *
 * Representation of UserCommunication Entity
 * Hold CRUD functionalities and UserCommunication related method
 *
 * @package Plugins
 * @subpackage Commerce
 */
class UserCommunication {

	protected  $user = null;			
	
	/**
	 *
	 * @param Commerce\User $user 
	 */
	public function __construct(User $user) {
		$this->user = $user;
	}
	
	public function sentCommunication($comm_type_id, $end_time) {
		return UserDataAccess::fetch()->sendCommunication($this->user->user_id, $comm_type_id, 
				$end_time, md5($this->user->user_id), $this->user->user_id);
	}
	
	public function updateCommunicationStatus() {
		
	}
	
}