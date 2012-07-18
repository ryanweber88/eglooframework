<?php
namespace eGloo\Combine;

use \eGloo;
use \eGloo\Configuration as Configuration;
use \eGloo\Utility\Logger as Logger;

use \eGloo\Performance\Caching\Gateway as CacheGateway;
use \eGloo\Security\RequestValidator\ExtendedRequestValidator as ExtendedRequestValidator;

use \Exception as Exception;

/**
 * eGloo\Combine\Help Class File
 *
 * Contains the class definition for the eGloo\Combine\Help
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
 * @author George Cooper
 * @copyright 2011 eGloo LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @category $category
 * @package $package
 * @subpackage $subpackage
 * @version 1.0
 */

/**
 * eGloo\Combine\Help
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class Help extends Combine {

	/**
	 * @var array List of supported commands and their options/required arguments
	 */
	protected static $_supported_commands = array(
		'_empty' => array(),
		'_zero_argument' => array(),
		'all' => array(),
	);

	/**
	 * Delegates which method to execute, depending on command passed
	 */
	public function execute() {
		$retVal = null;

		switch( $this->_command ) {
			case '_empty' :
				$retVal = $this->printCommandInfo();
				break;
			case '_zero_argument' :
				$retVal = $this->printHelpInfo();
				break;
			case 'all' :
				echo $this->listPrettily();
				break;
			default :
				break;
		}

		return $retVal;
	}

	/**
	 * Print help for the command specified.
	 */
	protected function printCommandInfo() {
		$retVal = false;

		if ( isset( $this->_command_arguments[0]) ) {
			$info_subject = $this->_command_arguments[0];

			$combine_class = Configuration::getCLICombineMapping( $info_subject );

			if ( class_exists($combine_class) ) {
				echo $combine_class::getHelpString() . "\n";
			} else {
				echo 'No help found for command "' . $info_subject . '"' . "\n";
			}

			$retVal = true;
		}

		return $retVal;
	}

	protected function printHelpInfo() {
		echo self::getHelpString() . "\n";
	}
	
	/**
	 * This method will return out a list of available commands and their
	 * corresponding classes.
	 * 
	 * @return String A list of available commands.
	 * @author Ben Roberson
	 */
	protected function listPrettily() {
		$retVal = "";
		
		// get a list of the commands + classes
		$combine_list = Configuration::getCLICombineList();
		
		$tabLength = 4;
		$longestKey = $this->getLongestKey( $combine_list );
		$spacing = $longestKey + $tabLength;
		$format = "%-" . $spacing . "s %s";
		
		// we are explicitly ignoring the "Zalgo" class and this class
		foreach ( $combine_list as $combine_id => $combine_class ) {
			
			if ( class_exists( $combine_class )
					&& $combine_class !== '\eGloo\Combine\Zalgo'
					&& $combine_class !== '\eGloo\Combine\Help' ) {

				$values[] = $combine_id;
				$values[] = $combine_class::getHelpString();
				
				// add one formatted line to the string
				$retVal .= vsprintf( $format , $values ) ."\n";
				
				$values = '';
			}	
		}

		return $retVal;
	}
	
	/**
	 * Return the strlen of the longest string key in the assoc array. Will
	 * blow up if passed is not an assoc array, or keys are not strings.
	 * 
	 * @return int strlen of the longest key
	 * @author Ben Roberson
	 */
	public function getLongestKey($assocArray) {
		
		$retVal = -1;
			
		// fail early
		assert( is_array( $assocArray ));
		
		foreach ( $assocArray as $key => $val ) {
			
			assert( is_string( $key ));
			
			if ( strlen( $key ) > $retVal ) {
				$retVal = strlen( $key );
			}
		}
		
		return $retVal;
	}

	public function commandRequirementsSatisfied() {
		$retVal = false;

		switch( $this->_command ) {
			// case 'info' :
			// 	$retVal = $this->infoCommandRequirementsSatisfied();
			// 	break;
			// case 'list' :
			// 	$retVal = $this->listCommandRequirementsSatisfied();
			// 	break;
			default :
				$retVal = true;
				break;
		}

		return $retVal;
	}

	/**
	 * Return the help information for this class as a string
	 *
	 * @return string the help information for this class
	 * @author George Cooper
	 **/
	public static function getHelpString() {

		$retVal = 'eGloo Help: Work in Progress'."\n";
		$retVal .= 'See "egloo help <command>" for more information on a ';
		$retVal .= 'specific command'."\n\n";

		// not 100% sure why this method is static...
		$helpClass = new Help();
		$retVal .= $helpClass->listPrettily();

		return $retVal;
	}

}