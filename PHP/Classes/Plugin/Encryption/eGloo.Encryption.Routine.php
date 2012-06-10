<?php
namespace eGloo\Encryption;

/**
 * \eGloo\Encryption\Routine Class File
 *
 * Contains the class definition for the \eGloo\Encryption\Routine
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
 * \eGloo\Encryption\Routine
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class Routine {

		// protected $token = 'lQGwO]xD5z[5uQOj^M';

	/**
	 * @var string Encryption token
	 */
	protected $_token = null;

	public function encrypt( $data ) {
		$retVal = false;

		if ( $data !== null ) {
			$text = $data;

			$iv_size = mcrypt_get_iv_size( MCRYPT_RIJNDAEL_256, MCRYPT_MODE_CFB );
			$iv = mcrypt_create_iv( $iv_size, MCRYPT_RAND );

			$data->setInitializationVector( $iv );
			$crypttext = mcrypt_encrypt( MCRYPT_RIJNDAEL_256, $this->_token, $text, MCRYPT_MODE_CFB, $iv );

			$data->setValue( $crypttext );
			$data->setIsEncrypted();

			$retVal = $crypttext;
		}

		return $retVal;
	}

	public function decrypt( $data ) {
		$retVal = false;

		if ( $data !== null ) {
			$crypttext = $data;

			$decrypttext = mcrypt_decrypt( MCRYPT_RIJNDAEL_256, $this->_token, $crypttext, MCRYPT_MODE_CFB, $data->getInitializationVector() );
			$decrypttext = trim( $decrypttext );

			$data->setValue( $decrypttext );
			$data->setIsEncrypted( false );

			$retVal = $decrypttext;
		}

		return $retVal;
	}

	/**
	 * Returns protected class member $_token
	 *
	 * @return string Encryption token
	 */
	public function getToken() {
		return $this->_token;
	}

	/**
	 * Sets protected class member $_token
	 *
	 * @param token string Encryption token
	 */
	public function setToken( $token ) {
		$this->_token = $token;
	}

}

