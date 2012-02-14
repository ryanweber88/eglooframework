<?php
namespace eGloo\Commerce\Product;

use \eGloo\Commerce;
use \eGloo\DataProcessing\Connection\PostgreSQLDBConnection;
use \eGloo\Domain;

/**
 * ProductDataAccess Class File
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
 * Description of ProductDataAccess
 * 
 * Representation of ProductDataAccess Entity
 * Hold CRUD functionalities and ProductDataAccess related method
 *
 * @package Plugins
 * @subpackage Commerce
 */
class ProductDataAccess extends Domain\Data {
	
	/** @var resource Object */
	protected static $instance = null;
	
	/**
	 * Overwrite $rawConnectionResource setting in connection file
	 * 
	 * @param resource $rawConnectionResource = null
	 * @return void
	 */
	public function __construct() {}
	
	/**
	 * Create an instance of the class
	 * Delegate class to access Database layer
	 * 
	 * @return $this class object
	 */
	public static function fetch () {
		if (static::$instance === null) {
			static::$instance = new self();
		}
		return static::$instance;
	}
	
	public function loadProductById($product_id) {
		if ($product_id == '') {
			throw new \InvalidArgumentException('[: Missing argument error:] product_id is required!', __METHOD__);
		}
	}
	
	public function loadProductByName($product_name) {
		if ($product_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: product_name is required!', __METHOD__);
		}
		return $this->loadBrand('name', $product_name);
	}

	public function loadProduct($field_name, $field_value) {
		if ($field_name == '' || $field_value == '') {
			throw new \InvalidArgumentException('::Missing argument error', __METHOD__);
		}
		$sql = '';
		return parent::getUnique($sql, array($field_value, 1), function ($row) {
							return $row;
		});
	}
	
	public function deleteProductById($product_id) {
		if ($product_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: product_id is required!', __METHOD__);
		}
		
	}
	
	public function deleteProductByName($product_name) {
		if ($product_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: product_name is required!', __METHOD__);
		}
		
	}
		
	public function loadProductIngredients($product_id) {
		if ($product_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: product id is required!', __METHOD__);
		}
		$sql = 'SELECT description AS ingredients FROM product_description'
			 . ' WHERE description_type=? AND product_id=?';
		$result =  parent::getUnique($sql, array('ingredients', $product_id));
		return !empty($result) ? $result['ingredients'] : '';
	}
	
	public function loadProductDescription($product_id) {
		if ($product_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: product id is required!', __METHOD__);
		}
		$sql = 'SELECT description AS body FROM product_description'
			 . ' WHERE description_type=? AND product_id=?';
		$result = parent::getUnique($sql, array('body', $product_id));
		return !empty($result) ? $result['body'] : '';
	}

	public function loadCategories() {
		$result = array();
		$rows = parent::getList('SELECT * FROM product_tag_category', array());
		foreach ($rows as $category) {
			$result[$category['product_tag_category_id']] = $category['title'];
		}
		return $result;
	}
	
	public function loadSubCategoriesByCategoryId($category_id) {
		if ($category_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: category id is required!', __METHOD__);
		}
	}
	
	public function loadSubCategoriesByCategoryName($category_name) {
		if ($category_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: category Name is required!', __METHOD__);
		}
	}

	public function loadProductAttributes() {
		$sql = 'SELECT product_category_id, product_category, parent_category_id,
				parent_category FROM product_classification_meta_data;';
		
		return parent::getList($sql);
	}

	public function loadProductSubCategoriesById($category_id) {
		$result = array();
		$sql = 'SELECT * FROM product_tag_subcategory WHERE product_tag_category_id = ? ORDER BY title ASC';
		$categories = parent::getList($sql, array($category_id));
		foreach ($categories as $category) {
			$result[$category['product_tag_subcategory_id']] = $category['title'];
		}
		return $result;
	}
	
	public function loadProductSizes($product_id) {
		if ($product_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: product_id is required!', __METHOD__);
		}
		$sql = 'SELECT pro.product_option_id, pro.product_id, pro.sku, pro.status_id, '
			 . 'pro.base_retail_price, pro.competitor_markup, pro.suggested_retail_price, '
			 . 'pro.order_limit, pro.max_per_order, pro.recurring_only, '
			 . 'pro.required_interval, psel.size_description FROM '
			 . 'product_option pro INNER JOIN product_migrated_selection psel ON '
			 . 'pro.product_id=psel.product_id WHERE pro.product_id=?';
		return parent::getList($sql, array($product_id));
	}
	
	public function loadProductImages($product_id) {
		if ($product_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: product_id is required!', __METHOD__);
		}
		$sql = 'SELECT cf.cloudfront_file_id, cf.cloudfront_file_name, cf.cloudfront_bucket,'
			 . 'cb.distribution_url, cf.file_bucket, cf.file_store, cf.mime_type, cf.file_uri,'
			 . 'cf.file_zone, cf.original_file_path, cf.file_association_type, bf.product_id,'
			 . 'bf.file_modulation, bf.file_descriptor FROM cloudfront_bucket cb INNER JOIN'
			 . ' cloudfront_file cf ON cb.cloudfront_bucket=cf.cloudfront_bucket'
			 . ' INNER JOIN product_file bf ON cf.cloudfront_file_id=bf.cloudfront_file_id'
			 . ' WHERE product_id=?';
		return parent::getList($sql, array($product_id));
	}


	public function loadProductBySlug($slug) {
		if ($slug == '') {
			throw new \InvalidArgumentException('::Missing argument error: product slug is required!', __METHOD__);
		}
		$sql = 'SELECT p.product_id, p.brand_id, p.title, p.product_status_id, '
			 . ' p.requires_prescription, p.classification, p.order_limit, p.max_per_order FROM'
			 . ' url_slug us INNER JOIN product_slug ps ON us.url_slug_id=ps.url_slug_id'
			 . ' INNER JOIN product p ON ps.product_id=p.product_id WHERE us.destination = ?;';
		return parent::getUnique($sql, array($slug));
	}
	
	public function loadSlugDestination ($product_id) {
		if ($product_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: product_id is required!', __METHOD__);
		}
		$sql = 'SELECT u.destination FROM url_slug u INNER JOIN product_slug bu ON '
			 . 'u.url_slug_id=bu.url_slug_id WHERE bu.product_id=?;';
		
		$result = parent::getUnique($sql, array($product_id));
		return !empty($result) ? $result['destination'] : '';
	}
}