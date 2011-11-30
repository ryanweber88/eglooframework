<?php
namespace eGloo\Plugin\Commerce\Product;
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of eGloo
 *
 * @author gilbert
 */
class ProductCategory {
	
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
	
	public static function loadSpecies() {
		return ProductDataAccess::fetch()->loadProductCategory(self::SPECIES);
	}
	
	public static function loadAges() {
		return ProductDataAccess::fetch()->loadProductCategory(self::AGE);
	}
	
	public static function loadLifestyles() {
		return ProductDataAccess::fetch()->loadProductCategory(self::LIFESTYLE);
	}
	
	public static function loadConditions() {
		return ProductDataAccess::fetch()->loadProductCategory(self::CONDITIONS);
	}
	
	public static function loadCategories() {
		return ProductDataAccess::fetch()->loadProductCategory(self::CATEGORY);
	}
	
	public static function loadProductCategories() {
		$result = array();
		$result['Pets']			= self::loadSpecies();
		$result['Ages']			= self::loadAges();
		$result['Lifestyles']	= self::loadLifestyles();
		$result['Conditions']	= self::loadConditions();
		$result['Categories']	= self::loadCategories();
		return $result;
	}
}