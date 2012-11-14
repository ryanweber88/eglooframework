<?php
namespace eGloo\Plugin\Finance\Payment\Gateways\PayPal;

// use \eGloo\Configuration as Configuration;
use \eGlooConfiguration as Configuration;

use \eGloo\Utility\Exceptions\LoggerException as LoggerException;
use \eGloo\Utility\Logger as Logger;

use \Exception as Exception;
use \ErrorException as ErrorException;

/**
 * \eGloo\Plugin\Finance\Payment\Gateways\PayPal\PayPalPayflowProNVP Class File
 *
 * Contains the class definition for the \eGloo\Plugin\Finance\Payment\Gateways\PayPal\PayPalPayflowProNVP
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
 * \eGloo\Plugin\Finance\Payment\Gateways\PayPal\PayPalPayflowProNVP
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class PayPalPayflowProNVP extends PayPalPayflowPro {

	protected $_api_request_history = array();

	/**
	 * Auth and capture in one go
	 *
	 *
	 */
	public function doAuthAndCapture( $params ) {
		$retVal = null;

		// if ( !isset($params['paymentType']) ) {
		// 	$params['paymentType'] = 'Authorization';	// or 'Sale'
		// }

		// $auth_response = $this->doDirectPayment( $params );

		// if ( 'SUCCESS' === strtoupper($auth_response["ACK"]) ||
		// 	 'SUCCESSWITHWARNING' === strtoupper($auth_response["ACK"]) ) {

		// 	$capture_request = array(
		// 		'auth_id' => urldecode($auth_response['TRANSACTIONID']),
		// 		'amount' => urldecode($auth_response['AMT']),
		// 		'currency' => urldecode($auth_response['CURRENCYCODE']),
		// 		'codeType' => 'Complete',
		// 		'invoiceID' => $params['invoiceID'],
		// 	);

		// 	$capture_response = $this->doCapture(
		// 		urldecode($auth_response['TRANSACTIONID']),
		// 		urldecode($auth_response['AMT']),
		// 		urldecode($auth_response['CURRENCYCODE']),
		// 		'Complete',
		// 		$params['invoiceID']
		// 	);
		// } else {
		// 	$capture_request = array();
		// 	$capture_response = array();
		// }


		// $retVal = array(
		// 	'auth_request' => $params,
		// 	'auth_response' => $auth_response,
		// 	'capture_request' => $capture_request,
		// 	'capture_response' => $capture_response,
		// 	'api_request_history' => $this->_api_request_history,
		// );

		// $this->_api_request_history = array();

		return $retVal;
	}

	/**
	 * Auth and capture in one go
	 *
	 *
	 */
	public function doSale( $params ) {
		$retVal = null;

		if ( !isset($params['paymentType']) ) {
			$params['paymentType'] = 'Sale';
		}

		// Set request-specific fields.
		$paymentType = ($params['paymentType']);				// or 'Sale'
		$firstName = ($params['firstName']);
		$lastName = ($params['lastName']);
		$creditCardType = ($params['creditCardType']);
		$creditCardNumber = ($params['creditCardNumber']);
		$expDateMonth = $params['expDateMonth'];

		// Month must be padded with leading zero
		$padDateMonth = (str_pad($expDateMonth, 2, '0', STR_PAD_LEFT));

		$expDateYear = ($params['expDateYear']);
		$cvv2Number = ($params['cvv2Number']);
		$address1 = ($params['address1']);
		$address2 = ($params['address2']);
		$city = ($params['city']);
		$state = ($params['state']);
		$zip = ($params['zip']);
		$country = ($params['country']);				// US or other valid country code
		$amount = ($params['amount']);
		$currencyID = ($params['currencyID']);							// or other currency ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')
		$invoiceID = ($params['invoiceID']);

		// build hash
		$tempstr = $creditCardNumber . $amount . date('YmdGis') . "1";
		$request_id = md5($tempstr);

		// body
		$post_data = 'TENDER=' . 'C' . '&'; // C = credit card, P = PayPal
		$post_data .= 'TRXTYPE=' . 'S' . '&'; //  S = Sale transaction, A = Authorisation, C = Credit, D = Delayed Capture, V = Void
		$post_data .= 'INVNUM=' . $invoiceID . '&'; //  Invoice or Order ID
		$post_data .= 'ACCT=' . $creditCardNumber . '&';

		// $post_data .= 'ACCT=5555555555554444&';

		$post_data .= 'EXPDATE=' . $padDateMonth . substr($expDateYear, 2) . '&';
		$post_data .= 'AMT=' . $amount . '&';

		// extra data
		$post_data .= 'CURRENCY=' . $currencyID . '&';
		$post_data .= 'COMMENT1=' . 'Sale' . '&';
		$post_data .= 'FIRSTNAME=' . $firstName . '&';
		$post_data .= 'LASTNAME=' . $lastName . '&';
		$post_data .= 'STREET=' . $address1 . '&';
		$post_data .= 'CITY=' . $city . '&';
		$post_data .= 'STATE=' . $state . '&';

		if ( ($pos = strpos($zip, '-' )) !== false ) {
			$zip = substr($zip, 0, $pos);
		}

		$post_data .= 'ZIP=' . $zip .  '&';
		$post_data .= 'COUNTRY=' . $country . '&';

		if ( isset($params['customer_email']) ) {
			$post_data .= 'EMAIL=' . $params['customer_email'] . '&';
		}

		if ( isset($params['cvv']) ) {
			$post_data .= 'CVV2=' . $params['cvv'] . '&';
		}

		// verbosity
		$post_data .= 'VERBOSITY=HIGH' . '&';

		$sale_response = $this->postHTTPRequest( 'Sale', $request_id, $post_data, $params );

		$params['request_id'] = $request_id;
		$sale_response['request_id'] = $request_id;

		$retVal = array(
			'sale_request' => $params,
			'sale_response' => $sale_response,
			'api_request_history' => $this->_api_request_history,
		);

		$this->_api_request_history = array();

		return $retVal;
	}

	/**
	 * Create a recurring payments profile
	 *
	 *
	 */
	public function createRecurringPaymentsProfile() {}

	/**
	 * Authorize a payment
	 *
	 *
	 */
	public function doAuthorization() {
		// Set request-specific fields.
		$transactionID = urlencode('1371');
		$amount = urlencode('40.00');
		$currency = urlencode('USD');							// or other currency ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')
		$trxType = urlencode('V');

		// Add request-specific fields to the request string.
		$nvpStr="&TRANSACTIONID=$transactionID&AMT=$amount&CURRENCYCODE=$currency&TRXTYPE=$trxType";

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('DoAuthorization', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('DoAuthorization Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('DoAuthorization failed: ' . print_r($httpParsedResponseAr, true));
		}

		// function authorization($card_number, $card_expire, $amount, $card_holder_name, $currency = 'USD') {

		//   if ($this->validate_card_number($card_number) == false) {
		//     $this->set_errors('Card Number not valid');
		//     return;
		//   }
		//   if ($this->validate_card_expire($card_expire) == false) {
		//     $this->set_errors('Card Expiration Date not valid');
		//     return;
		//   }
		//   if (!is_numeric($amount) || $amount <= 0) {
		//     $this->set_errors('Amount is not valid');
		//     return;
		//   }
		//   if (!in_array($currency, $this->currencies_allowed)) {
		//     $this->set_errors('Currency not allowed');
		//     return;
		//   }

		//   // build hash
		//   $tempstr = $card_number . $amount . date('YmdGis') . "1";
		//   $request_id = md5($tempstr);

		//   // body of the POST
		//   $post_data = 'USER=' . $this->user . '&';
		//   $post_data .= 'VENDOR=' . $this->vendor . '&';
		//   $post_data .= 'PARTNER=' . $this->partner . '&';
		//   $post_data .= 'PWD=' . $this->password . '&';
		//   $post_data .= 'TENDER=' . 'C' . '&'; // C = credit card, P = PayPal
		//   $post_data .= 'TRXTYPE=' . 'A' . '&'; //  S = Sale transaction, A = Authorisation, C = Credit, D = Delayed Capture, V = Void
		//   $post_data .= 'ACCT=' . $card_number . '&';
		//   $post_data .= 'EXPDATE=' . $card_expire . '&';
		//   $post_data .= 'NAME=' . $card_holder_name . '&';
		//   $post_data .= 'AMT=' . $amount . '&';  // amount
		//   $post_data .= 'CURRENCY=' . $currency . '&';
		//   $post_data .= 'VERBOSITY=MEDIUM';
	}

	/**
	 * Capture a payment
	 *
	 *
	 */
	public function doCapture( $auth_id, $amount, $currency, $codeType, $invoiceID, $note = '' ) {
		// Set request-specific fields.
		$authorizationID = urlencode( $auth_id );
		$amount = urlencode( $amount );
		$currency = urlencode( $currency );							// USD or other currency ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')
		$completeCodeType = urlencode( $codeType );				// 'Complete' or 'NotComplete'
		$invoiceID = urlencode( $invoiceID );
		$note = urlencode( $note );

		// Add request-specific fields to the request string.
		$nvpStr="&AUTHORIZATIONID=$authorizationID&AMT=$amount&COMPLETETYPE=$completeCodeType&CURRENCYCODE=$currency&INVOICEID=$invoiceID&INVNUM=$invoiceID&NOTE=$note";

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('DoCapture', $nvpStr);

		// if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
		// 	// echo_r( 'Capture Completed Successfully: '.print_r($httpParsedResponseAr, true) );
		// 	// exit('Capture Completed Successfully: '.print_r($httpParsedResponseAr, true));
		// } else  {
		// 	exit('DoCapture failed: ' . print_r($httpParsedResponseAr, true));
		// }

		return $httpParsedResponseAr;
	}

	/**
	 * Process a credit card payment
	 *
	 *
	 */
	public function doDirectPayment( $params ) {
		// Set request-specific fields.
		$paymentType = urlencode($params['paymentType']);				// or 'Sale'
		$firstName = urlencode($params['firstName']);
		$lastName = urlencode($params['lastName']);
		$creditCardType = urlencode($params['creditCardType']);
		$creditCardNumber = urlencode($params['creditCardNumber']);
		$expDateMonth = $params['expDateMonth'];

		// Month must be padded with leading zero
		$padDateMonth = urlencode(str_pad($expDateMonth, 2, '0', STR_PAD_LEFT));

		$expDateYear = urlencode($params['expDateYear']);
		$cvv2Number = urlencode($params['cvv2Number']);
		$address1 = urlencode($params['address1']);
		$address2 = urlencode($params['address2']);
		$city = urlencode($params['city']);
		$state = urlencode($params['state']);
		$zip = urlencode($params['zip']);
		$country = urlencode($params['country']);				// US or other valid country code
		$amount = urlencode($params['amount']);
		$currencyID = urlencode($params['currencyID']);							// or other currency ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')

		// Add back &CVV2=$cvv2Number
		// Add request-specific fields to the request string.
		$nvpStr =	"&PAYMENTACTION=$paymentType&AMT=$amount&CREDITCARDTYPE=$creditCardType&ACCT=$creditCardNumber".
					"&EXPDATE=$padDateMonth$expDateYear&FIRSTNAME=$firstName&LASTNAME=$lastName".
					"&STREET=$address1&CITY=$city&STATE=$state&ZIP=$zip&COUNTRYCODE=$country&CURRENCYCODE=$currencyID";

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('DoDirectPayment', $nvpStr);


		// if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
		// 	// echo_r('Direct Payment Completed Successfully: '.print_r($httpParsedResponseAr, true));
		// } else  {
		// 	exit('DoDirectPayment failed: ' . print_r($httpParsedResponseAr, true));
		// }

		return $httpParsedResponseAr;
	}

	/**
	 * Complete an Express Checkout transaction
	 *
	 *
	 */
	public function doExpressCheckoutPayment() {}

	/**
	 * Reauthorize a previously authorized payment
	 *
	 *
	 */
	public function doReauthorization() {}

	/**
	 * Cancel a previously authorized payment
	 *
	 *
	 */
	public function doVoid() {}

	/**
	 * Process a credit card payment
	 *
	 *
	 */
	public function getBalance() {}

	/**
	 * Get information about an Express Checkout transaction
	 *
	 *
	 */
	public function getExpressCheckoutDetails() {}

	/**
	 * Get detailed information about a single transaction
	 *
	 *
	 */
	public function getTransactionDetails() {}

	/**
	 * Pay one or more recipients
	 *
	 *
	 */
	public function massPay() {}

	/**
	 * Issue a refund for a prior transaction
	 *
	 *
	 */
	public function refundTransaction() {}

	/**
	 * Set custom billing agreement
	 *
	 *
	 */
	public function setCustomBillingAgreement() {}

	/**
	 * Initiate an Express Checkout transaction
	 *
	 *
	 */
	public function setExpressCheckout() {}

	/**
	 * Initiate an Express Checkout PayLater transaction
	 *
	 *
	 */
	public function setExpressCheckoutPayLater() {}

	/**
	 * Search your account history for transactions that meet the criteria you specify
	 *
	 *
	 */
	public function transactionSearch() {}

	/**
	 * Validate CC details provided
	 *
	 *
	 */
	public function validateCreditCard( $params ) {
		$retVal = null;

		if ( !isset($params['paymentType']) ) {
			$params['paymentType'] = 'Authorization';
		}

		// Set request-specific fields.
		$paymentType = ($params['paymentType']);
		$firstName = ($params['firstName']);
		$lastName = ($params['lastName']);
		$creditCardType = ($params['creditCardType']);
		$creditCardNumber = ($params['creditCardNumber']);
		$expDateMonth = $params['expDateMonth'];

		// Month must be padded with leading zero
		$padDateMonth = (str_pad($expDateMonth, 2, '0', STR_PAD_LEFT));

		$expDateYear = ($params['expDateYear']);
		$cvv2Number = ($params['cvv2Number']);
		$address1 = ($params['address1']);
		$address2 = ($params['address2']);
		$city = ($params['city']);
		$state = ($params['state']);
		$zip = ($params['zip']);
		$country = ($params['country']); // US or other valid country code
		$currencyID = ($params['currencyID']); // or other currency ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')
		$invoiceID = ($params['invoiceID']);

		// build hash
		$tempstr = $creditCardNumber . '0.00' . date('YmdGis') . "1";
		$request_id = md5($tempstr);

		// body
		$post_data = 'TENDER=' . 'C' . '&'; // C = credit card, P = PayPal
		$post_data .= 'TRXTYPE=' . 'A' . '&'; // A = Authorization
		$post_data .= 'INVNUM=' . $invoiceID . '&'; //  Invoice or Order ID
		$post_data .= 'ACCT=' . $creditCardNumber . '&';

		// $post_data .= 'ACCT=5555555555554444&';

		$post_data .= 'EXPDATE=' . $padDateMonth . substr($expDateYear, 2) . '&';
		$post_data .= 'AMT=0.00&';

		// extra data
		$post_data .= 'CURRENCY=' . $currencyID . '&';
		$post_data .= 'COMMENT1=' . 'Authorization' . '&';
		$post_data .= 'FIRSTNAME=' . $firstName . '&';
		$post_data .= 'LASTNAME=' . $lastName . '&';
		$post_data .= 'STREET=' . $address1 . '&';
		$post_data .= 'CITY=' . $city . '&';
		$post_data .= 'STATE=' . $state . '&';

		if ( ($pos = strpos($zip, '-' )) !== false ) {
			$zip = substr($zip, 0, $pos);
		}

		$post_data .= 'ZIP=' . $zip .  '&';
		$post_data .= 'COUNTRY=' . $country . '&';

		if ( isset($params['cvv']) ) {
			$post_data .= 'CVV2=' . $params['cvv'] . '&';
		}

		// verbosity
		$post_data .= 'VERBOSITY=HIGH' . '&';

		$validation_response = $this->postHTTPRequest( 'Authorization', $request_id, $post_data, $params );

		$params['request_id'] = $request_id;
		$validation_response['request_id'] = $request_id;

		$retVal = array(
			'validation_request' => $params,
			'validation_response' => $validation_response,
			'api_request_history' => $this->_api_request_history,
		);

		$this->_api_request_history = array();

		return $retVal;
	}

	/**
	 * Get name of the product being accessed
	 *
	 *
	 */
	public function getProductName() {}

	/**
	 * Send HTTP POST Request
	 *
	 * @param	string	The API method name
	 * @param	string	The POST Message fields in &name=value pair format
	 * @return	array	Parsed HTTP Response body
	 */
	protected function postHTTPRequest( $transaction_name, $request_id, $post_data, $extra_params ) {
		$environment_credentials = $this->getEnvironmentCredentials();

		if ( isset($extra_params['customer_ip_address']) ) {
			$customer_ip_address = $extra_params['customer_ip_address'];
		} else {
			$customer_ip_address = isset($_SERVER['SERVER_ADDR']) &&
				$_SERVER['SERVER_ADDR'] !== '127.0.0.1' ?
				urlencode($_SERVER['SERVER_ADDR']) : urlencode('68.169.110.99');
		}

		// Set up your API credentials, PayPal end point, and API version.
		$API_UserName = ( $environment_credentials['API_UserName'] );
		$API_Password = ( $environment_credentials['API_Password'] );
		$API_Vendor = ( $environment_credentials['API_Vendor'] );
		$API_Partner = ( $environment_credentials['API_Partner'] );
		// $API_Signature = ( $environment_credentials['API_Signature'] );
		$API_Endpoint = $environment_credentials['API_Endpoint'];

		// $version = ( $environment_credentials['version'] );

		$headers = $this->getCurlHeaders();
		$headers[] = "X-VPS-Request-ID: " . $request_id;

		$user_agent = "Mozilla/4.0 (compatible; MSIE 5.01; Windows NT 5.0)";

		// Set the curl parameters.
		$ch = curl_init();
		curl_setopt($ch, CURLOPT_URL, $API_Endpoint);
		curl_setopt($ch, CURLOPT_VERBOSE, 1);
		curl_setopt($ch, CURLOPT_HTTPHEADER, $headers);
		curl_setopt($ch, CURLOPT_USERAGENT, $user_agent);
		curl_setopt($ch, CURLOPT_HEADER, 1); // tells curl to include headers in response
		curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1); // return into a variable
		curl_setopt($ch, CURLOPT_TIMEOUT, 45); // times out after 45 secs
		curl_setopt($ch, CURLOPT_FOLLOWLOCATION, 0);
		curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, 0); // this line makes it work under HTTPS
		curl_setopt($ch, CURLOPT_POSTFIELDS, $post_data); //adding POST data
		curl_setopt($ch, CURLOPT_SSL_VERIFYHOST,  2); //verifies SSL certificate
		curl_setopt($ch, CURLOPT_FORBID_REUSE, TRUE); //forces closure of connection when done
		curl_setopt($ch, CURLOPT_POST, 1); //data sent as POST

		// Turn off the server and peer verification (TrustManager Concept).
		// curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, FALSE);
		// curl_setopt($ch, CURLOPT_SSL_VERIFYHOST, FALSE);

		// curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
		// curl_setopt($ch, CURLOPT_POST, 1);

		// Set the API operation, version, and API signature in the request.
		$nvpreq = "CLIENTIP=$customer_ip_address&PWD=$API_Password&USER=$API_UserName&VENDOR=$API_Vendor&PARTNER=$API_Partner&$post_data";

		// Set the request as a POST FIELD for curl.
		curl_setopt($ch, CURLOPT_POSTFIELDS, $nvpreq);

		$curl_info = $headers;
		array_push( $curl_info, $nvpreq );

		$this->_api_request_history[] = $curl_info;

		// Get response from the server.
		$httpResponse = curl_exec($ch);
		$headers = curl_getinfo( $ch );
		curl_close($ch);

		if ( !$httpResponse ) {
			throw new Exception( "$transaction_name failed: " . curl_error($ch) . '(' . curl_errno($ch) . ')' );
		}

		$httpParsedResponseAr = $this->getCurlResult( $httpResponse );

		if ( (0 == sizeof($httpParsedResponseAr)) ) {
			throw new Exception("Invalid HTTP Response for POST request($nvpreq) to $API_Endpoint.");
		} else if ( isset($httpParsedResponseAr['RESULT']) && is_numeric($httpParsedResponseAr['RESULT']) ) {
			return $httpParsedResponseAr;
		} else {
			throw new Exception($httpParsedResponseAr['RESPMSG'] . ' ['. $httpParsedResponseAr['RESULT'] . ']');
			return false;
		}

		return $httpParsedResponseAr;
	}

	protected function getEnvironmentCredentials( $environment = null, $environment_key = null ) {
		$retVal = array();

		if ( $environment === null && Configuration::issetCustomVariable('environment') ) {
			$config_environment = Configuration::getCustomVariable('environment');
		} else if ( $environment === null ) {
			$config_environment = 'development';
		} else {
			$config_environment = $environment;
		}

		if ( $environment_key === null && Configuration::issetCustomVariable('environment_key') ) {
			$config_environment_key = Configuration::getCustomVariable('environment_key');
		} else if ( $environment_key === null ) {
			$config_environment_key = '';
		} else {
			$config_environment_key = $environment_key;
		}

		// Set up your API credentials, PayPal end point, and API version.
		switch( $config_environment ) {
			case 'development' :
				$API_UserName = Configuration::getCustomVariable('PayPalPayflowDevelopmentAPIUsername');
				$API_Password = Configuration::getCustomVariable('PayPalPayflowDevelopmentAPIPassword');
				$API_Vendor = Configuration::getCustomVariable('PayPalPayflowDevelopmentAPIVendor');
				$API_Partner = Configuration::getCustomVariable('PayPalPayflowDevelopmentAPIPartner');
				// $API_Signature = Configuration::getCustomVariable('PayPalDevelopmentAPISignature');
				$API_Endpoint = 'https://pilot-payflowpro.paypal.com';

				break;
			case 'staging' :
				$API_UserName = Configuration::getCustomVariable('PayPalPayflowStagingAPIUsername');
				$API_Password = Configuration::getCustomVariable('PayPalPayflowStagingAPIPassword');
				$API_Vendor = Configuration::getCustomVariable('PayPalPayflowStagingAPIVendor');
				$API_Partner = Configuration::getCustomVariable('PayPalPayflowStagingAPIPartner');
				// $API_Signature = Configuration::getCustomVariable('PayPalStagingAPISignature');
				$API_Endpoint = 'https://pilot-payflowpro.paypal.com';

				break;
			case 'production' :
				$API_UserName = Configuration::getCustomVariable('PayPalPayflowProductionAPIUsername');
				$API_Password = Configuration::getCustomVariable('PayPalPayflowProductionAPIPassword');
				$API_Vendor = Configuration::getCustomVariable('PayPalPayflowProductionAPIVendor');
				$API_Partner = Configuration::getCustomVariable('PayPalPayflowProductionAPIPartner');
				// $API_Signature = Configuration::getCustomVariable('PayPalProductionAPISignature');
				$API_Endpoint = 'https://payflowpro.paypal.com/';

				break;
			default :
				$API_UserName = Configuration::getCustomVariable('PayPalPayflowDevelopmentAPIUsername');
				$API_Password = Configuration::getCustomVariable('PayPalPayflowDevelopmentAPIPassword');
				$API_Vendor = Configuration::getCustomVariable('PayPalPayflowDevelopmentAPIVendor');
				$API_Partner = Configuration::getCustomVariable('PayPalPayflowDevelopmentAPIPartner');
				// $API_Signature = Configuration::getCustomVariable('PayPalDevelopmentAPISignature');
				$API_Endpoint = 'https://pilot-payflowpro.paypal.com';

				break;
		}

		$retVal = array(
			'API_UserName'	=> $API_UserName,
			'API_Password'	=> $API_Password,
			'API_Vendor'	=> $API_Vendor,
			'API_Partner'	=> $API_Partner,
			'API_Endpoint'	=> $API_Endpoint,
		);

		return $retVal;
	}

	// Incorporated nonsense

    // Delayed Capture
    function delayed_capture($origid, $card_number = '', $card_expire = '', $amount = '') {

      if (strlen($origid) < 3) {
        $this->set_errors('OrigID not valid');
        return;
      }

      // build hash
      $tempstr = $card_number . $amount . date('YmdGis') . "2";
      $request_id = md5($tempstr);

      // body
      $post_data = 'USER=' . $this->user . '&';
      $post_data .= 'VENDOR=' . $this->vendor . '&';
      $post_data .= 'PARTNER=' . $this->partner . '&';
      $post_data .= 'PWD=' . $this->password . '&';
      $post_data .= 'TENDER=' . 'C' . '&'; // C = credit card, P = PayPal
      $post_data .= 'TRXTYPE=' . 'D' . '&'; //  S = Sale transaction, A = Authorisation, C = Credit, D = Delayed Capture, V = Void
      $post_data .= "ORIGID=" . $origid . "&"; // ORIGID to the PNREF value returned from the original transaction
      $post_data .= 'VERBOSITY=MEDIUM';
    }

    // Authorization followed by Delayed Capture
    function authorization_delayed_capture($card_number, $card_expire, $amount, $card_holder_name, $currency = 'USD') {
       // 1. authorization
      $result = $this->authorization($card_number, $card_expire, $amount, $card_holder_name, $currency = 'USD');
      if (!$this->get_errors() && isset($result['PNREF'])) {
        // 2. delayed
        $result_capture = $this->delayed_capture($result['PNREF']);
        if (!$this->get_errors()) {
          return $result_capture;
        }
      }
      return false;
    }

    // Credit Transaction
    function credit_transaction($origid) {

      if (strlen($origid) < 3) {
        $this->set_errors('OrigID not valid');
        return;
      }

      // build hash
      $tempstr = $card_number . $amount . date('YmdGis') . "2";
      $request_id = md5($tempstr);

      // body
      $post_data = 'USER=' . $this->user . '&';
      $post_data .= 'VENDOR=' . $this->vendor . '&';
      $post_data .= 'PARTNER=' . $this->partner . '&';
      $post_data .= 'PWD=' . $this->password . '&';
      $post_data .= 'TENDER=' . 'C' . '&'; // C = credit card, P = PayPal
      $post_data .= 'TRXTYPE=' . 'C' . '&'; //  S = Sale transaction, A = Authorisation, C = Credit, D = Delayed Capture, V = Void
      $post_data .= "ORIGID=" . $origid . "&"; // ORIGID to the PNREF value returned from the original transaction
      $post_data .= 'VERBOSITY=MEDIUM';
    }

    // Curl custom headers; adjust appropriately for your setup:
    function getCurlHeaders() {
      $headers = array();

      $headers[] = "Content-Type: text/namevalue"; //or maybe text/xml
      $headers[] = "X-VPS-Timeout: 30";
      $headers[] = "X-VPS-VIT-OS-Name: Linux";  // Name of your OS
      $headers[] = "X-VPS-VIT-OS-Version: Ubuntu 10.04 LTS";  // OS Version
      $headers[] = "X-VPS-VIT-Client-Type: PHP/cURL";  // What you are using
      $headers[] = "X-VPS-VIT-Client-Version: 5.3";  // For your info
      $headers[] = "X-VPS-VIT-Client-Architecture: x86";  // For your info
      $headers[] = "X-VPS-VIT-Integration-Product: eGloo";  // For your info, would populate with application name
      $headers[] = "X-VPS-VIT-Integration-Version: 2.0"; // Application version

      return $headers;
    }

    // parse result and return an array
    function getCurlResult( $result ) {
      if (empty($result)) return;

      $pfpro = array();
      $result = strstr($result, 'RESULT');
      $valArray = explode('&', $result);
      foreach($valArray as $val) {
        $valArray2 = explode('=', $val);
        $pfpro[$valArray2[0]] = $valArray2[1];
      }
      return $pfpro;
    }

}
