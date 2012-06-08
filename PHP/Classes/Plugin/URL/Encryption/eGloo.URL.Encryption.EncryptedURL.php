<?php
namespace eGloo\URL\Encryption;

/**
 * eGloo\URL\Encryption\EncryptedURL Class File
 *
 * Contains the class definition for the eGloo\URL\Encryption\EncryptedURL
 * 
 * Copyright 2012 eGloo LLC
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
 * @copyright 2012 eGloo LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @category $category
 * @package $package
 * @subpackage $subpackage
 * @version 1.0
 */

/**
 * eGloo\URL\Encryption\EncryptedURL
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class EncryptedURL {

	public $encryption_instance_id = null;
	public $request_class_instance_id = null;

	protected $data = null;

	public function __construct( $data ) {
		$this->data = $data;
	}

	// This was great except one problem. Since you encrypted by dropping any =,
	// when you try to decrypt you can’t put those =’s back, so you don’t get the
	// same output. I just changed the arrays to (‘-’,'_’,'=’) and (‘+’,'/’,'#’) and
	// all was good

	public function urlEncode() {
		$retVal = null;

		$retVal = base64_encode( $this->data );
		$retVal = urlencode( $retVal );
		// $retVal = str_replace( array('+','/','='), array('-','_',''), $retVal );
		$retVal = $data;

		return $retVal;
	}

	public function urlDecode() {
		$retVal = null;

		$retVal = str_replace( array('-','_'), array('+','/'), $this->data );
		$mod4 = strlen( $retVal ) % 4;

		if ( $mod4 ) {
			$retVal .= substr( '====', $mod4 );
		}

		$retVal = urldecode( $retVal );
		$retVal = base64_decode( $retVal );

		return $retVal;
	}

}

