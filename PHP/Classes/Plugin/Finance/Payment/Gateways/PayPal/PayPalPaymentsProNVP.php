<?php
namespace eGloo\Plugin\Finance\Payment\Gateways\PayPal;

// use \eGloo\Configuration as Configuration;
use \eGlooConfiguration as Configuration;

use \eGloo\Utility\Exceptions\LoggerException as LoggerException;
use \eGloo\Utility\Logger as Logger;

use \Exception as Exception;
use \ErrorException as ErrorException;

/**
 * \eGloo\Plugin\Finance\Payment\Gateways\PayPal\PayPalPaymentsProNVP Class File
 *
 * Contains the class definition for the \eGloo\Plugin\Finance\Payment\Gateways\PayPal\PayPalPaymentsProNVP
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
 * \eGloo\Plugin\Finance\Payment\Gateways\PayPal\PayPalPaymentsProNVP
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class PayPalPaymentsProNVP extends PayPalPaymentsPro {

	protected $_api_request_history = array();

	/**
	 * Auth and capture in one go
	 *
	 *
	 */
	public function doAuthAndCapture( $params ) {
		$retVal = null;

		if ( !isset($params['paymentType']) ) {
			$params['paymentType'] = 'Authorization';	// or 'Sale'
		}

		$auth_response = $this->doDirectPayment( $params );

		if ( 'SUCCESS' === strtoupper($auth_response["ACK"]) ||
			 'SUCCESSWITHWARNING' === strtoupper($auth_response["ACK"]) ) {

			$capture_request = array(
				'auth_id' => urldecode($auth_response['TRANSACTIONID']),
				'amount' => urldecode($auth_response['AMT']),
				'currency' => urldecode($auth_response['CURRENCYCODE']),
				'codeType' => 'Complete',
				'invoiceID' => $params['invoiceID'],
			);

			$capture_response = $this->doCapture(
				urldecode($auth_response['TRANSACTIONID']),
				urldecode($auth_response['AMT']),
				urldecode($auth_response['CURRENCYCODE']),
				'Complete',
				$params['invoiceID']
			);
		} else {
			$capture_request = array();
			$capture_response = array();
		}


		$retVal = array(
			'auth_request' => $params,
			'auth_response' => $auth_response,
			'capture_request' => $capture_request,
			'capture_response' => $capture_response,
			'api_request_history' => $this->_api_request_history,
		);

		$this->_api_request_history = array();

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

		$sale_response = $this->doDirectPayment( $params );

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
	public function createRecurringPaymentsProfile() {
		$token = urlencode("token_from_setExpressCheckout");
		$paymentAmount = urlencode("payment_amount");
		$currencyID = urlencode("USD");						// or other currency code ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')
		$startDate = urlencode("2009-9-6T0:0:0");
		$billingPeriod = urlencode("Month");				// or "Day", "Week", "SemiMonth", "Year"
		$billingFreq = urlencode("4");						// combination of this and billingPeriod must be at most a year

		$nvpStr="&TOKEN=$token&AMT=$paymentAmount&CURRENCYCODE=$currencyID&PROFILESTARTDATE=$startDate";
		$nvpStr .= "&BILLINGPERIOD=$billingPeriod&BILLINGFREQUENCY=$billingFreq";

		$httpParsedResponseAr = $this->postHTTPRequest('CreateRecurringPaymentsProfile', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('CreateRecurringPaymentsProfile Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('CreateRecurringPaymentsProfile failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

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
// die_r($nvpStr);
		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('DoAuthorization', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('DoAuthorization Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('DoAuthorization failed: ' . print_r($httpParsedResponseAr, true));
		}
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
	public function doExpressCheckoutPayment() {
		/**
		 * This example assumes that a token was obtained from the SetExpressCheckout API call.
		 * This example also assumes that a payerID was obtained from the SetExpressCheckout API call
		 * or from the GetExpressCheckoutDetails API call.
		 */
		// Set request-specific fields.
		$payerID = urlencode("payer_id");
		$token = urlencode("token");

		$paymentType = urlencode("Authorization");			// or 'Sale' or 'Order'
		$paymentAmount = urlencode("payment_amount");
		$currencyID = urlencode("USD");						// or other currency code ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')

		// Add request-specific fields to the request string.
		$nvpStr = "&TOKEN=$token&PAYERID=$payerID&PAYMENTACTION=$paymentType&AMT=$paymentAmount&CURRENCYCODE=$currencyID";

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('DoExpressCheckoutPayment', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('Express Checkout Payment Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('DoExpressCheckoutPayment failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Reauthorize a previously authorized payment
	 *
	 *
	 */
	public function doReauthorization() {
		// Set request-specific fields.
		$authorizationID = urlencode('example_authorization_id');
		$amount = urlencode('example_amount');
		$currency = urlencode('USD');							// or other currency ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')

		// Add request-specific fields to the request string.
		$nvpStr="&AUTHORIZATIONID=$authorizationID&AMT=$amount&CURRENCYCODE=$currency";

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('DoReauthorization', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('DoReauthorization Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('DoReauthorization failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Cancel a previously authorized payment
	 *
	 *
	 */
	public function doVoid() {
		// Set request-specific fields.
		$authorizationID = urlencode('example_authorization_id');
		$note = urlencode('example_note');

		// Add request-specific fields to the request string.
		$nvpStr="&AUTHORIZATIONID=$authorizationID&NOTE=$note";

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('DOVoid', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('Void Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('DoVoid failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Process a credit card payment
	 *
	 *
	 */
	public function getBalance() {
		$nvpStr="";

		$httpParsedResponseAr = $this->postHTTPRequest('GetBalance', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('GetBalance Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('GetBalance failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Get information about an Express Checkout transaction
	 *
	 *
	 */
	public function getExpressCheckoutDetails() {
		/**
		 * This example assumes that this is the return URL in the SetExpressCheckout API call.
		 * The PayPal website redirects the user to this page with a token.
		 */

		// Obtain the token from PayPal.
		if(!array_key_exists('token', $_REQUEST)) {
			exit('Token is not received.');
		}

		// Set request-specific fields.
		$token = urlencode(htmlspecialchars($_REQUEST['token']));

		// Add request-specific fields to the request string.
		$nvpStr = "&TOKEN=$token";

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('GetExpressCheckoutDetails', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			// Extract the response details.
			$payerID = $httpParsedResponseAr['PAYERID'];
			$street1 = $httpParsedResponseAr["SHIPTOSTREET"];
			if(array_key_exists("SHIPTOSTREET2", $httpParsedResponseAr)) {
				$street2 = $httpParsedResponseAr["SHIPTOSTREET2"];
			}
			$city_name = $httpParsedResponseAr["SHIPTOCITY"];
			$state_province = $httpParsedResponseAr["SHIPTOSTATE"];
			$postal_code = $httpParsedResponseAr["SHIPTOZIP"];
			$country_code = $httpParsedResponseAr["SHIPTOCOUNTRYCODE"];

			exit('Get Express Checkout Details Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('GetExpressCheckoutDetails failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Get detailed information about a single transaction
	 *
	 *
	 */
	public function getTransactionDetails() {
		// Set request-specific fields.
		$transactionID = urlencode('example_transaction_id');

		// Add request-specific fields to the request string.
		$nvpStr = "&TRANSACTIONID=$transactionID";

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('GetTransactionDetails', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('GetTransactionDetails Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('GetTransactionDetails failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Pay one or more recipients
	 *
	 *
	 */
	public function massPay() {
		// Set request-specific fields.
		$emailSubject =urlencode('example_email_subject');
		$receiverType = urlencode('EmailAddress');
		$currency = urlencode('USD');							// or other currency ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')

		// Add request-specific fields to the request string.
		$nvpStr="&EMAILSUBJECT=$emailSubject&RECEIVERTYPE=$receiverType&CURRENCYCODE=$currency";

		$receiversArray = array();

		for($i = 0; $i < 3; $i++) {
			$receiverData = array(	'receiverEmail' => "user$i@paypal.com",
									'amount' => "example_amount",
									'uniqueID' => "example_unique_id",
									'note' => "example_note");
			$receiversArray[$i] = $receiverData;
		}

		foreach($receiversArray as $i => $receiverData) {
			$receiverEmail = urlencode($receiverData['receiverEmail']);
			$amount = urlencode($receiverData['amount']);
			$uniqueID = urlencode($receiverData['uniqueID']);
			$note = urlencode($receiverData['note']);
			$nvpStr .= "&L_EMAIL$i=$receiverEmail&L_Amt$i=$amount&L_UNIQUEID$i=$uniqueID&L_NOTE$i=$note";
		}

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('MassPay', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('MassPay Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('MassPay failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Issue a refund for a prior transaction
	 *
	 *
	 */
	public function refundTransaction() {
		// Set request-specific fields.
		$transactionID = urlencode('example_transaction_id');
		$refundType = urlencode('Full');						// or 'Partial'
		$amount;												// required if Partial.
		$memo;													// required if Partial.
		$currencyID = urlencode('USD');							// or other currency ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')

		// Add request-specific fields to the request string.
		$nvpStr = "&TRANSACTIONID=$transactionID&REFUNDTYPE=$refundType&CURRENCYCODE=$currencyID";

		if(isset($memo)) {
			$nvpStr .= "&NOTE=$memo";
		}

		if(strcasecmp($refundType, 'Partial') == 0) {
			if(!isset($amount)) {
				exit('Partial Refund Amount is not specified.');
			} else {
		 		$nvpStr = $nvpStr."&AMT=$amount";
			}

			if(!isset($memo)) {
				exit('Partial Refund Memo is not specified.');
			}
		}

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('RefundTransaction', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('Refund Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('RefundTransaction failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Set custom billing agreement
	 *
	 *
	 */
	public function setCustomBillingAgreement() {
		$returnURL = urlencode("my_return_url");
		$cancelURL = urlencode("my_cancel_url");
		$billingType = urlencode("RecurringPayments");	// or "MerchantInitiatedBilling"

		$nvpStr="&BILLINGTYPE=$billingType&RETURNURL=$returnURL&CANCELURL=$cancelURL";

		$httpParsedResponseAr = $this->postHTTPRequest('SetCustomerBillingAgreement', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('SetCustomerBillingAgreement Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('SetCustomerBillingAgreement failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Initiate an Express Checkout transaction
	 *
	 *
	 */
	public function setExpressCheckout() {
		// Set request-specific fields.
		$paymentAmount = urlencode('example_payment_amuont');
		$currencyID = urlencode('USD');							// or other currency code ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')
		$paymentType = urlencode('Authorization');				// or 'Sale' or 'Order'

		$returnURL = urlencode("my_return_url");
		$cancelURL = urlencode('my_cancel_url');

		// Add request-specific fields to the request string.
		$nvpStr = "&Amt=$paymentAmount&ReturnUrl=$returnURL&CANCELURL=$cancelURL&PAYMENTACTION=$paymentType&CURRENCYCODE=$currencyID";

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('SetExpressCheckout', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			// Redirect to paypal.com.
			$token = urldecode($httpParsedResponseAr["TOKEN"]);
			$payPalURL = "https://www.paypal.com/webscr&cmd=_express-checkout&token=$token";
			if("sandbox" === $environment || "beta-sandbox" === $environment) {
				$payPalURL = "https://www.$environment.paypal.com/webscr&cmd=_express-checkout&token=$token";
			}
			header("Location: $payPalURL");
			exit;
		} else  {
			exit('SetExpressCheckout failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Initiate an Express Checkout PayLater transaction
	 *
	 *
	 */
	public function setExpressCheckoutPayLater() {
		$paymentAmount = urlencode('example_payment_amuont');
		$currencyID = urlencode('USD');							// or other currency code ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')
		$paymentType = urlencode('Authorization');				// or 'Sale' or 'Order'

		$returnURL = urlencode("my_return_url");
		$cancelURL = urlencode("my_cancel_url");

		// Pay Later
		$promoCode = urlencode('101');

		$nvpStr = "&Amt=$paymentAmount&ReturnUrl=$returnURL&CANCELURL=$cancelURL&PAYMENTACTION=$paymentType&CURRENCYCODE=$currencyID";
		$nvpStr .= "&L_PROMOCODE0=$promoCode";

		$httpParsedResponseAr = $this->postHTTPRequest('SetExpressCheckout', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			// Redirect to paypal.com here
			$token = urldecode($httpParsedResponseAr["TOKEN"]);
			$payPalURL = "https://www.paypal.com/webscr&cmd=_express-checkout&token=$token";
			if("sandbox" === $environment || "beta-sandbox" === $environment) {
				$payPalURL = "https://www.$environment.paypal.com/webscr&cmd=_express-checkout&token=$token";
			}
			header("Location: $payPalURL");
			exit;
		} else  {
			exit('SetExpressCheckout failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Search your account history for transactions that meet the criteria you specify
	 *
	 *
	 */
	public function transactionSearch() {
		// Set request-specific fields.
		$transactionID = urlencode('example_transaction_id');

		// Add request-specific fields to the request string.
		$nvpStr = "&TRANSACTIONID=$transactionID";

		// Set additional request-specific fields and add them to the request string.
		$startDateStr;			// in 'mm/dd/ccyy' format
		$endDateStr;			// in 'mm/dd/ccyy' format
		if(isset($startDateStr)) {
		   $start_time = strtotime($startDateStr);
		   $iso_start = date('Y-m-d\T00:00:00\Z',  $start_time);
		   $nvpStr .= "&STARTDATE=$iso_start";
		  }

		if(isset($endDateStr)&&$endDateStr!='') {
		   $end_time = strtotime($endDateStr);
		   $iso_end = date('Y-m-d\T24:00:00\Z', $end_time);
		   $nvpStr .= "&ENDDATE=$iso_end";
		}

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('TransactionSearch', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('TransactionSearch Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('TransactionSearch failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Get name of the product being accessed
	 *
	 *
	 */
	public function getProductName() {

	}

	/**
	 * Send HTTP POST Request
	 *
	 * @param	string	The API method name
	 * @param	string	The POST Message fields in &name=value pair format
	 * @return	array	Parsed HTTP Response body
	 */
	protected function postHTTPRequest( $methodName_, $nvpStr_ ) {
		$environment_credentials = $this->getEnvironmentCredentials();

		$customer_ip_address = isset($_SERVER['SERVER_ADDR']) &&
			$_SERVER['SERVER_ADDR'] !== '127.0.0.1' ?
			urlencode($_SERVER['SERVER_ADDR']) : urlencode('68.169.110.99');

		// Set up your API credentials, PayPal end point, and API version.
		$API_UserName = urlencode( $environment_credentials['API_UserName'] );
		$API_Password = urlencode( $environment_credentials['API_Password'] );
		$API_Signature = urlencode( $environment_credentials['API_Signature'] );
		$API_Endpoint = $environment_credentials['API_Endpoint'];

		$version = urlencode( $environment_credentials['version'] );

		// Set the curl parameters.
		$ch = curl_init();
		curl_setopt($ch, CURLOPT_URL, $API_Endpoint);
		curl_setopt($ch, CURLOPT_VERBOSE, 1);

		// Turn off the server and peer verification (TrustManager Concept).
		curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, FALSE);
		curl_setopt($ch, CURLOPT_SSL_VERIFYHOST, FALSE);

		curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
		curl_setopt($ch, CURLOPT_POST, 1);

		// Set the API operation, version, and API signature in the request.
		$nvpreq = "IPADDRESS=$customer_ip_address&METHOD=$methodName_&VERSION=$version&PWD=$API_Password&USER=$API_UserName&SIGNATURE=$API_Signature$nvpStr_";
		// $nvpreq = "METHOD=$methodName_&VERSION=$version&PWD=$API_Password&USER=$API_UserName&SIGNATURE=$API_Signature$nvpStr_";

		// Set the request as a POST FIELD for curl.
		curl_setopt($ch, CURLOPT_POSTFIELDS, $nvpreq);

		$this->_api_request_history[] = $nvpreq;

		// Get response from the server.
		$httpResponse = curl_exec($ch);

		if(!$httpResponse) {
			throw new Exception("$methodName_ failed: ".curl_error($ch).'('.curl_errno($ch).')');
		}

		// Extract the response details.
		$httpResponseAr = explode("&", $httpResponse);

		$httpParsedResponseAr = array();
		foreach ($httpResponseAr as $i => $value) {
			$tmpAr = explode("=", $value);
			if(sizeof($tmpAr) > 1) {
				$httpParsedResponseAr[$tmpAr[0]] = $tmpAr[1];
			}
		}

		if((0 == sizeof($httpParsedResponseAr)) || !array_key_exists('ACK', $httpParsedResponseAr)) {
			throw new Exception("Invalid HTTP Response for POST request($nvpreq) to $API_Endpoint.");
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
				$API_UserName = Configuration::getCustomVariable('PayPalPaymentsProDevelopmentAPIUsername');
				$API_Password = Configuration::getCustomVariable('PayPalPaymentsProDevelopmentAPIPassword');
				$API_Signature = Configuration::getCustomVariable('PayPalPaymentsProDevelopmentAPISignature');
				$API_Endpoint = 'https://api-3t.sandbox.paypal.com/nvp';

				break;
			case 'staging' :
				$API_UserName = Configuration::getCustomVariable('PayPalPaymentsProStagingAPIUsername');
				$API_Password = Configuration::getCustomVariable('PayPalPaymentsProStagingAPIPassword');
				$API_Signature = Configuration::getCustomVariable('PayPalPaymentsProStagingAPISignature');
				$API_Endpoint = 'https://api-3t.sandbox.paypal.com/nvp';

				break;
			case 'production' :
				$API_UserName = Configuration::getCustomVariable('PayPalPaymentsProProductionAPIUsername');
				$API_Password = Configuration::getCustomVariable('PayPalPaymentsProProductionAPIPassword');
				$API_Signature = Configuration::getCustomVariable('PayPalPaymentsProProductionAPISignature');
				$API_Endpoint = 'https://api-3t.paypal.com/nvp';

				break;
			default :
				$API_UserName = Configuration::getCustomVariable('PayPalPaymentsProDevelopmentAPIUsername');
				$API_Password = Configuration::getCustomVariable('PayPalPaymentsProDevelopmentAPIPassword');
				$API_Signature = Configuration::getCustomVariable('PayPalPaymentsProDevelopmentAPISignature');
				$API_Endpoint = 'https://api-3t.sandbox.paypal.com/nvp';

				break;
		}

		$version = urlencode( '51.0' );

		$retVal = array(
			'API_UserName' => $API_UserName,
			'API_Password' => $API_Password,
			'API_Signature' => $API_Signature,
			'API_Endpoint' => $API_Endpoint,
			'version' => $version,
		);

		return $retVal;
	}

}
