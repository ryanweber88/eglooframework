<?php
namespace eGloo\DataProcessing\Connection;
use  eGloo\DataProcessing\ConnectionManagement\DBConnectionManager as DBConnectionManager;
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
	protected	$link;
	
	/** @var result oobject */
	protected	$result;
	
	/** @var string query statement object */
	protected	$statement = '';
	
	/** @var used to check connection state */
	protected	$is_connected = false;
	

	public function __construct( $rawConnectionResource = null ) {
		if (is_null ($rawConnectionResource)) {
			\DBConnectionManager::resetConnections();
			$this->setConnectionDialect( \DialectLibrary::POSTGRESQL );
			$this->link = \DBConnectionManager::getConnection()->getRawConnectionResource();
			$this->is_connected = true;
		} else {
			$this->setConnectionDialect( \DialectLibrary::POSTGRESQL );
			$this->setRawConnectionResource( $rawConnectionResource );
			$this->link = $rawConnectionResource;
			$this->is_connected = isset ($this->link) ? true : false;
		}
	}
	
	protected function prepareStatment ( &$sql, $params ) {
		$sqlarray = explode('?', $sql);
		$sql = ''; $index = 1;
		$last = sizeof($sqlarray) -1;
		foreach ($sqlarray as $part ){
			if($last < $index) {			
				$sql .= $part;
			} else {
				$sql .= $part . '$' . $index;
			}
			$index++;
		}
		$this->statement = $sql;
	}

	public function executeQuery ($sql, array $params = null, $callback = null ) {
		$result = '';
		$this->prepareStatment($sql, $params);
		
		if (false !== ( $pg_result = pg_query_params( $this->link, $this->statement, $params ))) {
			if ( $callback !== null ) {
				$result = $callback( $pg_result, $this->link );
			} else {
				return $result = pg_fetch_array( $pg_result );
			}
		}
		if ( !$pg_result ) {
			$this->handleQueryError( $this->statement );
		}
		return $result;
	}
	
	public function getList( $sql, array $params = null, $callback = null ) {
		return $this->executeQuery($sql, $params, function($result, $link) use ($callback){
			$index = 0;
			$list = array();
			while ($row = pg_fetch_assoc( $result )){
				if ($callback !== null ) {
					$list[$index] = $callback($index++, $row );
				}
			}
			return $list;
		});		
	}
	
	public function getUnique( $sql, array $params = null, $callback = null ) {
		return $this->executeQuery($sql, $params, function ($result, $link) use ($callback) {
			if($row = pg_fetch_assoc( $result )) {
				$object = $callback( $row );
			}
			return $object;
		});
	}

	/**
	 *
	 * @param type $sql 
	 */
	public function handleQueryError( $sql ) {
		$error_msg = pg_last_error( $this->link );
		throw new Exception( empty ($error_msg) ? 'Unknown PostgreSQL Error' : $error_msg );
	}
	
	/**
	 * Connection desctructor method
	 * 
	 * @return void
	 */
	public function __destruct() {
		$this->link = null;
	}
}