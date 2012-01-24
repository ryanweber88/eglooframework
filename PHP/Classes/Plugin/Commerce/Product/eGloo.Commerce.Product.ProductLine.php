<?php
namespace eGloo\Commerce\Product;

/**
 * Product Line Class File
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
 * Product Line contitute the upper category.
 * A product line can have multiple products
 * 
 * Representation of Brand Entity
 * Hold CRUD functionalities and Brand related method
 *
 * @package Plugin
 * @subpackage Commerce
 */
class ProductLine {
	
	/** @var integer Product ID */
	public			$product_line_id;

	/** @var string Name */
	public			$title;
	
	/** @var string Product Brand ID */
	public			$brand_id;
	
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
	protected		$recurring_ok;

	/** @var array list user objects */
	public static	$config = array();
	
	protected		$properties;

	/**
	 * Create a new Product object
	 * 
	 * @param array $args optional
	 */
	public function __construct ( array $args = null ) {
		
		foreach ( $args as $key => $value ){
			$this->{$key} = $value;
		}
	}
	
	public function loadImages( $id = null ) {
		if (isset ($this->product_line_id )) {
			$this->images = array();
		}
		return false;
	}
	
	public function loadProductLineProducts() {
		
	}
	
	public function loadProductSizes() {

	}


	public static function loadProductBySlug($slug) {
		if ($slug == '') {
			throw new \InvalidArgumentException();
		}
		$row = ProductDataAccess::fetch()->loadProductBySlug($slug);
		return new Product($row);
	}
}
