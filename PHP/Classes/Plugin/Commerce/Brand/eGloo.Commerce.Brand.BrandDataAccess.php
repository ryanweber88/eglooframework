<?php
namespace eGloo\Commerce\Brand;
use \eGloo\DataProcessing\Connection;

/**
 * BrandDataAccess Class File
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
 * Description of BrandDataAccess
 * 
 * Representation of BrandDataAccess Entity
 * Hold CRUD functionalities and BrandDataAccess related method
 *
 * @package Plugins
 * @subpackage Commerce
 */
class BrandDataAccess extends Connection\PostgreSQLDBConnection {
	
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
	
	public function createBrand() {
		
		$this->beginTransaction();
	}
	
	/**
	 *
	 * @param type $brand_name
	 * @return type 
	 */
	public function loadBrandByName($brand_name) {
		if ($brand_name == '') {
			throw new Connection\DatabaseErrorException('::Missing argument error: brand_name is required!', __METHOD__);
		}
		return $this->loadBrand('name', $brand_name);
	}

	/**
	 *
	 * @param type $brand_id
	 * @return type 
	 */
	public function loadBrandById($brand_id) {
		if ($brand_id == '') {
			throw new Connection\DatabaseErrorException('::Missing argument error: brand_id is required!', __METHOD__);
		}
		return $this->loadBrand('brand_id', $brand_id);
	}

	/**
	 *
	 * @param type $field_name
	 * @param type $field_value
	 * @return type 
	 */
	public function loadBrand($field_name, $field_value) {
		if ($field_name == '' || $field_value == '') {
			throw new Connection\DatabaseErrorException('::Missing argument error', __METHOD__);
		}
		$sql = "SELECT * FROM brands WHERE {$field_name} = ? AND status = ?";
			
		return parent::getUnique($sql, array($field_value, 1), function ($row) {
							return $row;
		});
	}
	
	public function loadBrandList() {
		$sql = "SELECT brand_id, name FROM brands WHERE status = ? ORDER BY name ASC";
		return parent::getList($sql, array(1));
	}

		/**
	 *
	 * @param type $limit
	 * @param type $offset
	 * @return type 
	 */
	public function getBrandList($limit = null, $offset = null) {
		$result = array();
		if (isset ($limit) && $limit < 0 || isset ($offset) && $offset < 1) {
			throw new \Connection\DatabaseErrorException();
		}
		
		$sql = "SELECT * FROM organization o WHERE o.organization_status_id = 1 ORDER BY name ASC LIMIT ? OFFSET ?";	
		return parent::getList($sql, array($limit, $offset));
		
		/*foreach ($brand_result as $brand) {
			$brand['brand_images'] = $this->getBrandImages($brand['brand_id']);
			$brand['brand_products'] = $this->getBrandProducts($brand['brand_id']);
			$result[] = $brand;
		}
		return $result;*/
	}
	
	/** @todo Inject Cache object
	 * 
	protected function getCacheGetaway() {
		return CacheGateway::getCacheGateway();
	}
	
	protected function loadFromCache( $object) {
		
	}*/

	/**
	 *
	 * @param type $brand_id
	 * @return type 
	 */
	public function getBrandProducts($brand_id) {
		$result = array();
		if ($brand_id == '') {
			throw new Connection\DatabaseErrorException('::Missing argument error: brand_id is required!', __METHOD__);
		}
		$sql = 'SELECT * FROM product_line WHERE status = 1 and brand_id = ?';
		$product_lines = $this->executeQuery($sql, array($brand_id));

		foreach ( $product_lines as $product ) {
			$product['product_sizes'] = parent::executeQuery('SELECT * FROM product WHERE status = 1 
				and product_id = ?', array($product['product_line_id']));
			
			$product['product_images'] = parent::executeQuery('SELECT * FROM store_image_product_v 
				sip INNER JOIN image_file fi ON sip.image_id = fi.data_store_image_id 
				WHERE sip.product_line_id = ?', array($product['product_line_id']));
			$result[] = $product;
		}
		return $result;
	}
	
	/**
	 *
	 * @param type $brand_id
	 * @return type 
	 */
	public function loadBrandSlug($brand_id) {
		if ($brand_id == '') {
			throw new \Connection\DatabaseErrorException('::Missing argument error: brand_id is required!!', __METHOD__);
		}
		$sql = "SELECT dst FROM product_slug WHERE source ='B' AND value = ?";
		return parent::getUnique($sql, array($brand_id), function ($row) {
							return $row['dst'];
		});
	}

		/**
	 *
	 * @param type $brand_id
	 * @return type 
	 */
	public function getBrandImages($brand_id) {
		if ($brand_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: brand_id is required!!');
		}
		
		$sql = 'SELECT * FROM store_image_brand sib INNER JOIN image_file fi ON '
			 . 'sib.image_id = fi.data_store_image_id WHERE sib.brand_id = ?';
		$params = array($brand_id);
		return $this->executeQuery($sql, $params);
	}

	/**
	 * 
	 */
	public function countPublishedBrands() {
		
	}
}
