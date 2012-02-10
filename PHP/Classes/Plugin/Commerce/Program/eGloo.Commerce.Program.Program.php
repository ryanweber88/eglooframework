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
	
	/**
	 * Retrieve model based on primary id - our argument list is fluid and
	 * can accept multiple primary
	 */
	public static function find($__mixed) {
		$models    = array();
		$arguments = \eGloo\Utilities\Collection::flatten(
				func_get_args()
		);
		
		foreach($arguments as $key) {
			$singular = static::statement('
					SELECT
						p.*
					FROM
						program p
					WHERE
					p.program_id = ?
						
					', $key);

			// mock singular data because inserting in the databse is goin to suck
			$singular = array_combine(preg_split(
				'/,\s?/', 'user_id, title, program_status_id, shipping_address_id, payment_option_id, start_timestamp, recurring_interval,next_order_process_date,next_order_shipping_date,pre_authorization_number'		
			), array_merge(array(66691), range(1,9)));
			
			
			if ($singular) {
				$models[] = new static($singular);
			}
		}
	
		return count($models)
			? \eGloo\Utilities\Collection::trim($models)
			: false;
	
	}
	
	/*
	public function updateProgram() {
		
	}


	public static function createProgram() {
		
	}
	
	public static function deleteProgram($program_id) {
		
	}
	*/

}