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
	 * Convenience method for logging
	 */
	protected function log($message) {
		
		eGlooLogger::writeLog( 
			eGlooLogger::DEBUG, $message
		);		
		
	}


}
