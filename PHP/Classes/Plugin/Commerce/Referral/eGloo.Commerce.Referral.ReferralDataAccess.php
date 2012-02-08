<?php
namespace eGloo\Commerce\Referral;
use \eGloo\DataProcessing\Connection,
	\eGloo\Performance\Caching\Gateway as CacheGateway;


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
class ReferalDataAccess  extends Connection\PostgreSQLDBConnection{
	/** @var resource Object */
	protected static $instance = null;
	
	/**
	 * Overwrite $rawConnectionResource setting in connection file
	 * 
	 * @param resource $rawConnectionResource = null
	 * @return void
	 */
	public function __construct() {}
	
	/**
	 * Create an instance of the class
	 * Delegate class to access Database layer
	 * 
	 * @return $this class object
	 */
	public static function fetch () {
		if (static::$instance === null) {
			static::$instance = new self();
		}
		return static::$instance;
	}
	
	public function createReferral() {
		
	}
	
	public function loadReferralById($program_id) {
		if ($program_id == '') {
			throw new \InvalidArgumentException('[: Missing argument error:] Referral id is required!', __METHOD__);
		}
	}
	
	public function loadReferralByName($program_name) {
		if ($program_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: Referral name is required!', __METHOD__);
		}
		return $this->loadBrand('name', $program_name);
	}

	public function loadReferral($field_name, $field_value) {
		if ($field_name == '' || $field_value == '') {
			throw new \InvalidArgumentException('::Missing argument error', __METHOD__);
		}
		$sql = '';
		return parent::getUnique($sql, array($field_value, 1), function ($row) {
							return $row;
		});
	}
	
	public function deleteReferralById($program_id) {
		if ($program_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: Referral id is required!', __METHOD__);
		}
		
	}
	
	public function deleteReferralByName($program_name) {
		if ($program_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: Referral name is required!', __METHOD__);
		}
		
	}
}
