<?php
namespace eGloo\Commerce\Brand;

use \eGloo\Commerce\Brand\BrandDataAccess,
	  \eGloo\Utilities\Utilities,
	  \eGloo\Commerce\Domain;

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
class Brand extends Domain\Model {


	/**
	 * Create a new Brand object
	 * 
	 * @param array $args optional
	 */
	public function __construct ( array $args = null ) {
		// call our domain\model constructor
		parent::__construct();
		
		foreach ( $args as $key => $value ){
			$this->{$key} = $value;
		}
	}
	
	/**
	 * Get Brand images
	 * 
	 * @return array brand Images
	 */
	public function loadBrandImages() {
		if (empty ($this->brand_images)) {
			$this->brand_images = BrandDataAccess::fetch()->getBrandImagesByID($this->brand_id);
		}
		$this->brand_images;
		return $this;
	}
	
	public function loadBrandProducts() {
		if (empty ($this->brand_products)) {
			$this->brand_products = BrandDataAccess::fetch()->getBrandProducts($this->brand_id);
		}
		$this->brand_products;
		return $this;
	}
	
	public function loadBrandSlug() {
		if ($this->friendly_url == '') {
			$this->friendly_url = BrandDataAccess::fetch()->loadBrandSlugByID($this->brand_id);
		}
		$this->friendly_url;
		return $this;
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
	public function __toString(){
		//return serialize($this);
		return $this->name;
	}
	
	/**
	 * Get list of published brand
	 * 
	 * @param type $limit
	 * @param type $offset
	 * @return Brand object
	 */
	public static function loadPublishedBrands($limit = null, $offset = null) {
		$result = array();
		$rows = BrandDataAccess::fetch()->getBrandList($limit, $offset);
		foreach ($rows as $row) {
			$result[] = new Brand($row);
		}
		return $result;
	}
	
	
	public static function loadBrandList() {
		$result = array();
		$rows = BrandDataAccess::fetch()->loadBrandList();
		foreach ($rows as $row) {
			$result[] = new Brand($row);
		}
		return $result;
	}
	
	/**
	 * Acts as an alias to getBrandList - is provided to create lcd
	 * interface between domain classes
	 */
	public static function all() {
		return static::getBrandList();
	}


	/**
	 * Load Brand by Brand Id
	 * 
	 * @param type $brand_id
	 * @return Brand 
	 */
	public static function loadByID($brand_id) {
		if ((int)$brand_id <= 0) {
			throw new \InvalidArgumentException();
		}
		$rows = BrandDataAccess::fetch()->loadBrandByID($brand_id);
		return new Brand($rows);
	}
	
	/**
	 * Load Brand By Name
	 * 
	 * @param type $brand_name
	 * @return Brand object
	 */
	public static function loadBrandByName($brand_name) {
		if ($brand_name == '') {
			throw new \InvalidArgumentException();
		}
		$rows = BrandDataAccess::fetch()->loadBrandByName($brand_name);
		return new Brand($rows);
	}
	
	/**
	 * Load featured brand by Id
	 * 
	 * @param array $brands id
	 * @return array Brand
	 */
	public static function getFeaturedBrand(array $brands) {
		$result = array();
		if (empty ($brands)) {
			throw new \InvalidArgumentException();
		}
		foreach ($brands as $brand_id) {
			$brand					= self::loadByID($brand_id);
			$brand->brand_images	= BrandDataAccess::fetch()->getBrandImagesByID((int)$brand->brand_id);
			//$brand->friendly_url	= 'brand/' . Utilities::createSlug($brand->name);
			$brand->friendly_url	= BrandDataAccess::fetch()->loadBrandSlugByID((int)$brand->brand_id);
			$result[]				= $brand;
		}
		return $result;
	}
}