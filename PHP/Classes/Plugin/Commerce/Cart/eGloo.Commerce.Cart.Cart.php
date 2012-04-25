<?php
namespace eGloo\Commerce\Cart;

use \eGloo\Commerce,
    \eGloo\Utility,
    \eGloo\Domain; 

use \Common\Domain\Model\Session;

/**
 * Address Class File
 *
 * file_block_description
 *
 * Copyright 2010 eGloo, LLC
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
 * @author		Gilbert Sewovoe-Ekoue <gilbert@petflow.com>
 * @copyright	2010 eGloo, LLC
 * @license		http://www.apache.org/licenses/LICENSE-2.0
 * @package		Package
 * @subpackage	Subpackage
 * @version		1.0
 */

/**
 * Address
 *
 * Short description for Address
 *
 * Long description for Address
 *
 * @author		Gilbert Sewovoe-Ekoue <gilbert@petflow.com>
 * @package		Package
 * @subpackage	Subpackage
 * @version		Release: 1.0
 */
class Cart extends Domain\Model {

	
	public static $cart_id	= null;
	public $items			= array();
	protected $total		= 0.0;

	const	CART_ACTION_USER_ADD		= 1,
			CART_ACTION_CUST_SERV_ADD	= 2,
			CART_ACTION_COUPON_ADD		= 3,
			CART_ACTION_CLEAR			= 4,
			CART_ACTION_DEAMON_ADD		= 5; 
	
	const	CART_PROGRESS_ADD			= 1,
			CART_PROGRESS_VIEW			= 2,
			CART_PROGRESS_SIGN_OUT		= 3,
			CART_PROGRESS_SIGN_IN		= 4,
			CART_PROGRESS_COMPLETED		= 5;
	
	const	ITEM_WEIGHT_UNIT			= 'LB',
			ITEM_SIZE_UNIT				= 'IN';
	
	protected $currency					= 'USD';

	public static function newActiveCart() {
		static::setActiveCartID();
	}

	public static function setActiveCartID( $cart_id = null, $cart_session_id = null, $cart_user_id = null, $create_cart = true ) {
		if ( !is_null($cart_id) && is_numeric($cart_id) && $cart_id > 0 ) {
			// Look up via cart_id
			$_SESSION['cart_id'] = static::$cart_id = $cart_id;
		} else if ( is_null($cart_id) && !is_null($cart_session_id) ) {
			// Look up via session_id
			// static::$cart_id = $cart_id;
			// $_SESSION['cart_id'] = static::$cart_id;
		} else if ( is_null($cart_id) && is_null($cart_session_id) && !is_null($cart_user_id) ) {
			// Look up via user_id
			// static::$cart_id = $cart_id;
			// $_SESSION['cart_id'] = static::$cart_id;
		} else if ( $create_cart ) {
			// Generate one
			$session = Session::find_one_by_php_session_id( session_id() );

			$cart = new static(
				array
					(
					'session_id' => $session->id,
					'user_id' => \User::getActiveUserID(),
					'cart_progress_id' => self::CART_PROGRESS_ADD,
					'last_action' => 'I',
					'last_action_taken' => date('Y-m-d H:i:s', time()),
					'action_by' => \User::getActiveUserID(),
					)
			);

			$cart->save();

			static::$cart_id = $_SESSION['cart_id'] = $cart->id;
		}

		return true;
	}

	public static function getActiveCartID( $cart_session_id = null, $cart_user_id = null, $create_cart = true ) {
		$retVal = null;
		
		if ( !is_null(static::$cart_id) && is_numeric(static::$cart_id) && static::$cart_id > 0 ) {
			// Look up via cart_id
			$retVal = $_SESSION['cart_id'] = static::$cart_id;
		} else if ( is_null(static::$cart_id) && !is_null($cart_session_id) ) {
			// Look up via session_id
			// static::$cart_id = $cart_id;
			// $_SESSION['cart_id'] = static::$cart_id;
		} else if ( is_null(static::$cart_id) && is_null($cart_session_id) && !is_null($cart_user_id) ) {
			// Look up via user_id
			// static::$cart_id = $cart_id;
			// $_SESSION['cart_id'] = static::$cart_id;
		// } else if ( isset(static::$cart_id) ) {
		// 	// Grab from session
		} else if ( isset($_SESSION['cart_id']) ) {
			$retVal = static::$cart_id = $_SESSION['cart_id'];
		} else if ( $create_cart ) {
			// Generate one
			$session = Session::find_one_by_php_session_id( session_id() );

			
			$cart = new static(
				array
					(
					'session_id' => $session->id,
					'user_id' => \User::getActiveUserID(),
					'cart_progress_id' => self::CART_PROGRESS_ADD,
					'last_action' => 'I',
					'last_action_taken' => date('Y-m-d H:i:s', time()),
					'action_by' => \User::getActiveUserID(),
					)
			);

			$cart->save();

			static::$cart_id = $_SESSION['cart_id'] = $cart->id;
		}
				
		return $retVal;
	}

	public static function destroyCart() {
		static::$cart_id = null;
		unset($_SESSION['cart_id']);
		return true;
	}

	public function addItem($item_id, $qty = 1, $price = null) {
		if ((int)$qty < 1) {
			return false;
		} else {
			$this->items[$item_id] = array(
									'size_id'	=> $item_id,
									'qty'		=> $qty,
									'price'		=> $price,
									'action'	=> self::CART_ACTION_USER_ADD );
		}
		return true;
	}

	public function removeItem($item_id) {
		foreach ($this->items as $key => $value) {
			if ($item_id == $key) {
				unset($this->items[$value]);
			}
		}
		return true;
	}

	public function getItems() {
		return $this->items;
	}
	
	public function updateTotal($amount, $item = null) {
		if (!is_null($item)) {
			foreach ($this->items as $key => $value) {
				if (in_array($item, $value)) {
					$value[$item]['price'] = $amount;
					
					// Update total
				}
			}
		} else {
			$this->total += $amount;
		}
	}
}
