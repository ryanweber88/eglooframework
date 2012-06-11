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

	/**
	 * @var eGloo\Encryption\Data Encrypted data object
	 */
	protected $_data = null;

	/**
	 * Returns protected class member $_data
	 *
	 * @return eGloo\Encryption\Data Encrypted data object
	 */
	public function getData() {
		return $this->_data;
	}

	/**
	 * Sets protected class member $_data
	 *
	 * @param data eGloo\Encryption\Data Encrypted data object
	 */
	public function setData( $data ) {
		$this->_data = $data;
	}

	/**
	 * @var string Value of this encrypted URL
	 */
	protected $_value = null;

	/**
	 * Returns protected class member $_value
	 *
	 * @return string Value of this encrypted URL
	 */
	public function getValue() {
		return $this->_value;
	}

	/**
	 * Sets protected class member $_value
	 *
	 * @param value string Value of this encrypted URL
	 */
	public function setValue( $value ) {
		$this->_value = $value;
	}

	public function __construct( $data = null ) {
		if ( $data !== null && !$data->isEncrypted() ) {
			throw new \Exception( 'Cannot create an encrypted URL from unencrypted data object' );
		}

		$this->_data = $data;
		$this->_value = (string) $data;
	}

	public function base64Encode() {
		$data = base64_encode( $this->_value );
		$this->_value = $data;
	}

	public function base64Decode() {
		$data = base64_decode( $this->_value );
		$this->_value = $data;

		if ( $this->_data !== null && $this->_data->getValue() === null ) {
			$this->_data->setValue( $this->_value );
		}
	}

	public function urlEncode() {
		$data = urlencode( $this->_value );
		$this->_value = $data;
	}

	public function urlDecode() {
		$data = urldecode( $this->_value );
		$this->_value = $data;

		if ( $this->_data !== null && $this->_data->getValue() === null ) {
			$this->_data->setValue( $this->_value );
		}
	}

	public function __toString() {
		return $this->_value;
	}

}

