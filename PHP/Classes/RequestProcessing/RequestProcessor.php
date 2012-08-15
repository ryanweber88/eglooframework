<?php
use \eGloo\Dialect\ObjectSafe as Object;

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

/**
 * RequestProcessor
 *
 * Needs to be commented
 * 
 * @package RequestProcessing
 */
abstract class RequestProcessor extends Object {

	/* Public Static Members */
	public static $calledClass = null;

	/* Protected Data Members */
	protected $requestInfoBean = null;
	protected $decoratorInfoBean = null;
	protected $bean = null;
	
	/* Private Data Members */
	private $forwarded = false;

	public function __construct() {
		$this->requestInfoBean = RequestInfoBean::getInstance();
		$this->decoratorInfoBean = DecoratorInfoBean::getInstance();

		// serves simply as an alias
		$this->bean = $this->requestInfoBean;
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

    // TODO we need to make a templated method for processing
    // both the header information and then the content information
    // to guarantee that by default we handle content headers and
    // and other prerequisites correctly 
    
 	public function setRequestInfoBean( $requestInfoBean ) {
 		$this->requestInfoBean = $requestInfoBean;
 	}
 	
 	public function getRequestInfoBean() {
 		return $this->requestInfoBean;
 	}

	public function setDecoratorInfoBean( $decoratorInfoBean ) {
		$this->decoratorInfoBean = $decoratorInfoBean;
	}

	public function getDecoratorInfoBean() {
		return $this->decoratorInfoBean;
	}
	
	/**
	 * Stub method for pre dispatch execution
	 */
	protected function beforeProcessRequest() { }
	
	/**
	 * Stub method for post dispatch execution
	 */
	protected function afterProcessRequest() { }
	
	/**
	 * Encapsultes process request along with pre and
	 * post hooks
	 */
	public function process() {
		$this->beforeProcessRequest();
		$this->processRequest();
		$this->afterProcessRequest();
	}

	/**
	 * Forward current request to a different request processor; 
	 */
	public function forward($requestProcessor) {
		require_once $requestProcessor;
		
		if (class_exists($requestProcessor) &&
		    $requestProcessor instanceof RequestProcessor) {

			// copy/reference bean data to forwarded request processor
			$requestProcessor       = new $requestProcessor;
			$requestProcessor->bean = $this->bean;
			
			$requestProcessor->process();		    	
		}
		
		else {
			// @TODO throw exception that require controller failed
			throw new \Exception(
				"Faild to forward to Request Processor '$requestProcessor' because it does not exist"
			);
		}
	}
	
	/**
	 * Convenience method for logging
	 */
	protected function log($message) {
		
		eGlooLogger::writeLog( 
			eGlooLogger::DEBUG, $message
		);		
		
	}


}
