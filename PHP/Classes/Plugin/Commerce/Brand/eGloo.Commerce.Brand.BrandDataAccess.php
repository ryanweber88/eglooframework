<?php
namespace eGloo\Commerce\Brand;

use \eGloo\Commerce;
use \eGloo\Domain;
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
class BrandDataAccess extends Domain\Data {
	
	
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
			throw new \InvalidArgumentException('::Missing argument error: brand_name is required!', __METHOD__);
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
			throw new \InvalidArgumentException('::Missing argument error: brand_id is required!', __METHOD__);
		}
		//return $this->loadBrand('brand_id', $brand_id);
		$sql = 'SELECT o.organization_id AS brand_id, o.organization_id, o.name, b.requires_prescription, '
			 . 'brand_status_id FROM organization o INNER JOIN brand b ON o.organization_id='
			 . 'b.brand_id WHERE o.organization_status_id=1 AND b.brand_id = ? ORDER BY name ASC';
		
		return parent::getUnique($sql, array($brand_id));
	}

	/**
	 *
	 * @param type $field_name
	 * @param type $field_value
	 * @return type 
	 */
	public function loadBrand($field_name, $field_value) {
		if ($field_name == '' || $field_value == '') {
			throw new \InvalidArgumentException('::Missing argument error', __METHOD__);
		}
		$sql = "SELECT * FROM brand WHERE {$field_name} = ?";		
		return parent::getUnique($sql, array($field_value));
	}
	
	public function loadBrandList() {
		$sql = 'SELECT o.organization_id AS brand_id, o.organization_id, o.name, b.requires_prescription, '
			 . 'brand_status_id FROM organization o INNER JOIN brand b ON o.organization_id='
			 . 'b.brand_id WHERE o.organization_status_id=1 AND b.brand_status_id=1 ORDER BY name ASC';
		return parent::executeSelect($sql);
	}

		/**
	 *
	 * @param type $limit
	 * @param type $offset
	 * @return type 
	 * @note this should be made static
	 */
	public function getBrandList($limit = null, $offset = null) {
		$result = array();

		if (isset ($limit) && $limit < 0 || isset ($offset) && $offset < 1) {
			throw new \InvalidArgumentException();
		}
		
		
		$sql = 
			'SELECT 
			 	o.organization_id AS brand_id, 
			 	o.name, 
			 	b.requires_prescription,
			 	b.brand_status_id 
			 FROM 
			 	organization o 
			 INNER JOIN 
			 	brand b ON o.organization_id = b.brand_id 
			 WHERE o.organization_status_id = 1 ORDER BY name ASC LIMIT ? OFFSET ?';

		//$sql = 'SELECT current_database()';

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
			throw new \InvalidArgumentException('::Missing argument error: brand_id is required!', __METHOD__);
		}
		
		$sql = 'SELECT p.brand_id, p.product_id, p.title, bd.description AS product_body,'
			 . 'po.product_option_id, po.sku, po.base_retail_price, po.competitor_markup,'
			 . 'po.recurring_only, pos.size_description FROM product p LEFT JOIN '
			 . 'product_description bd ON p.product_id=bd.product_id '
			 . 'INNER JOIN product_option po ON p.product_id=po.product_id '
			 . 'INNER JOIN product_migrated_selection pos '
			 . 'ON po.product_option_id=pos.product_option_id WHERE p.brand_id=?'
			 . ' AND po.status_id=1 AND bd.description_type="body"';
		
		return parent::getList($brand_id);
		
		/*$sql = 'SELECT * FROM product_line WHERE status = 1 and brand_id = ?';
		$product_lines = $this->executeQuery($sql, array($brand_id));

		foreach ( $product_lines as $product ) {
			$product['product_sizes'] = parent::executeQuery('SELECT * FROM product WHERE status = 1 
				and product_id = ?', array($product['product_line_id']));
			
			$product['product_images'] = parent::executeQuery('SELECT * FROM store_image_product_v 
				sip INNER JOIN image_file fi ON sip.image_id = fi.data_store_image_id 
				WHERE sip.product_line_id = ?', array($product['product_line_id']));
			$result[] = $product;
		}
		return $result;*/
	}
	
	/**
	 *
	 * @param type $brand_id
	 * @return type 
	 */
	public function loadBrandSlugByID($brand_id) {
		if ($brand_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: brand_id is required!!', __METHOD__);
		}
		$sql = 'SELECT u.destination, u.url_slug_id, u.url_slug_type_id, bu.brand_id FROM '
			 . 'url_slug u INNER JOIN brand_slug bu ON u.url_slug_id=bu.url_slug_id WHERE '
			 . 'bu.brand_id=?;';
		return parent::getUnique($sql, array($brand_id));
	}
	
	public function loadBrandSlugDestination($brand_id) {
		if ($brand_id == '') {
			throw new DatabaseErrorException('::Missing argument error: brand_id is required!!', __METHOD__);
		}
		$sql = 'SELECT u.destination FROM '
			 . 'url_slug u INNER JOIN brand_slug bu ON u.url_slug_id=bu.url_slug_id WHERE '
			 . 'bu.brand_id=?;';
		$result = parent::getUnique($sql, array($brand_id));
		return !empty($result) ? array_pop($result) : false;
	}

	/**
	 *
	 * @param type $brand_id
	 * @return type 
	 */
	public function getBrandImagesByID($brand_id) {
		if ($brand_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: brand_id is required!!');
		}
		
		$sql = 'SELECT cf.cloudfront_file_id, cf.cloudfront_file_name, cf.cloudfront_bucket,'
			 . 'cb.distribution_url, cf.file_bucket, cf.file_store, cf.mime_type,'
			 . 'cf.file_uri, cf.file_zone, cf.original_file_path, cf.file_association_type,'
			 . 'bf.brand_id, bf.file_modulation, bf.file_descriptor FROM cloudfront_bucket cb'
			 . ' INNER JOIN cloudfront_file cf ON cb.cloudfront_bucket=cf.cloudfront_bucket'
			 . ' INNER JOIN brand_file bf ON cf.cloudfront_file_id=bf.cloudfront_file_id '
			 . ' WHERE brand_id=?';
		$params = array($brand_id);
		return parent::getList($sql, $params);
	}
	
	public function loadFilteredImages($brand_id) {
		if ($brand_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: brand_id is required!!');
		}
		
		$sql = 'SELECT cf.cloudfront_file_id, cf.cloudfront_file_name, cf.cloudfront_bucket,'
			 . 'cb.distribution_url, cf.file_bucket, cf.file_store, cf.mime_type,'
			 . 'cf.file_uri, cf.file_zone, cf.original_file_path, cf.file_association_type,'
			 . 'bf.brand_id, bf.file_modulation, bf.file_descriptor FROM cloudfront_bucket cb'
			 . ' INNER JOIN cloudfront_file cf ON cb.cloudfront_bucket=cf.cloudfront_bucket'
			 . ' INNER JOIN brand_file bf ON cf.cloudfront_file_id=bf.cloudfront_file_id '
			 . ' WHERE brand_id=?';
		$params = array($brand_id);
		
		return parent::executeSelect($sql, $params);
	}

	/**
	 * 
	 */
	public function countPublishedBrands() {
		
	}
}
