<?php
namespace eGloo\Plugin\Commerce\Brand;
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of eGloo
 *
 * @author gilbert
 */
class Brand {
	/** @var integer Brand ID */
	public		$id_brand;

	/** @var string Name */
	public 		$name;

	/** @var string description */
	public 		$description;

	/** @var string creation date */
	public 		$date_added;

	/** @var string last modification date */
	public 		$date_updated;

	/** @var boolean active */
	public		$active;
	
	/** @var array list of products under brand */
	protected	$brand_products = array();
	
	/** @var array list of brand images */
	protected	$brand_iamges = array();
	
	public function __construct ( $args ) {
		
	}
	
	/**
	 * Extract brand property out for clean UI display
	 * 
	 * @return array of brand property 
	 */
	public function getBrandArray(){
		$result = array();
		if (isset ($this->id_brand)){
			$result['id_brand']			= $this->id_brand;
			$result['brand_name']		= $this->name;
			$result['description']		= $this->description;
			$result['date_added']		= $this->date_added;
			$result['date_updated']		= $this->date_updated;
			$result['active']			= $this->active;
			$result['brand_products']	= $this->brand_products;
			$result['brand_images']		= $this->brand_images;
		} 
		return $result;
	}
}

