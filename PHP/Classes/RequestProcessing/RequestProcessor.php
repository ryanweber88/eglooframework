<?php
/**
 * RequestProcessor Abstract Class File
 *
 * Needs to be commented
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
 * @author Keith Buel
 * @copyright 2011 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @package RequestProcessing
 * @version 1.0
 */
 use \eGloo\HTTP;

/**
 * RequestProcessor
 *
 * Needs to be commented
 *
 * @package RequestProcessing
 */
abstract class RequestProcessor {

	const RESPONSE_CODE_ERROR_REQUEST  = 400;
	const RESPONSE_CODE_ERROR_INTERNAL = 500;

	/* Public Static Members */
	public static $calledClass = null;

	/* Protected Data Members */
	protected $decoratorInfoBean = null;
	protected $bean              = null;
	protected $request;

	protected $param_filter_policy = 'whitelist';

	protected $routes = array(
	);

	public function __construct() {
		$this->decoratorInfoBean = DecoratorInfoBean::getInstance();

		// serves simply as an alias
		$this->bean = RequestInfoBean::getInstance();

		// provides information about requests
		// @TODO this may be a bit confusing since most
		// frameworks combine the concept of bean and request
		// as request
		$this->request = HTTP\Request::instance();
	}

	public static function getClass() {
		$retVal = null;

		if ( isset(static::$calledClass) ) {
			$retVal = static::$calledClass;
		} else {
			$retVal = static::$calledClass = get_called_class();
		}

		return $retVal;
	}

	abstract public function processRequest();

	public function processErrorRequest() {
		echo "Please implement processErrorRequest()";
	}

	// Framework before
	public function _internalBefore() {

	}

	// Framework after
	public function _internalAfter() {

	}

    // TODO we need to make a templated method for processing
    // both the header information and then the content information
    // to guarantee that by default we handle content headers and
    // and other prerequisites correctly

 	public function setRequestInfoBean( $requestInfoBean ) {
 		$this->bean = $requestInfoBean;
 	}

 	public function getRequestInfoBean() {
 		return $this->bean;
 	}

	public function setDecoratorInfoBean( $decoratorInfoBean ) {
		$this->decoratorInfoBean = $decoratorInfoBean;
	}

	public function getDecoratorInfoBean() {
		return $this->decoratorInfoBean;
	}

	/**
	 *
	 * Caches page for given period of time (ttl)
	 */
	public function cache($ttl = null) {

		// if ttl is null, we set to a year which is effectively
		// infinite by internet standards
		// @TODO uhoh don't tell george
		is_null($ttl) && $ttl = __(1)->year;

		// @TODO underlying cache mechanism should be both decoupled
		// and abstracted; for now, cache will simply supply cache
		// control headers to be served to gateway/http cache
		header("Cache-Control: must-revalidate, max-age=$ttl");

	}

	/**
	 *
	 * Expires cache for page (if any)
	 */
	public function expire() {
		// @TODO again, this should be decoupled and abstracted,
		// but for the time being we will use http headers to
		// control cache on a gateway cache

		// we are purposefully using past date to force cache
		header('Expires: Fri, 30 Oct 1998 14:19:41 GMT');

	}

	public function __call($name, $arguments) {
		// allow for calling error methods with response
		// codes as part of method name
		if (preg_match('/^error_([0-9]+)$/', $name, $match)) {
			// @TODO check if message has been passed?
			return $this->error($match[1], $arguments[0]);
		}

		// allow for calling respond method with response
		// type as part of method name
		// @PASS
	}

	/**
	 * Attached error response code and message to response header
	 * @TODO place is RequestProcessor
	 */
	protected function error($code, $message) {
		// @TODO generate response header with error code and
		// response message
		// @TODO this is new to 5.4; it may be better to be backword
		// compatible at the framework
		header(
			"HTTP/1.0 $code $message", true, $code
		);

		// generate error response body
		// @TODO decouple/encapsulate
		// @TODO create application specific error code handler
	  $this->respond(array(
	  	'codes'   => array($code),
	  	'message' => $message
	  ));
	}

	public static function getRequestType() {
		return '';
	}

	public static function getRoutes() {
		return array();
	}

	public static function getActions() {
		return array();
	}

	public static function getCRUDActions() {
		return array();
	}

	public function setCRUDActions() {
		return array();
	}

	public static function getWhitelistArgs() {
		return array();
	}

	public static function getBlacklistArgs() {
		return array();
	}

	public static function getValidators() {
		return array();
	}

	public static function getBoolArgs() {
		return array();
	}

	public static function getSelectArgs() {
		return array();
	}

	public static function getVariableArgs() {
		return array();
	}

	public static function getFormArgs() {
		return array();
	}

	public static function getComplexArgs() {
		return array();
	}

	public static function getDependencies() {
		return array();
	}

	public static function getInitRoutines() {
		return array();
	}

	public static function getDecorators() {
		return array();
	}

	public static function getAttributeSets() {
		return array();
	}

}
