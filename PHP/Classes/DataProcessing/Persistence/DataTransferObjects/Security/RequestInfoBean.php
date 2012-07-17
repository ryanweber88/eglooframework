<?php
/**
 * RequestInfoBean Class File
 *
 * Needs to be commented
 *
 * Copyright 2011 eGloo, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *		  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @author Keith Buel
 * @copyright 2011 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @category DataProcessing
 * @package Persistence
 * @subpackage DataTransferObjects
 * @version 1.0
 */

/**
 * RequestInfoBean
 *
 * This class is simply a data holder for current request info.
 *
 * @category DataProcessing
 * @package Persistence
 * @subpackage DataTransferObjects
 */

class RequestInfoBean implements \ArrayAccess {


	private $arguments = null;
	private $requestProcessorID = null;
	private $errorRequestProcessorID = null;
	private $requestClass = null;
	private $requestID = null;
	private $_wildCardRequest = false;
	private $_wildCardRequestClass = null;
	private $_wildCardRequestID = null;

	// Sanitized
	private $COOKIES = null;
	private $FILES = null;
	private $GET = null;
	private $POST = null;

	private $forms = null;

	// Unset Required
	private $UNSET_COOKIES = null;
	private $UNSET_FILES = null;
	private $UNSET_GET = null;
	private $UNSET_POST = null;

	private $unsetForms = null;

	// Invalid provided
	private $INVALID_COOKIES = null;
	private $INVALID_FILES = null;
	private $INVALID_GET = null;
	private $INVALID_POST = null;

	private $invalidForms = null;

	private $decoratorArray = array();

	private $application = null;
	private $interfaceBundle = null;

	protected static $singleton;
	protected static $signature;

	//final private function __construct() {
	function __construct() {
		if ( isset(self::$singleton) ) {
			throw new Exception('Attempted __construct(): An instance of RequestInfoBean already exists');
		}

		// $this injected; magic method invocation
		$this->init();
	}

	/**
	 * getInstance()
	 */
	final public static function &getInstance() {
		if ( !isset(self::$singleton) ) {
			self::$singleton = new RequestInfoBean();
		}

		return self::$singleton;
	}

	/**
	 * This method gets called when a definition parser is instantiated.  It allows
	 * subclasses to handle their initialization without overriding their parent's constructor
	 */
	protected function init() {
		$this->COOKIES = array();
		$this->FILES = array();
		$this->GET = array();
		$this->POST = array();

		$this->forms = array();

		$this->UNSET_COOKIES = array();
		$this->UNSET_FILES = array();
		$this->UNSET_GET = array();
		$this->UNSET_POST = array();

		$this->unsetForms = array();

		$this->INVALID_COOKIES = array();
		$this->INVALID_FILES = array();
		$this->INVALID_GET = array();
		$this->INVALID_POST = array();

		$this->invalidForms = array();
	}

	/**
	 *
	 * Provides method missing functionality to requestinfobean in order
	 * access (php GLOBALS) properties
	 * @param string  $name
	 * @param mixed[] $arguments
	 */
	public function __call($name, $arguments) {
		// @TODO test and implement this


		if (preg_match('/^request_?is_?(.+)$/i', $name, $match)) {
			return strtolower($match[1]) == strtolower($_SERVER['REQUEST_METHOD']);
		}

		// match against xxx(Xxx) method name patterns, where it is assumed
		// that our submatch is the name of property - in reality we are
		// matching against GET/POST/DELETE/PUT
		if (preg_match('/([a-z]+)([A-Z].+)/', $name, $match)) {
			$action = $match[1];

			// ensure that property exists on self
			if (property_exists($this, $match[2])) {
				$property = &$this->{$match[2]};

				// an isset action asks if value(s) are set within
				// array property - if all items match, then absolute
				// true will be returned, if only some are set, then
				// number of matched items will be returned; otherwise,
				// absolute false is returned if no items are matched
				if ($action == 'isset' && is_array($property)) {

					$matched = 0;

					// itereate through arguments
					foreach ($arguments as $argument) {
						if (in_array($argument, $property)) {
							$matched += 1;
						}
					}

					// if number matched is equal to count of array property
					// then we have matched all items
					if ($matched == count($property)) {
						return true;
					}

					return ($matched > 0)
						 ? $matched
						 : false;

				}
			}
		}
	}

	/**
	 * Flattens array parameters into single hash; keeps keys intact, but
	 * last key will override any previous to it.
	 * @return Hash
	 */
	public function flatten($__mixed) {
		$arguments = \eGloo\Utilities\Collection::flatten(
			func_get_args()
		);

		$hold = array();

		foreach($arguments as $argument) {
			$hold[] = $this[$argument];
		}

		return \eGloo\Utilities\Collection::flatten($hold);
	}

	// ArrayAccess Interface //////////////////////////////////////////////////

	/**
	 * (non-PHPdoc)
	 * @see ArrayAccess::offsetExists()
	 */
	public function offsetExists($offset) {
		foreach(array('GET', 'POST', 'COOKIES', 'DELETE', 'PUT', 'FILES') as $method) {
			// have to assign into holder prior to 5.4
			$property = &$this->$method;

			if (property_exists($this, $method) && isset($property[$offset])) {
				return true;
			}

			else {
				foreach(array('post', 'get') as $method) {
					if (property_exists($this, $method) && isset($property["{$offset}_$method"])) {
						return true;
					}
				}
			}
		}

		return false;
	}


	/**
	 * (non-PHPdoc)
	 * @see ArrayAccess::offsetGet()
	 */
 /**
     * (non-PHPdoc)
     * @see ArrayAccess::offsetGet()
     */
	public function offsetGet($offset) {

		foreach(array('GET', 'POST', 'COOKIES', 'DELETE', 'PUT', 'FILES') as $method) {

			// have to do this prior to 5.4
			$property = &$this->$method;

			if (property_exists($this, $method) && isset($property[$offset])) {
				return $property[$offset];
			}
			// lets check for $name_get|post pattern and apply into offset
			else {
				foreach(array('post', 'get') as $method) {
					if (isset($this["{$offset}_$method"])) {
						return $property["{$offset}_$method"];
					}
				}
			}
		}

		return false;
	}

	/**
	 * (non-PHPdoc)
	 * @see ArrayAccess::offsetSet()
	 */
	public function offsetSet($offset, $value) {
		throw new \Exception(
			'Do not set bean values via array notation'
		);
	}

	/**
	 * (non-PHPdoc)
	 * @see ArrayAccess::offsetUnset()
	 */
	public function offsetUnset($offset) {
		throw new \Exception(
			'Do not unset bean values via array notation'
		);
	}

	///////////////////////////////////////////////////////////////////////////

	public function issetCOOKIE( $key ) {
		$retVal = false;

		if ( isset( $this->COOKIES[$key] ) ) {
			$retVal = true;
		}

		return $retVal;
	}

	public function getCOOKIE( $key ) {
		if ( !isset( $this->COOKIES[$key] ) ) {
			trigger_error( 'SECURITY ALERT: Attempted to access unset COOKIE with unvalidated key \'' . $key . '\'', E_USER_ERROR );
		}

		return $this->COOKIES[$key];
	}

	public function getCOOKIEArray() {
		return $this->COOKIES;
	}

	public function setCOOKIE( $key, $value ) {
		if ( !isset( $this->COOKIES[$key] ) ) {
			$this->COOKIES[$key] = $value;
		} else if ( $this->COOKIES[$key] !== $value ) {
			throw new RequestInfoBeanException( 'Programmer Error: Attempted to change COOKIE key \'' .
				$key . '\' (value = \'' . $this->COOKIES[$key] . '\') to \'' . $value . '\'' );
		}
	}

	public function issetFILES( $key ) {
		$retVal = false;

		if ( isset( $this->FILES[$key] ) ) {
			$retVal = true;
		}

		return $retVal;
	}

	public function getFILES( $key ) {
		if ( !isset( $this->FILES[$key] ) ) {
			trigger_error( 'SECURITY ALERT: Attempted to access unset FILES with unvalidated key \'' . $key . '\'', E_USER_ERROR );
		}

		return $this->FILES[$key];
	}

	public function getFILESArray() {
		return $this->FILES;
	}

	public function setFILES( $key, $value ) {
		if ( !isset( $this->FILES[$key] ) ) {
			$this->FILES[$key] = $value;
		} else if ( $this->FILES[$key] !== $value ) {
			throw new RequestInfoBeanException( 'Programmer Error: Attempted to change FILES key \'' .
				$key . '\' (value = \'' . $this->FILES[$key] . '\') to \'' . $value . '\'' );
		}
	}

	public function issetGET( $key ) {
		$retVal = false;

		if ( isset( $this->GET[$key] ) ) {
			$retVal = true;
		}

		return $retVal;
	}

	public function issetInvalidGET( $key ) {
		$retVal = false;

		if ( isset( $this->INVALID_GET[$key] ) ) {
			$retVal = true;
		}

		return $retVal;
	}

	public function isRequiredGETUnset( $key ) {
		$retVal = false;

		if ( isset( $this->UNSET_GET[$key] ) ) {
			$retVal = true;
		}

		return $retVal;
	}

	public function getGET( $key ) {
		if ( !isset( $this->GET[$key] ) ) {
			trigger_error( 'SECURITY ALERT: Attempted to access unset GET with unvalidated key \'' . $key . '\'', E_USER_ERROR );
		}

		return $this->GET[$key];
	}

	public function getGETArray() {
		return $this->GET;
	}

	public function getInvalidGET( $key ) {
		if ( !isset( $this->INVALID_GET[$key] ) ) {
			trigger_error( 'Programmer Error: Requested GET key \'' . $key . '\' not found in invalid GET list', E_USER_ERROR );
		}

		return $this->INVALID_GET[$key];
	}

	public function getInvalidGETArray() {
		return $this->INVALID_GET;
	}

	public function getUnsetGETArray() {
		return $this->UNSET_GET;
	}

	public function setGET( $key, $value ) {
		if ( !isset( $this->GET[$key] ) ) {
			$this->GET[$key] = $value;
		} else if ( $this->GET[$key] !== $value ) {
			throw new RequestInfoBeanException( 'Programmer Error: Attempted to change GET key \'' .
				$key . '\' (value = \'' . $this->GET[$key] . '\') to \'' . $value . '\'' );
		}
	}

	public function setInvalidGET( $key, $value ) {
		$this->INVALID_GET[$key] = $value;
	}

	public function setUnsetRequiredGET( $key ) {
		$this->UNSET_GET[$key] = $key;
	}

	public function isPOST() {
		$retVal = false;

		if ( $_SERVER['REQUEST_METHOD'] === 'POST' ) {
			$retVal = true;
		}

		return $retVal;
	}

	public function issetPOST( $key ) {
		$retVal = false;

		if ( isset( $this->POST[$key] ) ) {
			$retVal = true;
		}

		return $retVal;
	}


	public function issetInvalidPOST( $key ) {
		$retVal = false;

		if ( isset( $this->INVALID_POST[$key] ) ) {
			$retVal = true;
		}

		return $retVal;
	}

	public function isRequiredPOSTUnset( $key ) {
		$retVal = false;

		if ( isset( $this->UNSET_POST[$key] ) ) {
			$retVal = true;
		}

		return $retVal;
	}

	public function getPOST( $key ) {
		if ( !isset( $this->POST[$key] ) ) {
			trigger_error( 'SECURITY ALERT: Attempted to access unset POST with unvalidated key \'' . $key . '\'', E_USER_ERROR );
		}

		return $this->POST[$key];
	}

	public function getPOSTArray() {
		return $this->POST;
	}

	public function getInvalidPOST( $key ) {
		if ( !isset( $this->INVALID_POST[$key] ) ) {
			trigger_error( 'Programmer Error: Requested POST key \'' . $key . '\' not found in invalid POST list', E_USER_ERROR );
		}

		return $this->INVALID_POST[$key];
	}

	public function getInvalidPOSTArray() {
		return $this->INVALID_POST;
	}

	public function getUnsetPOSTArray() {
		return $this->UNSET_POST;
	}

	public function setPOST( $key, $value ) {
		if ( !isset( $this->POST[$key] ) ) {
			$this->POST[$key] = $value;
		} else if ( $this->POST[$key] !== $value ) {
			throw new RequestInfoBeanException( 'Programmer Error: Attempted to change POST key \'' .
				$key . '\' (value = \'' . $this->POST[$key] . '\') to \'' . $value . '\'' );
		}
	}

	public function setInvalidPOST( $key, $value ) {
		$this->INVALID_POST[$key] = $value;
	}

	public function setUnsetRequiredPOST( $key ) {
		$this->UNSET_POST[$key] = $key;
	}

	public function issetForm( $formID ) {
		$retVal = false;

		if ( isset( $this->forms[$formID] ) ) {
			$retVal = true;
		}

		return $retVal;
	}

	public function issetInvalidForm( $formID ) {
		$retVal = false;

		if ( isset( $this->invalidForms[$formID] ) ) {
			$retVal = true;
		}

		return $retVal;
	}

	public function isRequiredFormUnset( $formID ) {
		$retVal = false;

		if ( isset( $this->unsetForms[$formID] ) ) {
			$retVal = true;
		}

		return $retVal;

	}

	public function setUnsetRequiredForm( $formID ) {
		$this->unsetForms[$formID] = $formID;
	}

	public function getForm( $formID ) {
		if ( !isset( $this->forms[$formID] ) ) {
			trigger_error( 'Programmer Error: Requested form \'' . $formID . '\' not found in forms list', E_USER_ERROR );
		}

		return $this->forms[$formID];
	}

	public function setForm( $formID, $formObj ) {
		$this->forms[$formID] = $formObj;
	}

	public function getInvalidForm( $formID ) {
		if ( !isset( $this->invalidForms[$formID] ) ) {
			trigger_error( 'Programmer Error: Requested form \'' . $formID . '\' not found in invalid forms list', E_USER_ERROR );
		}

		return $this->invalidForms[$formID];
	}

	public function setInvalidForm( $formID, $formObj ) {
		$this->invalidForms[$formID] = $formObj;
	}

	public function getFormsArray() {
		return $this->forms;
	}

	public function getInvalidFormsArray() {
		return $this->invalidForms;
	}

	public function getUnsetFormsArray() {
		return $this->invalidForms;
	}

	public function setRequestClass( $requestClass ) {
		$this->requestClass = $requestClass;
	}

	public function getRequestClass() {
		return $this->requestClass;
	}

	public function setRequestID( $requestID ) {
		$this->requestID = $requestID;
	}

	public function getRequestID() {
		return $this->requestID;
	}

	public function isWildCardRequest() {
		return $this->_wildCardRequest;
	}

	public function setWildCardRequest( $wildCardRequest ) {
		$this->_wildCardRequest = $wildCardRequest;
	}

	public function setWildCardRequestClass( $wildCardRequestClass ) {
		$this->_wildCardRequestClass = $wildCardRequestClass;
	}

	public function getWildCardRequestClass() {
		return $this->_wildCardRequestClass;
	}

	public function setWildCardRequestID( $wildCardRequestID ) {
		$this->_wildCardRequestID = $wildCardRequestID;
	}

	public function getWildCardRequestID() {
		return $this->_wildCardRequestID;
	}

	public function hasWildCardRequestID() {
		return !is_null($this->_wildCardRequestID);
	}

	public function setRequestProcessorID( $requestProcessorID ) {
		$this->requestProcessorID = $requestProcessorID;
	}

	public function getRequestProcessorID() {
		return $this->requestProcessorID;
	}

	public function setErrorRequestProcessorID( $errorRequestProcessorID ) {
		$this->errorRequestProcessorID = $errorRequestProcessorID;
	}

	public function getErrorRequestProcessorID() {
		return $this->errorRequestProcessorID;
	}

	/**
	 * A convenience method for getting a fully qualified URI based on validated GET parameters
	 * provided to this request.
	 */
	public function getFullyQualifiedRequestString( $keys_to_ignore = array(), $pairs_to_set = array(), $__mixed = array() ) {
		$retVal = '';

		$get_params = $this->GET;

		if ( in_array($this->requestClass, array('externalMainPage'))
			 && !in_array('show_hidden', $__mixed) ) {

			$request_class = '';
		} else if ( $this->_wildCardRequestClass !== null ) {
			$request_class = $this->_wildCardRequestClass;
		} else {
			$request_class = $this->requestClass;
		}

		if ( in_array($this->requestID, array('index', 'extMainViewBase'))
			 && !in_array('show_hidden', $__mixed) ) {

			$request_id = '';
		} else if ( $this->_wildCardRequestID !== null ) {
			$request_id = $this->_wildCardRequestID;
		} else {
			$request_id = $this->requestID;
		}

		if ( in_array('unroll_rewrite', $__mixed) ) {
			$retVal .= 'index.php';
			$get_params['eg_requestClass'] = $request_class;
			$get_params['eg_requestID'] = $request_id;
		} else {
			if ( $request_class !== '' && !in_array('hide_request_class', $__mixed) ) {
				if ( !in_array('unroll_request_class', $__mixed) ) {
					$retVal .= $request_class;
				} else {
					$get_params['eg_requestClass'] = $request_class;
					$get_params['eg_requestID'] = $request_id;
				}
			}

			if ( $request_id !== '' && !in_array('hide_request_id', $__mixed) && !isset($get_params['eg_requestID']) ) {
				if ( $request_class !== '' && !in_array('hide_request_class', $__mixed) && !in_array('unroll_request_id', $__mixed) ) {
					$retVal .= '/' . $request_id;
				} else if ( !in_array('unroll_request_id', $__mixed) && ($request_class === '' || in_array('hide_request_class', $__mixed)) ) {
					$retVal .= $request_id;
				} else {
					$get_params['eg_requestID'] = $request_id;
				}
			}

			if ( isset($get_params['eg_slug']) &&
				 !in_array('unroll_slug', $__mixed) &&
				 !isset($get_params['eg_requestClass']) &&
				 !isset($get_params['eg_requestID']) ) {

				if ( trim($retVal) !== '' ) {
					$retVal .= '/' . $get_params['eg_slug'];
				} else {
					$retVal .= $get_params['eg_slug'];
				}

				unset( $get_params['eg_slug'] );
			}
		}

		foreach( $keys_to_ignore as $key ) {
			unset($get_params[$key]);
		}

		if ( in_array('prune', $__mixed) ) {
			$old_get_params = $get_params;

			foreach( $old_get_params as $key => $value ) {
				if ( (is_array($value) && almost_empty($value, true)) ||
					 (is_string($value) && trim($value) === '') || $value === null ) {
					unset($get_params[$key]);
				}
			}
		}

		foreach( $pairs_to_set as $key => $value ) {
			$get_params[$key] = $value;
		}

		if ( !empty($get_params ) || in_array('include_delimiter', $__mixed) ) {
			$retVal .= '?';
		}

		$retVal .= http_build_query( $get_params );

		if ( in_array('prepend_rewrite_base', $__mixed) ) {
			$retVal = eGlooConfiguration::getRewriteBase() . $retVal;
		}

		return $retVal;
	}

	/**
	 * A convenience method for getting a fully qualified URI based on validated GET parameters
	 * provided to this request.
	 */
	public function uri( $keys_to_ignore = array(), $pairs_to_set = array(), $__mixed = array() ) {
		return $this->getFullyQualifiedRequestString( $keys_to_ignore, $pairs_to_set, $__mixed );
	}

	/**
	 * A convenience method for grabbing a slug.  If no slug provided, null is just as accurate as
	 * an exception, but it doesn't go all Rick James on your call stack.
	 */
	public function getSlug() {
		$retVal = null;

		if ( $this->issetGET('eg_slug') ) {
			$retVal = $this->getGET('eg_slug');
		}

		return $retVal;
	}

	public function setDecoratorArray( $decoratorArray ) {
		$this->decoratorArray = $decoratorArray;
	}

	public function getDecoratorArray() {
		return $this->decoratorArray;
	}

	public function getApplication() {
		return $this->application;
	}

	public function setApplication( $application ) {
		$this->application = $application;
	}

	public function getInterfaceBundle() {
		return $this->interfaceBundle;
	}

	public function setInterfaceBundle( $interfaceBundle ) {
		$this->interfaceBundle = $interfaceBundle;
	}

	/**
	 *
	 * Returns an instance 'signature' of requestInfoBean, based upon makeup of private properties;
	 * this is in turn used to generate a key for caching instantiated classes based upon the
	 * request info bean's current state
	 */
	public function signature() {

		//if (!isset(static::$signature)) {
		$rclass = new \ReflectionClass($this);
		$values = array();

		foreach($rclass->getProperties(\ReflectionProperty::IS_PRIVATE) as $property) {
			$value = $this->{$property->getName()};

			if (is_array($value)) {
				$value = implode(":", $value);
			}

			$values[] = $property->getName() . ':' . ((!is_object($value) && !is_array($value)) ?
				$value : 'NA'
			);
		}

		// how much overhead is associated with md5 value here?
		// enough to worry about if signature is singleton?
		//static::$signature = md5(implode(':', $values));

		return md5(implode(':', $values));
		//}

		//return static::$signature;
	}

	/**
	 * We disallow object cloning to enforce the singleton pattern
	 */
	final private function __clone() {
		throw new Exception('Attempted __clone(): An instance of RequestInfoBean already exists');
	}

}

