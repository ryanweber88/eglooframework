<?php
namespace eGloo\Plugin\Commerce\Brand;
use \eGloo\DataProcessing\Connection;
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of eGloo
 *
 * @author gilbert
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
		//return $this->executeQuery($sql, array($field_value, 1));
		
		return parent::getUnique($sql, array($field_value, 1), function ($row) {
							return $row;
		});
	}
	
	public function loadBrandList() {
		$sql = "SELECT brand_id, name FROM brands WHERE status = ? ORDER BY name ASC";
		return $this->executeQuery($sql, array(1));
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
		
		$sql = "SELECT * FROM brands b WHERE b.status = 1 LIMIT ? OFFSET ?";	
		$brand_result = $this->executeQuery($sql, array($limit, $offset));
		
		foreach ($brand_result as $brand) {
			$brand['brand_images'] = $this->getBrandImages($brand['brand_id']);
			$brand['brand_products'] = $this->getBrandProducts($brand['brand_id']);
			$result[] = $brand;
		}
		return $result;
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
		$sql = '';
		return 'brand/';
	}

		/**
	 *
	 * @param type $brand_id
	 * @return type 
	 */
	public function getBrandImages($brand_id) {
		if ($brand_id == '') {
			throw new \Connection\DatabaseErrorException('::Missing argument error: brand_id is required!!', __METHOD__);
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
