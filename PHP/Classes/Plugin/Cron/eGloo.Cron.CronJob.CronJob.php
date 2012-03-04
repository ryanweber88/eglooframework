<?php
namespace eGloo\Cron\CronJob;

use \eGloo\Cron;
use \eGloo\Domain;

/**
 * eGloo\Cron\CronJob\CronJob Class File
 *
 * Contains the class definition for the eGloo\Cron\CronJob\CronJob
 * 
 * Copyright 2012 eGloo LLC
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
 * @author George Cooper
 * @copyright 2012 eGloo LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @category Plugins
 * @package Cron
 * @subpackage CronJob
 * @version 1.0
 */

/**
 * eGloo\Cron\CronJob\CronJob
 *
 * Representation of CronJob Entity
 *
 * @category Plugins
 * @package Cron
 * @subpackage CronJob
 */
class CronJob extends Domain\Model {

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

	public static function loadProductById($product_id) {
		if ((int)$product_id <= 0) {
			throw new \InvalidArgumentException();
		}
		$rows = ProductDataAccess::fetch()->loadProductById($product_id);
		//echo $product_id; exit;
		return new static($rows);
	}

}
