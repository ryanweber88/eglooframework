<?php
namespace eGloo\Plugin\Finance\Payment\Gateways\PayPal;

use \eGloo\Configuration as Configuration;

use \eGloo\Plugin\Finance\Payment\Gateways\PaymentGatewayProduct as PaymentGatewayProduct;

use \eGloo\Utility\Exceptions\LoggerException as LoggerException;
use \eGloo\Utility\Logger as Logger;

use \Exception as Exception;
use \ErrorException as ErrorException;

/**
 * \eGloo\Plugin\Finance\Payment\Gateways\PayPal\PayPalPaymentsPro Class File
 *
 * Contains the class definition for the \eGloo\Plugin\Finance\Payment\Gateways\PayPal\PayPalPaymentsPro
 *
 * Copyright 2012 eGloo, LLC
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
 * @author George Cooper
 * @copyright 2012 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @category $category
 * @package $package
 * @subpackage $subpackage
 * @version 1.0
 */

/**
 * \eGloo\Plugin\Finance\Payment\Gateways\PayPal\PayPalPaymentsPro
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
abstract class PayPalPaymentsPro extends PaymentGatewayProduct {

	/**
	 * Auth and capture in one go
	 *
	 *
	 */
	abstract public function doAuthAndCapture( $params );

	abstract public function doSale( $params );

	abstract public function createRecurringPaymentsProfile();

	abstract public function doAuthorization();

	abstract public function doCapture( $auth_id, $amount, $currency, $codeType, $invoiceID, $note = ''  );

	abstract public function doDirectPayment( $params );

	abstract public function doExpressCheckoutPayment();

	abstract public function doReauthorization();

	abstract public function doVoid();

	abstract public function getBalance();

	abstract public function getExpressCheckoutDetails();

	abstract public function getTransactionDetails();

	abstract public function massPay();

	abstract public function refundTransaction();

	abstract public function setCustomBillingAgreement();

	abstract public function setExpressCheckout();

	abstract public function setExpressCheckoutPayLater();

	abstract public function transactionSearch();

}
