<?php
namespace eGloo\Commerce\Order;
use eGloo\Plugin\Commerce;

/**
 * Order Class File
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
 * Description of Order
 *
 * Representation of Order Entity
 * Hold CRUD functionalities and Order related method
 *
 * @package Plugins
 * @subpackage Commerce
 */
class Order {

	/** @var integer Order id */
	public		$order_id;

	/** @var string Order email address */
	public		$user_id;

	/** @var integer 1/0 for active Order */
	public		$order_status_id;

	/** @var integer 1/0 for deleted Order */
	public		$program_id;

	/** @var string created date */
	public		$process_date;
	
	/** @var string created date */
	public		$estimated_ship_date;
	
	/** @var integer Payment */
	public		$payment_option_id;
	
	public		$shipping_address_id;

	/** @var string deleted date */
	public		$deleted_date;

	/** @var string updated date */
	public		$updated_date;
	
	protected	$order_products = array();


	protected	$properties;
	
	const	_STATUS_NEED_ACTION		= 1,
			_STATUS_ASSEMBLY		= 2,
			_STATUS_BACKORDER		= 3,
			_STATUS_CANCELED		= 4,
			_STATUS_CC_EXPIRED		= 5,
			_STATUS_CC_FAILED		= 6,
			_STATUS_PROCESSING		= 7,
			_STATUS_SCHEDULED		= 8,
			_STATUS_SHIPPED			= 9,
			_STATUS_WAREHOUSE_ISSUE = 10,
			_STATUS_WAREHOUSE_QUEUE = 11,
			_STATUS_SUSPECT			= 12;

	public function __construct($args) {
		foreach ( $args as $key => $value ){
			$this->{$key} = $value;
		}
	}
	
	

	/**
	 * Populate data int the Product object
	 * 
	 * @param type $key
	 * @param type $value 
	 */	
	public function __set($key, $value) {
		$this->properties[$key] = $value;
		return $this;
	}
	
	/**
	 * Getter for the Product Object
	 * @param type $key
	 * 
	 * @return mix type object retrieved from Product
	 */
	public function __get($key) {
		
		if (property_exists($this, $key)) {
			$method = preg_replace('/(^|_)([a-z])/e', 'ucfirst("\\2")',  $key);
	
			if ( method_exists($this, 'load'. $method) ) {
				return call_user_func(array($this, 'load' . $method));
			} else {
				throw new \Exception('Undefined Method '. $method . ' invoqued');
			}
				
		} elseif ( isset($this->properties[$key] )) {
			return $this->properties[$key];
		}
		return false;
	}
	
	
	public static function loadOrderByZipCode($zip_code) {
		$result = array();
		if ((int) $zip_code == '') {
			throw new \InvalidArgumentException();
		}
		$orders = Commerce\Order\OrderDataAccess::loadOrderByZipCode($zip_code);
		foreach ($orders as $order) {
			$result[] = new Order($order);
		}
		return $result;
	}

	public static function loadOrderByEmail($email) {
		$result = array();
		if ($email == '') {
			throw new \InvalidArgumentException();
		}
		$orders = Commerce\Order\OrderDataAccess::loadOrderByEmail($email);
		foreach ($orders as $order) {
			$result[] = new Order($order);
		}
		return $result;
	}

	public static function loadOrderByCreditCardCode($cc_code) {
		$result = array();
		if ((int) $cc_code == '') {
			throw new \InvalidArgumentException();
		}
		$orders = Commerce\Order\OrderDataAccess::loadOrderByCCCode($cc_code);
		foreach ($orders as $order) {
			$result[] = new Order($order);
		}
		return $result;
	}

	public static function loadOrderByState($state) {
		$result = array();
		if ((int) $state == '') {
			throw new \InvalidArgumentException();
		}
		$orders = Commerce\Order\OrderDataAccess::loadOrderByState($state);
		foreach ($orders as $Order) {
			$result[] = new Order($Order);
		}
		return $result;
	}


	public static function loadOrderByProgramId($program_id) {
		$result = array();
		if ((int) $program_id == '') {
			throw new \InvalidArgumentException();
		}
		$orders = Commerce\Order\OrderDataAccess::loadOrderProgramId($program_id);
		foreach ($Orders as $order) {
			$result[] = new Order($order);
		}
		return $result;
	}


//	public static function loadByID($order_id) {
//		$result = array();
//		if ($order_id == '') {
//			throw new \InvalidArgumentException();
//		}
//		$orders = OrderDataAccess::loadOrderByOrderId($order_id);
//		foreach ($rders as $order) {
//			$result[] = new Order($order);
//		}
//		return $result;
//	}


	public static function createOrderFromArray(array $args) {
		return ;
	}
}