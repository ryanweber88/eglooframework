<?php
namespace eGloo\Plugin\Commerce\Order;
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
	public $order_id;

	/** @var string Order email address */
	public $order_email;

	/** @var integer 1/0 for active Order */
	public $is_active = 1;

	/** @var integer 1/0 for deleted Order */
	public $is_deleted = 0;

	/** @var string created date */
	public $created_date;

	/** @var string deleted date */
	public $deleted_date;

	/** @var string updated date */
	public $updated_date;



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


	public static function loadOrderByOrderId($order_id) {
		$result = array();
		if ((int) $order_id == '') {
			throw new \InvalidArgumentException();
		}
		$orders = Commerce\Order\OrderDataAccess::loadOrderByOrderId($order_id);
		foreach ($rders as $order) {
			$result[] = new Order($order);
		}
		return $result;
	}


	public static function createOrderFromArray(array $args) {
		return ;
	}
}