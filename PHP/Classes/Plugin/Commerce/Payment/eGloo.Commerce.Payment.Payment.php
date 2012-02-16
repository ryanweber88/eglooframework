<?php
namespace eGloo\Commerce\Payment;
use eGloo\Plugin\Commerce;

/**
 * Payment Class File
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
 * Description of Payment
 *
 * Representation of Order Entity
 * Hold CRUD functionalities and Order related method
 *
 * @package Plugins
 * @subpackage Commerce
 */
class Payment {

	/** @var type  */
	public		$credit_debit_card_id;

	/** @var type  */
	public		$user_id;
	
	/** @var type  */
	protected	$card_holder;

	/** @var type  */
	protected	$card_number_hash;
	
	/** @var type  */
	public		$last_4;

	/** @var type  */
	protected	$issue_date;

	/** @var type  */
	protected	$expiration_date;

	/** @var type  */
	protected	$merchant_id;
	
	/** @var type  */
	public		$billing_address_is;
	
	/** @var type  */
	public		$card_status_id;

	/** @var type  */
	protected	$card_xml;
	
	/** @var type  */
	protected	$is_encrypted = false;
	
	/** @var type  */
	const	CARD_TYPE_UNKNOWN		= 0,
			CARD_TYPE_VISA			= 1,
			CARD_TYPE_MASTERCARD	= 2,
			CARD_TYPE_AMEX			= 3,
			CARD_TYPE_DICOVER		= 4;
	
	/** @var type  */
	const	CARD_STATUS_CHECKED		= 0,
			CARD_STATUS_ACTIVE		= 1,
			CARD_STATUS_EXPIRED		= 2,
			CARD_STATUS_FRAUD		= 3;

	/**
	 * 
	 */
	public function __construct(array $args) {
		foreach ($args as $key => $value){
			$this->{$key} = $value;
		} 
	}
	
	public static function loadByID($payment_id) {
		
	}
	
	/**
	 * Return credit card type.
	 * 
	 * @static
	 * @access public
	 * @param mixed $number
	 * @return string
	 */
	public static function getMerchandType($number) {
		$type = Payment::CARD_TYPE_UNKNOWN;
		$first = substr($number, 0, 1);
		$len = strlen($number);

		if ($first == 3 && $len == 15) {
			$type = Payment::CARD_TYPE_AMEX;
		} elseif ($first == 4 && ($len == 13 || $len == 16)) {
			$type = self::CARD_TYPE_VISA;
		} elseif ($first == 5 && $len == 16) {
			$type = self::CARD_TYPE_MASTERCARD;
		} elseif ($first == 6 && $len == 16) {
			$type = self::CARD_TYPE_DICOVER;
		}
		return $type;
	}
}