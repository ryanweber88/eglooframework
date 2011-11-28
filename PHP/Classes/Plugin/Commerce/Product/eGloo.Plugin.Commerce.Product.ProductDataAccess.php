<?php
namespace eGloo\Plugin\Commerce\Product;
use \eGloo\DataProcessing\Connection\PostgreSQLDBConnection;

/**
 * Description of eGloo
 *
 * @author gilbert
 */
class ProductDataAccess extends PostgreSQLDBConnection {
	
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
		if ($user_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: product_id is required!', __METHOD__);
		}
	}
	
	public function loadProductByName($product_name) {
		if ($user_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: product_name is required!', __METHOD__);
		}
		return $this->loadBrand('name', $brand_name);
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
	
	public function deleteProductById($user_id) {
		if ($user_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: product_id is required!', __METHOD__);
		}
		
	}
	
	public function deleteProductByName($product_name) {
		if ($user_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: product_name is required!', __METHOD__);
		}
		
	}
	
	
	public function loadProductCategory($category_id) {
		$result = array();
		$sql = 'SELECT * FROM product_tag_subcategory WHERE product_tag_category_id = ?';
		$categories = parent::executeQuery($sql, array($category_id));
		foreach ($categories as $category) {
			$result[$category['product_tag_category_id']][] = $category['title'];
		}
		return $result;
	}
	
}