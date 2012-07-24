<?php
namespace eGloo\Plugin\Finance\Payment\Gateways\PayPal;

use \eGloo\Configuration as Configuration;

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

	/**
	 * Create a recurring payments profile
	 *
	 *
	 */
	public function createRecurringPaymentsProfile() {
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

		// Set request-specific fields.
		$transactionID = urlencode('example_transaction_id');
		$amount = urlencode('example_amount');
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
	}

	/**
	 * Capture a payment
	 *
	 *
	 */
	public function doCapture() {
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

		// Set request-specific fields.
		$authorizationID = urlencode('example_authorization_id');
		$amount = urlencode('example_amount');
		$currency = urlencode('USD');							// or other currency ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')
		$completeCodeType = urlencode('Complete');				// or 'NotComplete'
		$invoiceID = urlencode('example_invoice_id');
		$note = urlencode('example_note');

		// Add request-specific fields to the request string.
		$nvpStr="&AUTHORIZATIONID=$authorizationID&AMT=$amount&COMPLETETYPE=$completeCodeType&CURRENCYCODE=$currency&NOTE=$note";

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('DoCapture', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('Capture Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('DoCapture failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Process a credit card payment
	 *
	 *
	 */
	public function doDirectPayment() {
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

		// Set request-specific fields.
		$paymentType = urlencode('Authorization');				// or 'Sale'
		$firstName = urlencode('customer_first_name');
		$lastName = urlencode('customer_last_name');
		$creditCardType = urlencode('customer_credit_card_type');
		$creditCardNumber = urlencode('customer_credit_card_number');
		$expDateMonth = 'cc_expiration_month';
		// Month must be padded with leading zero
		$padDateMonth = urlencode(str_pad($expDateMonth, 2, '0', STR_PAD_LEFT));

		$expDateYear = urlencode('cc_expiration_year');
		$cvv2Number = urlencode('cc_cvv2_number');
		$address1 = urlencode('customer_address1');
		$address2 = urlencode('customer_address2');
		$city = urlencode('customer_city');
		$state = urlencode('customer_state');
		$zip = urlencode('customer_zip');
		$country = urlencode('customer_country');				// US or other valid country code
		$amount = urlencode('example_payment_amuont');
		$currencyID = urlencode('USD');							// or other currency ('GBP', 'EUR', 'JPY', 'CAD', 'AUD')

		// Add request-specific fields to the request string.
		$nvpStr =	"&PAYMENTACTION=$paymentType&AMT=$amount&CREDITCARDTYPE=$creditCardType&ACCT=$creditCardNumber".
					"&EXPDATE=$padDateMonth$expDateYear&CVV2=$cvv2Number&FIRSTNAME=$firstName&LASTNAME=$lastName".
					"&STREET=$address1&CITY=$city&STATE=$state&ZIP=$zip&COUNTRYCODE=$country&CURRENCYCODE=$currencyID";

		// Execute the API operation; see the PPHttpPost function above.
		$httpParsedResponseAr = $this->postHTTPRequest('DoDirectPayment', $nvpStr);

		if("SUCCESS" == strtoupper($httpParsedResponseAr["ACK"]) || "SUCCESSWITHWARNING" == strtoupper($httpParsedResponseAr["ACK"])) {
			exit('Direct Payment Completed Successfully: '.print_r($httpParsedResponseAr, true));
		} else  {
			exit('DoDirectPayment failed: ' . print_r($httpParsedResponseAr, true));
		}
	}

	/**
	 * Complete an Express Checkout transaction
	 *
	 *
	 */
	public function doExpressCheckoutPayment() {
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
		// $environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
		$environment = 'sandbox';	// or 'beta-sandbox' or 'live'

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
			global $environment;

			// Set up your API credentials, PayPal end point, and API version.
			$API_UserName = urlencode('my_api_username');
			$API_Password = urlencode('my_api_password');
			$API_Signature = urlencode('my_api_signature');
			$API_Endpoint = "https://api-3t.paypal.com/nvp";
			if("sandbox" === $environment || "beta-sandbox" === $environment) {
				$API_Endpoint = "https://api-3t.$environment.paypal.com/nvp";
			}
			$version = urlencode('51.0');

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
			$nvpreq = "METHOD=$methodName_&VERSION=$version&PWD=$API_Password&USER=$API_UserName&SIGNATURE=$API_Signature$nvpStr_";

			// Set the request as a POST FIELD for curl.
			curl_setopt($ch, CURLOPT_POSTFIELDS, $nvpreq);

			// Get response from the server.
			$httpResponse = curl_exec($ch);

			if(!$httpResponse) {
				exit("$methodName_ failed: ".curl_error($ch).'('.curl_errno($ch).')');
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
				exit("Invalid HTTP Response for POST request($nvpreq) to $API_Endpoint.");
			}

			return $httpParsedResponseAr;
	}

}
