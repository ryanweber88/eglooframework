<?php
namespace eGloo\Plugin\Commerce\Brand;
use eGloo\DataProcessing\Connection\PostgreSQLDBConnection;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of eGloo
 *
 * @author gilbert
 */
class BrandRepository extends PostgreSQLDBConnection {
	
	private $brands;


	public function __construct( array $args = null ) {
		$this->brands = parent::__construct( $args );	
	}
	
	public function find( $id ){
		return parent::getUnique("SELECT * FROM brands WHERE brand_id = ?", array( $id ),
				function( $row ) {
					return new Brand($row);
				});
	}
	
}
