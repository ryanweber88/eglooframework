<?php
namespace eGloo\DataProcessing\Connection;

use \eGloo\DataProcessing\ConnectionManagement\DBConnectionManager;
use \eGloo\DataProcessing\Connection\DatabaseErrorException;
// use \eGloo\Utility\Logger     as Logger;

/**
 * PostgreSQLDBConnection Class File
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
 * @author Gilbert Sewovoe-Ekoue
 * @copyright 2011 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @package $package
 * @subpackage $subpackage
 * @version 1.0
 */

/**
 * PostgreSQLDBConnection
 *
 * $short_description
 *
 * $long_description
 *
 * @package $package
 * @subpackage $subpackage
 */
class PostgreSQLDBConnection extends DBConnection {
	
	/** @var resource connection oobject */
	// protected $link = null;
	protected static $link = null;
	
	/**
	 * Database connection method
	 * 
	 * @param resource $rawConnectionResource 
	 */
	public function __construct( $rawConnectionResource = null ) {
		$this->setConnectionDialect( \DialectLibrary::POSTGRESQL );

		if ( is_null($rawConnectionResource) && self::$link === null ) {
			\DBConnectionManager::resetConnections();

			self::$link = \DBConnectionManager::getConnection()->getRawConnectionResource();

			if ( null === self::$link ) {
				throw new DatabaseErrorException('Can\'t connect to database server.');
			}
		} else {
			$this->setRawConnectionResource( $rawConnectionResource );
		}
	}
	
	/**
	 * Establis connection when unavailable
	 * 
	 * @return resource DB connection resource
	 */
	public function getConnection () {
		if (self::$link === null) {
			self::$link = \DBConnectionManager::getConnection()->getRawConnectionResource();
		}

		return self::$link;
	}
	
	/**
	 * Mysql like PDO using execute method. 
	 * Replace ? with $ for postgres
	 * 
	 * @param string $sql
	 * @param array $params
	 * @return string 
	 */
	protected function prepareStatment ( &$sql, $params ) {
		$sqlarray = explode('?', $sql);
		$sql = ''; $index = 1;
		$last = sizeof($sqlarray) -1;
		foreach ($sqlarray as $part){
			if($last < $index) {			
				$sql .= $part;
			} else {
				$sql .= $part . '$' . $index;
			}
			$index++;
		}
		return $sql;
	}

	/**
	 * Postgres execution routine.
	 * Prepare execution path and return closure object of pg_result object
	 * Used in combination with getUnique to query single row
	 * or getAll to query set of data
	 * 
	 * @param string $sql
	 * @param array $params
	 * @param string/function $callback
	 * @return string postgres result
	 * @exception throw \Connection\DatabaseErrorException
	 */
	protected function execute ($sql, array $params = array(), $callback = null) {
		$this->prepareStatment($sql, $params);

		if ( !isset(self::$link) ) {
			self::$link = $this->getConnection();
		}

		if (false !== ($result = pg_query_params(self::$link, $sql, $params))) {
			return is_callable($callback)
				? $callback($result, self::$link)
				: $result;
		}

		throw new DatabaseErrorException(pg_last_error(self::$link), $sql);
	}
	
	public function executeArbitrary ($sql, array $params = array()) {
		$this->prepareStatment($sql, $params);
		isset(self::$link) ?: $this->getConnection();

		try {
			return pg_query_params(self::$link, $sql, $params);
		} catch (Exception $exc) {
			throw $exc;
		}
	}

	/**
	 * Execute Update
	 * 
	 * @param type $sql
	 * @param array $params
	 * @return type 
	 */
	public function executeUpdate($sql, array $params) {
		$pg_result = self::execute($sql, $params);
		return pg_affected_rows($pg_result);
	}
	
	/**
	 * Execute Delete
	 * @param type $sql
	 * @param array $params
	 * @return type 
	 */
	public function executeDelete($sql, array $params) {
		$pg_result = self::execute($sql, $params);
		return pg_affected_rows($pg_result);
	}
	
	/**
	 * Execute Insert and return last insert ID
	 *		Assume the use of Returning ID or NOT
	 * @param type $sql
	 * @param array $params
	 * @return Integer Last Insert ID or true to indicate successful insert
	 *			Failed insert already throw an exception
	 * @throws DatabaseErrorException 
	 */
	public function executeInsert($sql, array $params) {
		if (preg_match('/^insert\s+?into\s+?([\w-_]+)\s+/i', $sql, $matches) !== false) {
			// parse sql for table name - this isn't a perfect solution and will not work
			// for all cases, but will work for the majority of them
			if ( !preg_match('/returning\s/is', $sql) && !preg_match('/\;$/', $sql) ) { 
				preg_match(						
					'/insert\s+?into\s+?(\S+)/is', $sql, $match
				);

				$sql .= " RETURNING {$match[1]}.* ";
			}

			$pg_result = self::execute($sql, $params);

			if ( pg_affected_rows($pg_result) !== 0 ) {
				$insert_row = pg_fetch_assoc($pg_result);
				
				// find the table name, and from this, find the 
				// primary key
				preg_match('/insert\s+?into\s+?(\S+)/i', $sql, $match);
				$primaryKey = "{$match[1]}_id";
				
				if ( isset($insert_row[$primaryKey]) ) {
					return $insert_row[$primaryKey];
				}
			}
		} else {
			throw new DatabaseErrorException('Unable to execute insert Statement', $sql);
		}
	}
	
	/**
	 *
	 * @param type $sql
	 * @param array $params
	 * @return type 
	 */
	public function executeSelect($sql, $params = array()) {
		$pg_result = self::execute($sql, $params );
		return pg_fetch_all($pg_result);
	}

	/**
	 *
	 * @param type $sql
	 * @param array $params
	 * @param type $callback
	 * @return type 
	 */
	public function getList( $sql, $params = array(), $callback = null ) {
		return $this->execute($sql, $params, function($result, $link) use ($callback){
			$index = 0;
			$list = array();
			for($index = 0; ($row = pg_fetch_assoc( $result )) !== false; $index++) {
				if ($callback !== null ) {
					$list[$index] = $callback($index++, $row );
				} else {
					$list[$index] = $row;
					$index++;
				}
			}
			return $list;
		});		
	}
	
	/**
	 *
	 * @param type $sql
	 * @param array $params
	 * @param type $callback
	 * @return type 
	 */
	public function getUnique( $sql, $params = array(), $callback = null ) {
		if ($callback !== null) {
			return $this->execute ($sql, $params, function ($result, $link) use ($callback) {
				if($row = pg_fetch_assoc($result)) {
					$object = $callback( $row );
				}
				return $object;
			});
		}

		$pg_result = $this->execute($sql, $params);
		return pg_fetch_assoc($pg_result);
	}
	
	/**
	 * 
	 */
	public function beginTransaction() {
		!is_null (self::$link) ?: $this->getConnection();
		
		pg_query(self::$link, 'BEGIN TRANSACTION');
		if (pg_last_error(self::$link) != false) {
			throw  new \DatabaseErrorException();
		}
	}
	
	/**
	 * 
	 */
	protected function commitTransaction () {
		!is_null (self::$link) ?: $this->getConnection();
		
		pg_query(self::$link, 'COMMIT TRANSACTION');
		if (pg_last_error(self::$link) != false) {
			throw  new \DatabaseErrorException();
		}
	}

	/**
	 * 
	 */
	protected function rollbackTransaction () {
		!is_null (self::$link) ?: $this->getConnection();
		
		@pg_qery(self::$link, 'ROLLBACK TRANSACTION');
		if (pg_last_error(self::$link) != false) {
			throw  new \DatabaseErrorException();
		}
	}
	
	/**
	 * Clean database resource
	 * 
	 * @return void
	 */
	public function __destruct() {
		// if ( is_resource(self::$link) ) {
		// 	pg_close(self::$link);
		// } else {
		// 	self::$link = null;
		// }
	}
}