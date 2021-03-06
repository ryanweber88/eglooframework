<?php
namespace eGloo\Combine;

use \eGloo\Configuration as Configuration;
use \Date as date;

/**
 * eGloo\Combine\S3 Class File
 *
 * Contains the class definition for the eGloo\Combine\S3
 * 
 * Copyright 2011 eGloo LLC
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
 * @author Ben Roberson
 * @copyright 2012 eGloo LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @category System
 * @package CLI
 * @subpackage Combines
 * @version 1.0
 */

/**
 * eGloo\Combine\S3
 *
 * Integrate with Amazon's S3
 *
 * This is a CLI interface to upload/delete/copy/etc files from a bucket.
 *
 * @category System
 * @package CLI
 * @subpackage Combines
 */
class S3Cmb extends Combine {

	/**
	 * @var array List of supported commands and their options/required arguments
	 */
	protected static $_supported_commands = array(
		'ls' => array(),
		'll' => array(),
		'lscf' => array(),
		'get' => array(),
		'env' => array(),
		'put' => array(),
		'_empty' => array(),
		'_zero_argument' => array(),
	);
	
	protected static function s3( $key, $secret ) {
		require_once Configuration::getS3IncludePath();
		return new \S3( $key, $secret );
	}

	public function execute() {
		$retVal = null;

		switch( $this->_command ) {
			case 'ls' :
				$retVal = $this->ls();
				break;
			case 'll' :
				$retVal = $this->ls( true );
				break;
			case 'lscf' :
				$retVal = $this->lscf();
				break;
			case 'get' :
				$retVal = $this->get();
				break;
			case 'env' :
				$retVal = static::envIsSetup( true );
				break;
			case 'put' :
				$retVal = $this->put();
				break;
			case '_empty' :
				$retVal = $this->info();
				break;
			case '_zero_argument' :
				$retVal = $this->info();
				break;
			default :
				break;
		}

		return $retVal;
	}

	protected function info() {
		echo 'This egloo CLI subcommand is designed to facilitate interaction' . "\n";
		echo ' with Amazon S3. The commands currently supported are: ' . "\n";
		echo "\n";
		echo 'env  -- evaluate if the required env vars are set and print their' . "\n";
		echo '  current values.' . "\n";
		echo 'ls  --  list buckets' . "\n";
		echo 'ls bucketName  --  list contents of the specified bucket' . "\n";
		echo 'll bucketName  --  list contents of the specified bucket, with file details' . "\n";
		echo 'lscf  --  list the Cloud Front distributions' . "\n";
		echo 'get  --  get a specific file' . "\n";
		echo 'put  --  put a specific file into a specific bucket' . "\n";
	}

	/**
	 * Check if the environment variables are set for S3's access key and secret key.
	 * If they are present, the current settings will be echo'd if 'true' is passed.
	 * If the vars are not set, a message will be echo'd and false will be returned.
	 */
	protected static function envIsSetup( $print_settings = false ) {
		
		$retVal = true;
		
		// if either key is missing, print a warning
		if (!array_key_exists( static::getAccessKeyKey(), $_SERVER )
		 || !array_key_exists( static::getSecretKeyKey(), $_SERVER )) {
				
			$retVal = false;
			echo "\n";
			echo 'The required environment variables are not set.' . "\n";
			echo static::getAccessKeyKey() . ' and ' . 
				static::getSecretKeyKey() . ' are both required.';
			echo "\n";
			echo "\n";
		}
		// if both keys are present, do nothing unless printing is desired
		else {
			if ( $print_settings ) {
				echo "\n";
				echo 'Current environment settings are...' . "\n";
				echo static::getAccessKeyKey() . ': ';
				echo $_SERVER[static::getAccessKeyKey()] . "\n";
				echo static::getSecretKeyKey() . ': ';
				echo $_SERVER[static::getSecretKeyKey()] . "\n";
				echo "\n";
			}
		}
		
		return $retVal;
	}
	
	/**
	 * Delegates listing of resources. depends whether a bucket name is specified
	 */
	protected function ls( $print_detailed = false ) {
		
		// fail fast if the correct env vars are not set
		if ( !static::envIsSetup() ) {
			return false;
		}
		
		$byteConv = 1024;
		$mb = $byteConv * $byteConv;
		$gb = $byteConv * $mb;
		
		// get the keys
		$access_key = $_SERVER[static::getAccessKeyKey()];
		$secret_key = $_SERVER[static::getSecretKeyKey()];
		
		$s3Obj = static :: s3( $access_key, $secret_key );
		
		// get number of command args, used to check if a bucket is specified
		$numArgs = count( $this->_command_arguments );
		
		// if a bucket is specified, list the contents of said bucket
		if ( $numArgs > 0 ) {
			// get the contents of the bucket from S3
			$result = $this->lsBucket( $s3Obj, $this->_command_arguments[0] );
			

			// print the contents of the bucket: file_size modified_date file_name
			foreach( $result as $key => $val ) {
				if( $print_detailed ) {
					
					$size = $val['size'];
					
					if( $size > ($gb) ) {
						$formattedSize = number_format( $size / $gb, 2 ) . 'g';
					}
					else if( $size > $mb ) {
						$formattedSize = number_format( $size / $mb, 0 ) . 'm';
					}
					else if( $size > $byteConv ) {
						$formattedSize = number_format( $size / $byteConv, 0 ) . 'k';
					}
					else {
						$formattedSize = $size . 'b';
					}
					
					$formattedDayTime = date('Y-m-d H:i', $val['time']);
				
					echo $formattedSize . ' ' . $formattedDayTime
						. ' ' . $val['name'] . "\n";
				}
				else {
					echo $val['name'] . "\n";
				}
			}
		}
		// if a bucket is not specified, list all buckets available with the given credentials
		else {
			$result = $this->listBuckets( $s3Obj );
			
			foreach( $result as $key => $val ) {
				echo $val . "\n";
			}
		}
	}

	/**
	 * List the Cloud Front distributions associated with the access/secret keys
	 */
	protected function lscf() {
		// fail fast if the correct env vars are not set
		if ( !static::envIsSetup() ) {
			return false;
		}
		
		// get the keys
		$access_key = $_SERVER[static::getAccessKeyKey()];
		$secret_key = $_SERVER[static::getSecretKeyKey()];
		
		$s3Obj = static :: s3( $access_key, $secret_key );
		
		print_r($s3Obj->listDistributions());
	}
	
	/**
	 * Get a file from s3
	 */
	protected function get() {
		// fail fast if the correct env vars are not set
		if ( !static::envIsSetup() ) {
			return false;
		}
		
		// get the keys
		$access_key = $_SERVER[static::getAccessKeyKey()];
		$secret_key = $_SERVER[static::getSecretKeyKey()];
		
		$s3Obj = static :: s3( $access_key, $secret_key );
		
		// get number of command args, used to check if a bucket is specified
		$numArgs = count( $this->_command_arguments );
		
		// if a object is specified, get it
		if ( $numArgs == 3 ) {
			
			$bucket = $this->_command_arguments[0];
			$uri = $this->_command_arguments[1];
			$fileToSave = $this->_command_arguments[2];

			// get the object
			$result = $s3Obj->getObject( $bucket,  $uri, $fileToSave );
		}
		// if a bucket is not specified
		else {
			echo 'Please use the format: bucketName folderOne/folderTwo/resource newFileName' . "\n";
		}
		
		return true;
	}
	
	/**
	 * Put at file into s3.
	 */
	protected function put() {
		// fail fast if the correct env vars are not set
		if ( !static::envIsSetup() ) {
			return false;
		}
		
		$result = false;
		
		// get the keys
		$access_key = $_SERVER[static::getAccessKeyKey()];
		$secret_key = $_SERVER[static::getSecretKeyKey()];
		
		$s3Obj = static :: s3( $access_key, $secret_key );
		
		// get number of command args, used to check if a bucket is specified
		$numArgs = count( $this->_command_arguments );
		
		// if a bucket and object are specified, put object in bucket
		if ( $numArgs == 2 ) {
			
			$bucket = $this->_command_arguments[0];
			$uri = $this->_command_arguments[1];

			// this calculates the md5sum, etc
			$inputInfo = $s3Obj->inputFile( $uri );

			// put the object
			$result = $s3Obj->putObject( $inputInfo, $bucket,  $uri );
		}
		// if a bucket+obj are not specified
		else {
			echo 'Please use the format: bucketName filNameToPut' . "\n";
		}
		
		// print a summary of the results
		if ( $result == 1) {
			echo 'SUCCESS!' . "\n";
			echo 'Object Info:' . "\n";
			$info = $s3Obj->getObjectInfo( $bucket, $uri );
			print_r( $info );
		}
		else {
			echo 'FAIL' . "\n";
			print_r( $result );
		}
		
		return $result;
	}
	
	/**
	 * Small wrapper for the getBucket() method provided in the S3 lib
	 */
	protected function lsBucket( $s3Obj, $bucketName ) {
		$result = $s3Obj->getBucket( $bucketName );
		return $result;
	}
	
	/**
	 * Small wrapper for the listBuckets() method provided in the S3 lib
	 */
	protected function listBuckets( $s3Obj ) {
		$result = $s3Obj->listBuckets( );
		return $result;
	}

	public function commandRequirementsSatisfied() {
		return true;
	}

	/**
	 * Return the help information for this class as a string
	 *
	 * @return string the help information for this class
	 * @author Ben Roberson
	 **/
	public static function getHelpString() {
		return 'helpString';
	}

	/**
	 * Because static class vars are ugly in PHP5, let's just make a static method
	 */
	public static function getAccessKeyKey() {
		return 'S3_ACCESS_KEY';
	}
	
	/**
	 * Because static class vars are ugly in PHP5, let's just make a static method
	 */
	public static function getSecretKeyKey() {
		return 'S3_SECRET_KEY';
	}
}

