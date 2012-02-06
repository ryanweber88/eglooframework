<?php
namespace eGloo\DataProcessing\Connection;
use \eGloo\DataProcessing\ConnectionManagement\DBConnectionManager;
use \eGloo\DataProcessing\Connection\DatabaseErrorException;
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
	protected	$link = null;
	
	/**
	 * Database connection method
	 * 
	 * @param resource $rawConnectionResource 
	 */
	public function __construct( $rawConnectionResource = null ) {
		$this->setConnectionDialect( \DialectLibrary::POSTGRESQL );

		if (is_null ($rawConnectionResource)) {
			\DBConnectionManager::resetConnections();
			$this->link = \DBConnectionManager::getConnection()->getRawConnectionResource();
			if (null == $this->link) {
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
		if ($this->link === null) {
			$this->link = \DBConnectionManager::getConnection()->getRawConnectionResource();
		}
		return $this->link;
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
		isset($this->link) ?: $this->getConnection();
		
		if (false !== ($result = pg_query_params($this->link, $sql, $params))) {
			return is_callable($callback)
				? $callback($result, $this->link)
				: $result;
		}
		throw new DatabaseErrorException(pg_last_error($this->link), $sql);
	}
	
	public function executeArbitrary ($sql, array $params = array()) {
		$this->prepareStatment($sql, $params);
		isset($this->link) ?: $this->getConnection();
		var_dump($params);
		try {
			return pg_query_params($this->link, $sql, $params);
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
	 *			Failed insert already thow an exception
	 * @throws DatabaseErrorException 
	 */
	public function executeInsert($sql, array $params) {
		if (preg_match('/^insert\s+?into\s+?([\w-_]+)\s+/i', $sql, $matches) !== false) {
			$pg_result = self::execute($sql, $params);
			if( pg_affected_rows($pg_result) !== 0 ) {
				$insert_row = pg_fetch_row($pg_result);
//				if (!is_array($insert_row)) {
//					$result = $this->execute('SELECT lastval();');
//					$insert_row = pg_fetch_row($result);
//				}
				return is_array($insert_row) ? array_shift($insert_row) : true;
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
	public static function executeSelect($sql, $params = array()) {
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
			while ($row = pg_fetch_assoc( $result )){
				if ($callback !== null ) {
					$list[$index] = $callback($index++, $row );
				} else {
					$list[$index] = $row;
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
		!is_null ($this->link) ?: $this->getConnection();
		
		pg_query($this->link, 'BEGIN TRANSACTION');
		if (pg_last_error($this->link) != false) {
			throw  new \DatabaseErrorException();
		}
	}
	
	/**
	 * 
	 */
	protected function commitTransaction () {
		!is_null ($this->link) ?: $this->getConnection();
		
		pg_query($this->link, 'COMMIT TRANSACTION');
		if (pg_last_error($this->link) != false) {
			throw  new \DatabaseErrorException();
		}
	}

	/**
	 * 
	 */
	protected function rollbackTransaction () {
		!is_null ($this->link) ?: $this->getConnection();
		
		pg_qery($this->link, 'ROLLBACK TRANSACTION');
		if (pg_last_error($this->link) != false) {
			throw  new \DatabaseErrorException();
		}
	}
	
	/**
	 * Clean database resource
	 * 
	 * @return void
	 */
	public function __destruct() {
		is_resource($this->link) ? pg_close($this->link) : $this->link = null;
	}
}