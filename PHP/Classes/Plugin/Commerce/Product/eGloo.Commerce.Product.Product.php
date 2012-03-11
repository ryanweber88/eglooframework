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
 * Representation of Product Entity
 * Hold CRUD functionalities and Product related method
 *
 * @package Plugin
 * @subpackage Commerce
 */
class Product extends Domain\Model {


	
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
	
	public static function loadProductById($product_id) {
		if ((int)$product_id <= 0) {
			throw new \InvalidArgumentException();
		}
		$rows = ProductDataAccess::fetch()->loadProductById($product_id);
		//echo $product_id; exit;
		return new static($rows);
	}
	

}