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
 * @author Christian Calloway christian@petflow callowaylc@gmail
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
abstract class AJAXRequestProcessor {




  /**   
   * Overwrites parent to convert response 
   * to JSON
   * @TODO place in RequestProcessor
   */
	protected function respond($with) {
		// @TODO check that 
		if (($content = json_encode($with)) !== false) {
			echo json_encode($content);
		
		} else {
			$this->error(
				self::RESPONSE_CODE_ERROR_INTERNAL, 
				'Failed to convert argument $with to JSON'
			);
		}
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
	  //http_response_code($code);

	  // generate error response body
	  // @TODO decouple/encapsulate
	  // @TODO create application specific error code handler
	  $this->respond([
	  	'codes'   => $code,
	  	'message' => $message
	  ]);
  }


}