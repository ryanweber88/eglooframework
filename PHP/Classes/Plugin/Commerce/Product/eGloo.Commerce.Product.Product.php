<?php
namespace eGloo\Commerce\Product;

use \eGloo\Commerce;
use \eGloo\Domain;

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

class Product extends Domain\Model {



	/** @var integer Product ID */
	public			$product_id;
	
	/** @var integer Product ID */
	public			$product_line_id;

	/** @var string Name */
	public			$title;

	/** @var string A description */
	public			$description;

	/** @var string A short description */
	public			$short_description;

	/** @var string Product Brand */
	public			$brand_title;
	
	/** @var string Product Brand ID */
	public			$brand_id;

	/** @var string Product UPC(12) or EAN(13) barcode */
	public			$product_upc;

	/** @var string Manufacturer name */
	public			$manufacturer_name;

	/** @var string Supplier Name */
	public			$supplier_name;

	/** @var string Retail price */
	public			$base_retail_price;
	
	/** @var string Unit price */
	public			$unit_price;

	/** @var string Manufacturer Price */
	public			$manufacturer_price;
	
	/** @var string Competitor Price */
	public			$competitor_markup;
	
	/** @var string Wholesale Price */
	public			$wholesale_price;

	/** @var array of Images */
	public			$product_images = array();

	/** @var array of variant sizes */
	public			$product_sizes = array();

	/** @var boolean on_sale */
	public			$on_sale = false;

	/** @var string Width */
	public			$width = 0;
	
	/** @var string Width */
	public			$length = 0;

	/** @var string Height */
	public			$height = 0;

	/** @var string Depth */
	public			$depth = 0;
	
	/** @var string Size Description */
	public			$size_description;

	/** @var string Weight */
	public			$weight = 0;
	
	/** @var string Weight */
	public			$weight_lbs = 0;

	/** @var string Weight Unit (measure LB/LT/OZ/MM/CM/CL/FT/IN/QT/GL) */
	public			$measure_unit;
	
	/** @var string Weight Unit (measure LB/LT/OZ/MM/CM/CL/FT/IN/QT/GL) */
	public			$weight_unit;

	/** @var string Weight Description */
	public			$weight_description;

	/** @var string Container (Case/Bag/Box/Pallet/Bale/Roll/EACH) */
	public			$package;

	/** @var string Unit for number of items */
	public			$units = 1;
	
	/** @var string Sku/UPC  */
	public			$sku;

	/** @var string Ingredients */
	public			$ingredients;

	/** @var string Friendly URL */
	public			$friendly_url;

	/** @var string creation date */
	public			$date_added;

	/** @var string last modification date */
	public			$date_updated;

	/** @var boolean Active */
	public			$status = 1;

	/** @var Cache Object */
	protected		$cache;
	
	/** @var is recuring product */
	public			$recurring_only;

	/** @var array list user objects */
	public static	$config = array();

	
	public function loadProductImages() {
		if (empty ($this->product_images)) {
			$this->product_images = ProductDataAccess::fetch()->loadProductImages($this->product_id);
		}
		$this->product_images;
		return $this;
	}
	
	public function loadProductIngredients() {
		if (empty ($this->ingredients)) {
			$this->ingredients = ProductDataAccess::fetch()->loadProductIngredients($this->product_id);
		}
		$this->ingredients;
		return $this;
	}
	
	public function loadProductDescription() {
		if (empty ($this->description)) {
			$this->description = ProductDataAccess::fetch()->loadProductDescription($this->product_id);
		}
		$this->description;
		return $this;
	}
	
	public function loadSlugDestination() {
		if (empty ($this->friendly_url)) {
			$this->friendly_url = ProductDataAccess::fetch()->loadSlugDestination($this->product_id);
		}
		$this->friendly_url;
		return $this;
	}

	public function loadProductLineProducts() {
		if (empty ($this->product_images)) {
			$this->loadProductSizes();
		}
		return $this->product_sizes;
	}
	
	public function loadProductSizes() {
		if (empty ($this->product_sizes)) {
			$this->product_sizes = ProductDataAccess::fetch()->loadProductSizes($this->product_id);
		}
		
		//$this->product_sizes;
		return $this;
	}


	public function getSizes() {
		return $this->__get('sizes');
	}


	/*protected function getBrandImages = function ( $this->brand_id ) {
		
	}*/ 

	/**
	 * Extract Product property out for clean UI display
	 * 
	 * @return array of Product property 
	 */
	public function getProductArray(){
		return (array) $this->properties;
	}

	
	/**
	 *
	 * @return Product 
	 */
	public function __toString(){
		return serialize($this);
	}
	
	public static function loadProductById($product_id) {
		if ((int)$product_id <= 0) {
			throw new \InvalidArgumentException();
		}
		$rows = ProductDataAccess::fetch()->loadProductById($product_id);
		//echo $product_id; exit;
		return new static($rows);
	}
	
	public static function loadProductBySlug($slug) {
		if ($slug == '') {
			throw new \InvalidArgumentException();
		}
		$row = ProductDataAccess::fetch()->loadProductBySlug($slug);
		return new Product($row);
	}
}
