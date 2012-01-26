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
	public function executeQuery ($sql, array $params = null, $callback = null) {
		$this->prepareStatment($sql, $params);

		isset($this->link) ?: $this->getConnection();
		
		if (false !== ($result = pg_query_params($this->link, $sql, $params))) {

			return is_callable($callback)
				? $callback($result, $this->link)
				: $result;
		}
		throw new DatabaseErrorException(pg_last_error($this->link), $sql);
	}
	
	/**
	 *
	 * @param type $sql
	 * @param array $params
	 * @param type $callback
	 * @return type 
	 */
	public function getList( $sql, array $params = null, $callback = null ) {
		return $this->executeQuery($sql, $params, function($result, $link) use ($callback){
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
	public function getUnique( $sql, array $params = null, $callback = null ) {
		if ($callback !== null) {
			return $this->executeQuery($sql, $params, function ($result, $link) use ($callback) {
				if($row = pg_fetch_assoc($result)) {
					$object = $callback( $row );
				}
				return $object;
			});
		}
		$pg_result = $this->executeQuery($sql, $params);
		return pg_fetch_assoc($pg_result);
	}
	
	/**
	 * 
	 */
	public function beginTransaction() {
		if ($this->link === null) {
			$this->getConnection();
		}
		$this->link->pg_query('START TRANSACTION');
		if ($conn->errno != 0) {
			throw  new \DatabaseErrorException();
		}
	}

	/**
	 * 
	 */
	protected function commitTransaction () {
		if ($this->link === null) {
			$this->getConnection();
		}
		$this->link->pg_query('COMMIT');
		if ($conn->errno != 0) {
			throw  new \DatabaseErrorException();
		}
	}

	/**
	 * 
	 */
	protected function rollbackTransaction () {
		/*if ($this->link === null) {
			$this->getConnection();
		}*/
		!isset ($this->link) ?: $this->getConnection();
		
		$this->link->pg_query('ROLLBACK');
		if ($this->link->pg_last_error != 0) {
			throw  new \DatabaseErrorException();
		}
	}
	
	/**
	 * Clean database resource
	 * 
	 * @return void
	 */
	public function __destruct() {
		$this->link = null;
	}
}
