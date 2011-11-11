<?php
namespace eGloo\Plugin\Commerce\Product;

use \eGloo\DataProcessing\Connection\PostgreSQLDBConnection as PostgresDBConnection;
use \eGloo\Plugin\Commerce\Brand\Brand as Brand,
		\eGloo\Plugin\Commerce\Product\Product as Product;
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of eGloo
 *
 * @author gilbert
 */
class ProductRepository extends PostgresDBConnection {
	
	protected $products;
	
	public function __construct( $db_resource = null ) {
		parent::__construct( $db_resource );
	}
	
	public function getProduct($id) {
		return $this->products[$id];
	}
	
	public function getTopProducts () {
		$this->products = parent::getList('SELECT * from product_line pl INNER JOIN product p 
			ON pl.product_line_id = p.product_id
			WHERE pl.status = 1', array(),
				function ($index, $row) {
					return new Product($row);
		});
	}
	

	protected function getSavedProducts(){
		return $this->products;
	}
	
	public function __set( $key, $value ) {
		$this->products[$key] = $value;
		return $this;
	}
	
	public function __get( $key ) {
		if (array_key_exists($key, $this->products )) {
			return $this->products[$key];
		}
		return false;
	}


	public function getCachedProducts(){
		if (!empty ($this->products )){
			return $this->products;
		}
	}
}
