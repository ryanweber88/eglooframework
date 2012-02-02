<?php
namespace eGloo\Commerce\Slug;
use \eGloo\DataProcessing\Connection;
/**
 * SlugData Class File
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
 * Description of SlugData
 * 
 * Representation of SlugData Entity
 * Hold CRUD functionalities and SlugData related method
 *
 * @package Plugins
 * @subpackage Commerce
 */
class SlugDataAccess extends Connection\PostgreSQLDBConnection {
	
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
	
	public function loadBrandSlugs() {
		$result = array();
		$sql = "SELECT ps.value, ps.dst, b.name FROM product_slug ps INNER JOIN brands b 
			ON ps.value = b.brand_id WHERE ps.source = 'B' ORDER BY b.name ASC";
		$slugs = parent::getUnique($sql);
		die_r($slugs);
		
		foreach ($slugs as $slug) {
			$result[$slug['name']] = str_replace('brand/', '', $slug['dst']);
		}
		return $result;
	}
	
	public function loadProductSlugs() {
		$result = array();
		$sql = "SELECT ps.value, ps.dst, b.name FROM product_slug ps INNER JOIN brands b 
			ON ps.value = b.brand_id WHERE ps.source = 'B' ORDER BY b.name ASC";
		$slugs = parent::executeQuery($sql, array());
		foreach ($slugs as $slug) {
			$result[$slug['name']] = str_replace('product/', '', $slug['dst']);
		}
		return $result;
	}
}

?>
