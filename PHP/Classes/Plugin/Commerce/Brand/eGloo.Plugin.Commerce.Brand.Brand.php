<?php
namespace eGloo\Plugin\Commerce\Brand;
use eGloo\DataProcessing\Connection\PostgreSQLDBConnection as PGDBConnect;
/**
 * Brand Class File
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
 * Description of Brand
 * 
 * Representation of Brand Entity
 * Hold CRUD functionalities and Brand related method
 *
 * @package Plugins
 * @subpackage Commerce
 */
class Brand {

	/** @var integer brand id */
	/* public          $brand_id; */

	/** @var string Name */
	/* public          $name;*/

	/** @var array/Mix properties of Brands */
	protected		$properties;

	/**
	 * Create a new Brand object
	 * 
	 * @param array $args optional
	 */
	public function __construct ( array $args = null ) {
		$this->properties = $args;
	}
	
	public function getBrandProducts( ){
		//return 'Yeay!';
		if ($key = $this->__get('brand_id' )){
			echo $key;
		} else {
			return false;
		}
		//return $this->brand_products = function ( $result ) use ( $this->brand_id ) {};
	}
	
	public function getBrandImages() {
		
	}

	/**
	 * Extract brand property out for clean UI display
	 * 
	 * @return array of brand property 
	 */
	public function getPropertiesArray(){
		return (array)  $this->properties;
	}
	
	/**
	 * Populate data int the brand object
	 * 
	 * @param type $key
	 * @param type $value 
	 */
	public function __set($key, $value) {
		$this->properties[$key] = $value;
		return $this;
	}
	
	/**
	 * Getter for the brand Object
	 * @param type $key
	 * 
	 * @return mix type object retrieved from brand
	 */
	public function __get( $key ) {
		if ( isset($this->properties[$key] )) {
			return $this->properties[$key];
		}
		return false;
	}
	
	/**
	 *
	 * @return Brand 
	 */
	public function toString(){
		return serialize($this->properties);
	}
}

