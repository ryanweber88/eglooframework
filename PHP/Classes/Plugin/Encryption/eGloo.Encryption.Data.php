<?php
namespace eGloo\Encryption;

/**
 * \eGloo\Encryption\Data Class File
 *
 * Contains the class definition for the \eGloo\Encryption\Data
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
 * \eGloo\Encryption\Data
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class Data {

	/**
	 * @var bool Whether this data is encrypted or not
	 */
	protected $_is_encrypted = false;

	/**
	 * Returns protected class member $_is_encrypted
	 *
	 * @return bool Whether this data is encrypted or not
	 */
	public function isEncrypted() {
		return $this->_is_encrypted;
	}

	/**
	 * Sets protected class member $_is_encrypted
	 *
	 * @param is_encrypted bool Whether this data is encrypted or not
	 */
	public function setIsEncrypted( $is_encrypted = true ) {
		$this->_is_encrypted = $is_encrypted;
	}

	/**
	 * @var string Encryption method used
	 */
	protected $_encryption_method = null;

	/**
	 * Returns protected class member $_encryption_method
	 *
	 * @return string Encryption method used
	 */
	public function getEncryptionMethod() {
		return $this->_encryption_method;
	}

	/**
	 * Sets protected class member $_encryption_method
	 *
	 * @param encryption_method string Encryption method used
	 */
	public function setEncryptionMethod( $encryption_method ) {
		$this->_encryption_method = $encryption_method;
	}

	/**
	 * @var string Encryption token used
	 */
	protected $_encryption_token = null;

	/**
	 * Returns protected class member $_encryption_token
	 *
	 * @return string Encryption token used
	 */
	public function getEncryptionToken() {
		return $this->_encryption_token;
	}

	/**
	 * Sets protected class member $_encryption_token
	 *
	 * @param encryption_token string Encryption token used
	 */
	public function setEncryptionToken( $encryption_token ) {
		$this->_encryption_token = $encryption_token;
	}

	/**
	 * @var string Salt used
	 */
	protected $_salt = null;

	/**
	 * Returns protected class member $_salt
	 *
	 * @return string Salt used
	 */
	public function getSalt() {
		return $this->_salt;
	}

	/**
	 * Sets protected class member $_salt
	 *
	 * @param salt string Salt used
	 */
	public function setSalt( $salt ) {
		$this->_salt = $salt;
	}

	/**
	 * @var integer Number of iterations run
	 */
	protected $_iterations_run = null;

	/**
	 * Returns protected class member $_iterations_run
	 *
	 * @return integer Number of iterations run
	 */
	public function getIterationsRun() {
		return $this->_iterations_run;
	}

	/**
	 * Sets protected class member $_iterations_run
	 *
	 * @param iterations_run integer Number of iterations run
	 */
	public function setIterationsRun( $iterations_run ) {
		$this->_iterations_run = $iterations_run;
	}

	/**
	 * @var string Initialization vector for cypher
	 */
	protected $_initialization_vector = null;

	/**
	 * Returns protected class member $_initialization_vector
	 *
	 * @return string Initialization vector for cypher
	 */
	public function getInitializationVector() {
		return $this->_initialization_vector;
	}

	/**
	 * Sets protected class member $_initialization_vector
	 *
	 * @param initialization_vector string Initialization vector for cypher
	 */
	public function setInitializationVector( $initialization_vector ) {
		$this->_initialization_vector = $initialization_vector;
	}

	/**
	 * @var serializable Value of this data
	 */
	protected $_value = null;

	/**
	 * Returns protected class member $_value
	 *
	 * @return serializable Value of this data
	 */
	public function getValue() {
		return $this->_value;
	}

	/**
	 * Sets protected class member $_value
	 *
	 * @param value serializable Value of this data
	 */
	public function setValue( $value ) {
		$this->_value = $value;
	}

	public function __toString() {
		return $this->_value;
	}

}

