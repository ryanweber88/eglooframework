<?php
namespace eGloo\Plugin\API\Gateways\eGloo;

use \eGloo\Configuration as Configuration;

use \eGloo\Utility\Exceptions\LoggerException as LoggerException;
use \eGloo\Utility\Logger as Logger;

use \Exception as Exception;
use \ErrorException as ErrorException;

/**
 * \eGloo\Plugin\API\Gateways\eGloo\eGlooGateway Class File
 *
 * Contains the class definition for the \eGloo\Plugin\API\Gateways\eGloo\eGlooGateway
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
 * \eGloo\Plugin\API\Gateways\eGloo\eGlooGateway
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class eGlooGateway extends ServiceGateway {

	protected $gateway_product_name = '';

	protected $gateway_product_protocol = '';

	protected $gatewayProduct = null;

	public function __construct( $gateway_product_name, $gateway_product_protocol ) {
		$gateway_product_class_name = $gateway_product_name . strtoupper($gateway_product_protocol);
		$gateway_product_class_name = 'eGloo\Plugin\API\Gateways\eGloo\\' . $gateway_product_class_name;

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
