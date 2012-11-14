<?php
namespace eGloo\Plugin\Finance\Payment\Gateways\PayPal;

// use \eGloo\Configuration as Configuration;
use \eGlooConfiguration as Configuration;

use eGloo\Plugin\Finance\Payment\Gateways\PaymentGateway as PaymentGateway;

use \eGloo\Utility\Exceptions\LoggerException as LoggerException;
use \eGloo\Utility\Logger as Logger;

use \Exception as Exception;
use \ErrorException as ErrorException;

/**
 * PayPalGateway Class File
 *
 * $file_block_description
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
 * @author George Cooper
 * @copyright 2011 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @package $package
 * @subpackage $subpackage
 * @version 1.0
 */

/**
 * PayPalGateway
 *
 * $short_description
 *
 * $long_description
 *
 * @package $package
 * @subpackage $subpackage
 */
class PayPalGateway extends PaymentGateway {

	protected $gateway_product_name = '';

	protected $gateway_product_protocol = '';

	protected $gatewayProduct = null;

	public function __construct( $gateway_product_name, $gateway_product_protocol ) {
		$gateway_product_class_name = $gateway_product_name . strtoupper($gateway_product_protocol);
		$gateway_product_class_name = 'eGloo\Plugin\Finance\Payment\Gateways\PayPal\\' . $gateway_product_class_name;

		if ( class_exists( $gateway_product_class_name, true ) ) {
			$this->gatewayProduct = new $gateway_product_class_name();
		} else {
			throw new \Exception( 'Unknown class "' . $gateway_product_class_name . '" requested' );
		}
	}

	public function __call( $method, $args ) {
		return $this->gatewayProduct->$method( $args[0] );
	}

}

