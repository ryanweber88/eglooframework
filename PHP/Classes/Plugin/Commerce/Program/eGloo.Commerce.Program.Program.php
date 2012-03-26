<?php
namespace eGloo\Commerce\Program;

use \eGloo\Domain;

/**
 * Program Class File
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
 * Description of Program
 * 
 * Representation of Program Entity
 * Hold CRUD functionalities and Program related method
 *
 * @package Plugins
 * @subpackage Commerce
 */
class Program extends Domain\Model {


	const	PROGRAM_STATUS_INACTIVE		= 0,
				PROGRAM_STATUS_ACTIVE		= 1,
				PROGRAM_STATUS_ON_HOLD		= 2,
				PROGRAM_STATUS_DELETED		= 3,
				PROGRAM_STATUS_NEED_ACTION	= 4;




	/**
	 * Getter for the Product Object
	 * @param type $key
	 * 
	 * @return mix type object retrieved from Product
	 */
	public function __get($key) {
		
		try {
			return parent::__get($key);
		}
		
		
		catch(\Exception $deferred) { }

		if (($method = preg_replace('/(^|_)([a-z])/e', 'ucfirst("\\2")',  $key))) {

			if ( method_exists($this, 'load'. $method) ) {
				if ( is_callable( array($this, 'load'. $method )) ) {
					return call_user_func(array($this, 'load' . $method));
				}
			//} else {
			//	throw new \Exception('Undefined Method '. $method . ' invoqued');
			}
				
		}
		
		throw $deferred;
		
	}

	//public static function create() { }
	
	public static function loadByID($id) {
	}


	public function updateProgram() {
		
	}


	public static function createProgram() {
		
	}
	
	public static function deleteProgram($program_id) {
		
	}

}