<?php
namespace eGloo\Commerce\Logistic;
use \eGloo\DataProcessing\Connection\PostgreSQLDBConnection;

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
class WarehouseDataAccess extends PostgreSQLDBConnection {
	
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
	
	
	public function loadProductCategory($category_id) {
		$result = array();
		$sql = 'SELECT * FROM product_tag_subcategory WHERE product_tag_category_id = ? ORDER BY title ASC';
		$categories = parent::executeQuery($sql, array($category_id));
		foreach ($categories as $category) {
			$result[] = $category['title'];
		}
		return $result;
	}
	
	public function loadProductSizes($product_id) {
		if ($product_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: product_id is required!', __METHOD__);
		}
		$sql = 'SELECT * FROM product WHERE product_id = ?';
		return parent::executeQuery($sql, array($product_id));
	}
	
	public function loadProductImages($product_id) {
		if ($product_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: product_id is required!', __METHOD__);
		}
		$sql = 'SELECT * FROM store_image_product_v sip INNER JOIN image_file fi 
			ON sip.image_id = fi.data_store_image_id WHERE sip.product_line_id = ?';
		return parent::executeQuery($sql, array($product_id));
	}


	public function loadProductBySlug($slug) {
		if ($slug == '') {
			throw new \InvalidArgumentException('::Missing argument error: product slug is required!', __METHOD__);
		}
		
		$sql = "SELECT value FROM product_slug_v ps WHERE ps.source = 'P' AND ps.dst = ?";
		$product_id = parent::getUnique($sql, array($slug), function ($row) {
							return $row['value'];
		});
		
		if ((int)$product_id < 0 ) {
			throw new Connection\DatabaseErrorException('[: Unable to locate product :]', $slug);
		}
		$sql = 'SELECT * FROM product_line pl WHERE product_line_id = ?';
		return parent::getUnique($sql, array($product_id), function ($row) {
							return $row;
		});
	}
}