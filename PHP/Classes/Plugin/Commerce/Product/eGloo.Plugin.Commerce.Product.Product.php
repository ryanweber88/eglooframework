<?php
namespace eGloo\Plugin\Commerce\Product;
use eGloo\DataProcessing\Connection\PostgreSQLDBConnection as PGDBConnect;

/**
 * Product Class File
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
 * @package Plugin
 * @subpackage Commerce
 * @version 1.0
 */

/**
 * Description of Product
 * 
 * Representation of Brand Entity
 * Hold CRUD functionalities and Brand related method
 *
 * @package Plugin
 * @subpackage Commerce
 */

class Product {

	/** @var integer Product ID */
	public		$product_id;

	/** @var string Name */
	public 		$name;

	/** @var string A description */
	public 		$description;

	/** @var string A short description */
	public 		$short_description;

	/** @var string Product Brand */
	public		$brand;

	/** @var string Product UPC(12) or EAN(13) barcode */
	public		$product_upc;

	/** @var string Manufacturer name */
	public		$manufacturer_name;

	/** @var string Supplier Name */
	public		$supplier_name;

	/** @var string Retail price */
	public		$retail_price;
	
	/** @var string Unit price */
	public		$unit_price;

	/** @var string Manufacturer Price */
	public		$manufacturer_price;
	
	/** @var string Wholesale Price */
	public		$wholesale_price;

	/** @var array of Images */
	public		$images = array();

	/** @var array of variant sizes */
	public		$sizes = array();

	/** @var boolean on_sale */
	public 		$on_sale = false;

	/** @var string Width */
	public 		$width = 0;
	
	/** @var string Width */
	public 		$length = 0;

	/** @var string Height */
	public 		$height = 0;

	/** @var string Depth */
	public 		$depth = 0;

	/** @var string Weight */
	public 		$weight = 0;

	/** @var string Weight Unit (measure LB/LT/OZ/MM/CM/CL/FT/IN/QT/GL) */
	public 		$measure_unit;
	
	/** @var string Weight Unit (measure LB/LT/OZ/MM/CM/CL/FT/IN/QT/GL) */
	public 		$weight_unit;

	/** @var string Weight Description */
	public		$weight_description;

	/** @var string Container (Case/Bag/Box/Pallet/Bale/Roll/EACH) */
	public		$product_container;

	/** @var string Unit for number of items */
	public 		$units = 1;

	/** @var string Ingredients */
	public 		$ingredients;

	/** @var string Friendly URL */
	public 		$link_rewrite;

	/** @var string creation date */
	public 		$date_added;

	/** @var string last modification date */
	public 		$date_updated;

	/** @var boolean Active */
	public		$status = 1;

	/** @var Cache Object */
	protected	$cache;

	/** @var array list user objects */
	public static $config = array();

	/**
	 * Create a new Product object
	 * 
	 * @param array $args optional
	 */
	public function __construct ( array $args = null ) {
		if (isset ( $args )){
			$this->configurate( $args );
		}
		return $this;
	}
	
	/**
	 * Allow to instantiate a Product object without the constainst of the constructor
	 * 
	 * @param array $args used to configurate the Product object
	 * 
	 * @return void
	 */
	protected function configurate ( array $args ) {
		foreach ( $args as $key => $value ){
			if (property_exists( $this, $key)) {
				$this->key	= $value;
			} else {
				self::$config['USER_DEFINED.' .$key] = $value;
			}
		}
		return $this;
	}

	/**
	 * Extract Product property out for clean UI display
	 * 
	 * @return array of Product property 
	 */
	public function getBrandArray(){
		$result = array();
		if (isset ($this->id_brand)){
			$result['product_id']			= $this->product_id;
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
	
	/**
	 * Populate data int the Product object
	 * 
	 * @param type $key
	 * @param type $value 
	 */
	public function __set($key, $value) {
		self::$config[$key] = $value;
		return $this;
	}
	
	/**
	 * Getter for the Product Object
	 * @param type $key
	 * 
	 * @return mix type object retrieved from Product
	 */
	public function __get($key) {
		if (is_callable($this->config[$key])){
			return $this->config[$key];
		}
		return array_key_exists($key, self::$config) ? self::$config[$key] : null;
	}
	
	/**
	 *
	 * @return Product 
	 */
	public function toString(){
		return $this;
	}

}