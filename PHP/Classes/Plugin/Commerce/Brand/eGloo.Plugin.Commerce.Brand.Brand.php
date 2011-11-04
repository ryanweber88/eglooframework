<?php
namespace eGloo\Plugin\Commerce\Brand;

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
	/** @var integer Brand ID */
	public		$id_brand;

	/** @var string Name */
	public 		$name;

	/** @var string description */
	public 		$description;

	/** @var string creation date */
	public 		$date_added;

	/** @var string last modification date */
	public 		$date_updated;

	/** @var boolean active */
	public		$active;
	
	/** @var array list of products under brand */
	protected	$brand_products = array();
	
	/** @var array list of brand images */
	protected	$brand_iamges = array();
	
	public function __construct ( $args ) {
		
	}
	
	/**
	 * Extract brand property out for clean UI display
	 * 
	 * @return array of brand property 
	 */
	public function getBrandArray(){
		$result = array();
		if (isset ($this->id_brand)){
			$result['id_brand']			= $this->id_brand;
			$result['brand_name']		= $this->name;
			$result['description']		= $this->description;
			$result['date_added']		= $this->date_added;
			$result['date_updated']		= $this->date_updated;
			$result['active']			= $this->active;
			$result['brand_products']	= $this->brand_products;
			$result['brand_images']		= $this->brand_images;
		} 
		return $result;
	}
}

