<?php
namespace eGloo\DataProcessing\Connection;

use \eGloo\Configuration;
use \eGloo\DataProcessing\ConnectionManagement\DBConnectionManager;
use \eGloo\DataProcessing\Connection\DatabaseErrorException;
use \eGloo\Utility\Logger     as Logger;

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
	protected static $connection_name = 'egPrimary'; // hard-coded for now

	/**
	 * Database connection method
	 *
	 * @param resource $rawConnectionResource
	 */
	public function __construct( $rawConnectionResource = null ) {
		$this->setConnectionDialect( \DialectLibrary::POSTGRESQL );

		if ( is_null($rawConnectionResource) && self::$link === null ) {
			\DBConnectionManager::resetConnections();

			self::$link = \DBConnectionManager::getConnection(static::$connection_name)->getRawConnectionResource();

			if ( null === self::$link ) {
				throw new DatabaseErrorException('Can\'t connect to database server.');
			}
		} else {
			$this->setRawConnectionResource( $rawConnectionResource );
			self::$link = $rawConnectionResource;
		}
	}

	/**
	 * Establis connection when unavailable
	 *
	 * @return resource DB connection resource
	 */
	public function getConnection () {
		if (self::$link === null) {
			self::$link = \DBConnectionManager::getConnection(static::$connection_name)->getRawConnectionResource();
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
		if ( !isset(self::$link) ) {
			self::$link = $this->getConnection();
		}

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
					'/insert\s+?into\s+?([^\s\(]+)/is', $sql, $match
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

				if (is_array($insert_row) && \eGloo\Utilities\Collection::isHash($insert_row)) {
					return isset($insert_row[$primaryKey])
						? $insert_row[$primaryKey]

						// otherwise we take a stab in the dark and shift off first element
						// but weary of this though - need to think if this will introduce
						// more problems than solves
						: array_shift($insert_row);
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
		return pg_fetch_all(self::execute($sql, $params ));
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
		if ( !isset(self::$link) ) {
			self::$link = $this->getConnection();
		}

		pg_query(self::$link, 'BEGIN TRANSACTION');
		if (pg_last_error(self::$link) != false) {
			throw  new \DatabaseErrorException();
		}
	}

	/**
	 *
	 */
	protected function commitTransaction () {
		if ( !isset(self::$link) ) {
			self::$link = $this->getConnection();
		}

		pg_query(self::$link, 'COMMIT TRANSACTION');
		if (pg_last_error(self::$link) != false) {
			throw  new \DatabaseErrorException();
		}
	}

	/**
	 *
	 */
	protected function rollbackTransaction () {
		if ( !isset(self::$link) ) {
			self::$link = $this->getConnection();
		}

		@pg_qery(self::$link, 'ROLLBACK TRANSACTION');
		if (pg_last_error(self::$link) != false) {
			throw  new \DatabaseErrorException();
		}
	}

	public function constraints_for_fields( $conditions, $class ) {
		if ( ($pos = strrpos($class, '\\')) !== false ) {
			$class = substr( $class, $pos+1 );
		}

		$fields = explode(' ', $conditions);

		$sql = "SELECT
					*
				FROM
					( -- The table that we're looking at to determine its constraints.
						SELECT
							tc.*,
							ku.column_name as column_name_lcl,
							ku.ordinal_position as ordinal_position_lcl,
							ku.position_in_unique_constraint as position_in_unique_constraint_lcl,
							rc.unique_constraint_catalog,
							rc.unique_constraint_schema,
							rc.unique_constraint_name,
							rc.match_option,
							rc.update_rule,
							rc.delete_rule
						FROM
							information_schema.table_constraints tc
							LEFT JOIN information_schema.key_column_usage ku
								ON tc.constraint_name=ku.constraint_name
							LEFT JOIN information_schema.referential_constraints rc
								ON tc.constraint_name=rc.constraint_name
					) lcl
					LEFT JOIN ( -- The table FKs are referencing
						SELECT
							ku.*
						FROM
							information_schema.table_constraints tc
							INNER JOIN information_schema.key_column_usage ku
								ON tc.constraint_name=ku.constraint_name
					) ref ON lcl.unique_constraint_name=ref.constraint_name
						AND lcl.position_in_unique_constraint_lcl=ref.ordinal_position
				WHERE
					lcl.table_schema = ?
					AND (";

		for( $i = 0; $i < count($fields); $i++ ) {
			$sql .= 'lcl.column_name_lcl = ?';

			if ( ($i + 1) < count($fields) ) {
				$sql .= ' or ';
			}
		}

		$fields[] = strtolower($class);

		$sql .=
					") AND lcl.table_name = ?;";

		$connection = Configuration::getDatabaseConnectionInfo(static::$connection_name);

		if ( isset($connection['schema']) ) {
			array_unshift($fields, $connection['schema']);
		} else {
			array_unshift($fields, 'public');
		}

		return pg_fetch_all($this->execute($sql, $fields));
	}

	public function constraints_for_table( $class ) {
		if ( ($pos = strrpos($class, '\\')) !== false ) {
			$class = substr( $class, $pos+1 );
		}

		$fields = [strtolower($class)];

/*		$sql = "SELECT
					t.*
				FROM
					information_schema.table_constraints t
				WHERE */
		$sql = "SELECT
					*
				FROM
					( -- The table that we're looking at to determine its constraints.
						SELECT
							tc.*,
							ku.column_name as column_name_lcl,
							ku.ordinal_position as ordinal_position_lcl,
							ku.position_in_unique_constraint as position_in_unique_constraint_lcl,
							rc.unique_constraint_catalog,
							rc.unique_constraint_schema,
							rc.unique_constraint_name,
							rc.match_option,
							rc.update_rule,
							rc.delete_rule
						FROM
							information_schema.table_constraints tc
							LEFT JOIN information_schema.key_column_usage ku
								ON tc.constraint_name=ku.constraint_name
							LEFT JOIN information_schema.referential_constraints rc
								ON tc.constraint_name=rc.constraint_name
					) lcl
					LEFT JOIN ( -- The table FKs are referencing
						SELECT
							ku.*
						FROM
							information_schema.table_constraints tc
							INNER JOIN information_schema.key_column_usage ku
								ON tc.constraint_name=ku.constraint_name
					) ref ON lcl.unique_constraint_name=ref.constraint_name
						AND lcl.position_in_unique_constraint_lcl=ref.ordinal_position
				WHERE

					lcl.table_schema = ?
					AND lcl.table_name = ?;";

		$connection = Configuration::getDatabaseConnectionInfo(static::$connection_name);

		if ( isset($connection['schema']) ) {
			array_unshift($fields, $connection['schema']);
		} else {
			array_unshift($fields, 'public');
		}

		return pg_fetch_all($this->execute($sql, $fields));
	}

	public function definitions_for_fields( $conditions, $class ) {
		if ( ($pos = strrpos($class, '\\')) !== false ) {
			$class = substr( $class, $pos+1 );
		}

		$fields = explode(' ', $conditions);

		$sql = "SELECT
					c.*
				FROM
					information_schema.columns c
				WHERE
					c.table_schema = ?
					AND (";

		for( $i = 0; $i < count($fields); $i++ ) {
			$sql .= 'c.column_name = ?';

			if ( ($i + 1) < count($fields) ) {
				$sql .= ' or ';
			}
		}

		$fields[] = strtolower($class);

		$sql .=
					") AND c.table_name = ?
				ORDER BY
					c.ordinal_position;";

		$connection = Configuration::getDatabaseConnectionInfo(static::$connection_name);

		if ( isset($connection['schema']) ) {
			array_unshift($fields, $connection['schema']);
		} else {
			array_unshift($fields, 'public');
		}

		return pg_fetch_all($this->execute($sql, $fields));
	}

	public function field_definitions( $class ) {
		if ( ($pos = strrpos($class, '\\')) !== false ) {
			$class = substr( $class, $pos+1 );
		}

		$sql = "SELECT
					c.*
				FROM
					information_schema.columns c
				WHERE
					c.table_schema = ?
					AND c.table_name = ?
				ORDER BY
					c.ordinal_position;";

		$connection = Configuration::getDatabaseConnectionInfo(static::$connection_name);

		if ( isset($connection['schema']) ) {
			$schema = $connection['schema'];
		} else {
			$schema = 'public';
		}

		return pg_fetch_all($this->execute($sql, [$schema, strtolower($class)]));
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
