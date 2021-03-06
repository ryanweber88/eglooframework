<?php
/**
 * QueryTransformationManager Class File
 *
 * $file_block_description
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
 * @author George Cooper
 * @copyright 2011 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @package $package
 * @subpackage $subpackage
 * @version 1.0
 */

/**
 * QueryTransformationManager
 *
 * $short_description
 *
 * $long_description
 *
 * @package $package
 * @subpackage $subpackage
 */
class QueryTransformationManager {

	public static function getQueryResponseTransactionTransformRoutine( $queryResponseTransaction ) {
		// TODO Make this a bit more generalized and less raw
		$retVal = null;

		if ( $queryResponseTransaction->getQueryDialect() === DialectLibrary::MYSQL ) {
			$retVal = new MySQLQueryResponseTransactionTransformRoutine();
		} else if ( $queryResponseTransaction->getQueryDialect() === DialectLibrary::MYSQLI ) {
			$retVal = new MySQLiQueryResponseTransactionTransformRoutine();
		} else if ( $queryResponseTransaction->getQueryDialect() === DialectLibrary::MYSQLIOOP ) {
			$retVal = new MySQLiOOPQueryResponseTransactionTransformRoutine();
		}

		return $retVal;
	}

}

