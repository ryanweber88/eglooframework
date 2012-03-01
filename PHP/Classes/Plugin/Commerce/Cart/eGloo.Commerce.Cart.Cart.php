<?php
namespace eGloo\Commerce\Cart;
use \eGloo\Commerce,
	\eGloo\Utility;


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
class Cart {

	protected $user_id		= 0;
	
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
	
	protected $shipping_line_id			= 0;

	private function __construct() {
	}
	
	public static function setCartID($cart_id = null) {
		if (!is_null($cart_id) && $cart_id > 0) {
			self::$cart_id = $cart_id;		
			$_SESSION['cart_id'] = self::$cart_id;
			
			// Generate Cookies and set it to expires in 3 days
			setcookie('cart_id', self::$cart_id, time()+24*60*60*3, '/');
		} else {
						
			if (isset($_SESSION['cart_id'])) {
				self::$cart_id = $_SESSION['cart_id'];
				
				// Regenerate Cookies and set it to expires in 3 days
				setcookie('cart_id', self::$cart_id, time()+24*60*60*3, '/');
			
			} elseif (isset ($_COOKIE['cart_id'])) {
				self::$cart_id = $_COOKIE['cart_id'];
				$_SESSION['cart_id'] = self::$cart_id;
				
				// Regenerate Cookies and set it to expires in 3 days
				// setcookie('cart_id', self::$cart_id, time()+24*60*60*3);
			} else {
				self::$cart_id = md5(uniqid(rand(), true));
				
				// Generate Cookies and set it to expires in 3 days
				setcookie('cart_id', self::$cart_id, time()+24*60*60*3, '/');
			}
		}
		return true;
	}

	
	public static function getCartID() {
		if (!isset(self::$cart_id)) {
			self::setCartID();
		}
		return self::$cart_id;
	}
	
	public static function destroyCart() {
		self::$cart_id = null;
		unset($_SESSION['cart_id']);
		setcookie('cart_id', self::getCartID(), time() - 24*60*60*3, '/');
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
	
	
	public function clearCart() {
		
	}
	
	public function getCartTotal() {
		
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