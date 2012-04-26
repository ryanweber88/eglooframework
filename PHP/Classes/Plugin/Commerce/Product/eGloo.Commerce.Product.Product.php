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

	public function getSizes() {
		return $this->__get('sizes');
	}

	/**
	 * Extract Product property out for clean UI display
	 * 
	 * @return array of Product property 
	 */
	public function getProductArray(){
		return (array) $this->properties;
	}

}