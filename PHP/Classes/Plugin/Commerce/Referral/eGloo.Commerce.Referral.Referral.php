<?php
namespace eGloo\Commerce\Referral;
use \eGloo\Commerce,
	\eGloo\Utility;


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
class Program {
	
	public		$program_id;
	
	public		$program_title;
	
	public		$user_id;
	
	public		$interval;
	
	public		$interval_type;
	
	public		$start_date;
	
	public		$end_date;
	

	function __construct() {
		
	}
	
	public function updateProgram() {
		
	}


	public static function createProgram() {
		
	}
	
	public static function deleteProgram($program_id) {
		
	}

}