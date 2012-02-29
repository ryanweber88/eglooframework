<?php
namespace eGloo\Commerce\Product;

use \eGloo\Domain;

/**
 * ProductCategory Class File
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
 * Description of ProductCategory
 * 
 * Representation of ProductCategory Entity
 * Hold CRUD functionalities and ProductCategory related method
 *
 * @package Plugins
 * @subpackage Commerce
 */
class ProductCategory extends Domain\Model {
	
	const SPECIES		= 10;
	const AGE			= 20;
	const LIFESTYLE		= 30;
	const CONDITIONS	= 40;
	const CATEGORY		= 50;
	
	public function createCategory() {
		
	}
		
	/*public static function loadBrandById($brand_id) {
		if ((int)$brand_id <= 0) {
			throw new \InvalidArgumentException();
		}
		$rows = BrandDataAccess::fetch()->loadBrandById($brand_id);
		return new Brand($rows);
	}*/
	
	public static function loadCategories() {
		return ProductDataAccess::fetch()->loadCategories();
	}


	public static function loadProductSpecies() {
		return ProductDataAccess::fetch()->loadProductSubCategoriesById(self::SPECIES);
	}
	
	public static function loadProductAges() {
		return ProductDataAccess::fetch()->loadProductSubCategoriesById(self::AGE);
	}
	
	public static function loadProductLifestyles() {
		return ProductDataAccess::fetch()->loadProductSubCategoriesById(self::LIFESTYLE);
	}
	
	public static function loadProductConditions() {
		return ProductDataAccess::fetch()->loadProductSubCategoriesById(self::CONDITIONS);
	}
	
	public static function loadProductCategories() {
		return ProductDataAccess::fetch()->loadProductSubCategoriesById(self::CATEGORY);
	}
	
	/**
	 * Method to load Product Categories and Subcategories
	 * 
	 * @todo Pets and Species are redondant but useful for lagacy codes
	 * @todo remove Pets 
	 * 
	 * @return array of Categories + Subcategories
	 */
	public static function loadProductSubCategories() {
		$result = array();
		$result['Pets']			= self::loadProductSpecies();
		$result['Species']		= self::loadProductSpecies();
		$result['Age']			= self::loadProductAges();
		$result['Lifestyle']	= self::loadProductLifestyles();
		$result['Conditions']	= self::loadProductConditions();
		$result['Category']		= self::loadProductCategories();
		return $result;
	}
}