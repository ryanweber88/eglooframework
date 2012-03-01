<?php
namespace eGloo\Commerce\Order;
use eGloo\DataProcessing\Connection;

/**
 * OrderDataAccess Class File
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
 * Description of OrderDataAccess
 *
 * Representation of Order Entity
 *
 *
 * @package Plugins
 * @subpackage Commerce
 */
class OrderDataAccess extends Model\Data {


	/**
	 * Pass Connection resource to parent constructor
	 * if needed
	 * @return void
	 */
	protected function __construct() { }

	/**
	 * Generate an instance of this class
	 * @return object of this class
	 */
	public static function fetch () {
		if (static::$instance === null) {
			static::$instance = new Order\OrderDataAccess();
		}
		return static::$instance;
	}

	public function createOrder ($uname, $pwd, $priv) {
		if ($uname == '' || $password == '' || $priv == '') {
			throw new \InvalidArgumentException();
		}
		$this->beginTransaction();
		try {

		} catch (\Exception $e) {
			throw  $e;
		}
	}

	public function loadOrderById($Order_id) {
		if ($Order_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: Order_id is required!', __METHOD__);
		}
	}

	public function loadOrderByName($Order_name) {
		if ($Order_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: Order_name is required!', __METHOD__);
		}
	}

	public function loadOrder($field_name, $field_value) {
		if ($field_name == '' || $field_value == '') {
			throw new \InvalidArgumentException('::Missing argument error', __METHOD__);
		}
		$sql = '';
		return parent::getUnique($sql, array($field_value, 1), function ($row) {
							return $row;
		});
	}

	public function deleteOrderById($Order_id) {
		if ($Order_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: Order_id is required!', __METHOD__);
		}

	}

	public function deleteSessionByName($Order_name) {
		if ($Order_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: Order_name is required!', __METHOD__);
		}

	}
}