<?php
namespace eGloo\Domain;
use \eGloo\Utilities\Collection;

/**
 * Serves as parent class to all *DataAcces Classes; general purpose is to provide
 * convenience methods to *DataAccess
 */
class Data extends \eGloo\DataProcessing\Connection\PostgreSQLDBConnection {
	
	function __construct($resource = null) {

		// pass resource to parent constructor, that is responsible for managing connection
		parent::__construct($resource);
		

	}
	

		
	/**
	 * Alias to Object::instance
	 *
	 * @return $this class object
	 */
	public static function fetch () {
		return static::instance();
	}
	
	/**
	 * Uses information schema to retrieve column names
	 */
	public static function columns($table, $comprehensive = false) {

		return static::cache("*$table$comprehensive", function() 
			use ($table, $comprehensive) {

			$columns = $comprehensive 
				? '*'
				: 'column_name';

			return static::statement("
				SELECT
					$columns
				FROM
					information_schema.columns
				WHERE
						table_name = ?
						
			", $table);	
		});
	}

	
	/**
	 * Uses information schema to retrieve entity primary keys
	 */
	public static function primaryKeys($table) {
		var_export(debug_backtrace()); exit;
		return static::cache("*$table", function($table) {
			$keys    = [ ];	
			$records = static::statement('
				SELECT               
				  pg_attribute.attname, 
				  format_type(pg_attribute.atttypid, pg_attribute.atttypmod) 
				FROM pg_index, pg_class, pg_attribute 
				WHERE 
				  pg_class.oid = ?::regclass AND
				  indrelid = pg_class.oid AND
				  pg_attribute.attrelid = pg_class.oid AND 
				  pg_attribute.attnum = any(pg_index.indkey)
				  AND indisprimary
						
			', $table);	
			
			// retrieve key names only
			// @TODO modify query so that filter does
			// not have to be applied
			if (Collection::isHash($records)) {
				$records = [ $records ];
			}
			
			foreach($records as $associative) {
				$keys[] = $associative['attname'];
			}

			return $keys;
		});		
		
	}
	
	/**
	 * Uses information schema to retrieve all table names
	 */
	public static function entities() {
		// @PASS
	}

	
	/**
	 * This is simply a wrapper method to statement - it allows
	 * for autoconstructing queries which are then passed to
	 * our statement method
	 */
	public static function inserts(array $idioms) {
						
		// check that idiom 'into' exists
		if (isset($idioms['into'])) {
			
			if (isset($idioms['using'])) {
			
				
				// next check if idiom with_fields exists; this is optional
				// in which case fields will be queried from information schema
				if(!isset($idioms['with_columns'])) {
					
					$idioms['with_columns'] = static::columns($idioms['into']);

				}
								
				// columns have been passed as tokenized string
				if (!is_array($idioms['with_columns'])) {
					$idioms['with_columns'] = explode(',', preg_replace(
						'/\s/', null, $idioms['with_columns']
					));
				}

				
				$columns = implode (' , ', $idioms['with_columns']);
				$binds   = implode (' , ', array_fill(0, count($idioms['with_columns']), '?'));
				

				// build query 
				// @TODO this should be abstracted out a bit, but i don't like
				// this solution in the first place
				
				return static::statement("
					INSERT INTO 
						{$idioms['into']} ( $columns )
					
					VALUES 
						( $binds )
				
				", $idioms['using']);
				
			}
			
			else {
				throw new \Exception(
					"Failed inserts because idiom 'using' does not exist"
				);
			}
			
			
		}
		
		else {
			throw new \Exception(
				"Failed inserts because idiom 'into' does not exist"
			);
		}
	}

	/**
	 * Retrieve transaction instance for this data object 
	 */
	public static function transaction($lambda) {
		$class       = static::classnamefull();		
		$transaction = static::cache(function() use ($class) {
			return new Data\Transaction(
				new $class
			);
		});
		
		
		
		// lets start our motherfucking transaction
		$transaction->begin();
		
		// run lambda - if it resturns absolute false
		// or throws an exception, this will signal that
		// something went wrong and to roll back transaction
		try { 
			$result = $lambda($transaction);	
		}
		
		catch(\Exception $defer) {
			$result = false;
		}
		
		// absolute false indicates transaction should be rolled back
		if ($result === false) {
			$transaction->rollback();
			
			// pass exception upstack to handled by caller
			throw $defer;
		
		// otherwise end transaction
		} else {
			$transaction->commit();
		}

	}
	


	public static function updates(array $idioms) {
		// check that idiom 'into' exists
		if (isset($idioms['against'])) {
			
			if (isset($idioms['using'])) {
			
				// next check if idiom with_fields exists; this is optional
				// in which case fields will be queried from information schema
				if(!isset($idioms['with_columns'])) {
					$idioms['with_columns'] = static::columns($idioms['against']);
					
				}
				
				// columns have been passed as tokenized string
				if (!is_array($idioms['with_columns'])) {
					$idioms['with_columns'] = explode(',', preg_replace(
						'/\s/', null, $idioms['with_columns']
					));
					
				}
				
				// build determine our sets (columns = value) and conditions
				$sets       = array();
				$conditions = array('TRUE'); 
				
				foreach($idioms['with_columns'] as $column) {
					$sets[] = "$column = ?";
				}
				
				$sets       = implode(",\n", $sets);
				$conditions = array();
								
				if (isset($idioms['where'])) {
					if (is_array($where = $idioms['where']) && count($where)) {
						$conditions = $idioms['where'];
					}
					
					else {
						$conditions = array($idioms['where']);
					}
				}

				// otherwise we are going to assume we are updating
				// against primary key, if using has been passed a model
				else if (isset($idioms['using'])             &&
				         $idioms['using'] instanceof Model   &&
								 $idioms['using']->primaryKeyName()) {
						
					$conditions[] = $idioms['using']->primaryKeyName() . ' = ?';
				}
								 
				else {
					throw new \Exception(
						"Failed updates because idiom 'using' does not exist"
					);					
				}
							
							
				$conditions = implode(" AND\n ", $conditions);		
				
				
				
				// build query 
				// @TODO this should be abstracted out a bit, but i don't like
				// this solution in the first place
				return static::statement("
					UPDATE
						{$idioms['against']} 
					
					SET 
						$sets
						
					WHERE
						$conditions
				
				", $idioms['using']);
			}

			else {
				throw new \Exception(
					"Failed updates because idiom 'using' does not exist"
				);				
			}
		}
		
		else {
			throw new \Exception(
				"Failed updates because idiom 'against' does not exist"
			);
		}		
	}
	
	public static function deletes(array $idioms) {
		
	}
	
	
	/**
	 * @TEMP
	 */
	public static function statement_sql($statement, $__mixed = null) {
		echo_r(str_replace("\t", null, $statement)); 
		echo_r(func_get_args());
		exit;
	}
	
	/**
	 * @TEMP
	 */
	public static function statement_result($statement, $__mixed = null) {
		echo_r(static::statement($statement, array_slice(func_get_args(), 1)));
		exit;
	}
		

	/**
	 * Executes a statement on underlying layer - currently makes use of *DataAccess
	 * classes, but will be replaced with dpstatement - think about this some more
	 * @param string $statement
	 * @param variable-length $__mixed
	 */
	public static function statement($statement, $__mixed = null) {
			
		
		// make sence of our params - we are providing variable length argument
		// lists - the second param may be an array, or simply accept all arguments
		// to callable is found
		if (count($arguments = array_slice(func_get_args(), 1)) >= 1) {
			
			// first we are going to check for our lambda, which must come
			// at the end of our argument list
			$lambda = is_callable($last = $arguments[count($arguments)-1]) 
				? $last 
				: false;
			
			
			// in this instance, arguments to statement are passed in as array
			// and they can be passed directly to statement methods - we reset
			// our arguments to reflect the array passed as second parameter
			if (is_array($arguments[0])) {
				$arguments = $arguments[0];
			}
			
			// otherwise we assume that statement arguments have
			// been pased in one at a time, and we also must check to
			// see if lambda has been passed as last argument - 
			// name parameters would be very useful here
			else {
				
				// slice the end off of arguments if a lambda has indeed been found
				// since we know that it must occupy the last rung
				if (is_callable($lambda)) {
					$arguments = array_slice(
						$arguments, 0, count($arguments)-1
					);
				}
				
			}
			
		} 
		
	
		// determine who is calling method - this will be used to track down where/when
		// statements are made for later refactor
		$caller = static::caller();
		// retrieve *DataAccess instance
		//try {
		//	$dataAccess = static::data();
		//}
	
		//catch(\Exception $passthrough) {
			//$dataAccess = new Data;
		//}
		
		// need to think whether this method should be here
		$dataAccess = new static;

		// determine method to call on delegated data access
		// class - for the time being, we will use getList, but
		// we will need to inspect our statement for query type
		// @TODO inspect statement for query type - for now just
		// perform messy regex
		preg_match('/^\s*?(\S+)/is', $statement, $match);
		
		
		
		// determine execute method to call based upon
		// query type; make sure to avoid transaction based
		$method = 'execute';
		
		if (in_array(strtolower($match[1]), array('select', 'insert', 'update', 'delete'))) {
			$method = 'execute' . ucfirst(
				$classification = strtolower($match[1])
			);
		}
		
			
		$fields = array();
		

		// check if query requires arguments list	
		if (preg_match('/\?/', $statement)) {
			
			// get the count of placeholders
			$placeholderCount = substr_count(
				$statement, '?'
			);
			
			// select, update, delete all share similar style in terms of key = ?
			// or key in (?..); essentially a conditional

			if (in_array($classification, array('select', 'update', 'delete'))) {
				foreach(array('/([^\s.(]+)\s*?\=\s*?\?/is', '/([^\s.(]+?)\s+?in\s*?\(.+?\)/is', '/\?/') as $index => $pattern) {
					if (preg_match_all($pattern, $statement, $matches, PREG_SET_ORDER)) {
						foreach($matches as $pair) {
							$fields[] = isset($pair[1]) 
								? $pair[1]
								: 'anonymous';
						}
						
						break;
					}
				}
				
				// add anonymous fields if count of fields is less than placeholder
				// number
				if (count($fields) < $placeholderCount) {
					do {
						$fields[] = 'anonymous';
					} while(count($fields) < $placeholderCount);
				}
				
					
			}
				
			else if ($classification == 'insert' ) {
				preg_match('/\((.+?)\)/s', $statement, $match);
				$fields = explode(',', $match[1]);
				
				
			}	


			// trim fields in case our regexp above missed whitespace
			foreach ($fields as $key => $value) {
				$fields[$key] = trim($value);
			}
			
			
			// lets do some magic - lets determine arguments if first
			// argument is a model, and we are performing an update/insert
			// statememnt; please note that this isn't always going to 
			// work so use with caution

			if (isset($arguments[0]) && 
				  ($model = $arguments[0]) instanceof Model) {
						

									 
				// lets reset our arguments list with those arguments gleaned
				// from statement itself
				//$arguments = $model->attributes();
				$arguments = array();
				$counter   = 0;
				


				
				foreach($fields as $attribute) {
					
					// another great wtfphp moment, empty call on a variable with a 0 value return true
					if (isset($model->$attribute)     && 
					
					    (!empty($model->$attribute)   || 
					     $model->$attribute === 0     || 
					     $model->$attribute === '0')) {
					     					
						$arguments[ isset($arguments[$attribute]) ? $attribute . $counter++ : $attribute ] = $model->$attribute;
					}
					
					else {
						//throw new \Exception(
						//	"Failed to bind attribute '$attribute' because it does not exist in instance receiver {$model->ident()}"
						//);
					}	
				}
			
								
			}
	
			// otherwise, lets see if arguments is an associative array; if this 
			// is the case, we want to match arguments up to fields (in terms)		
			else if (\eGloo\Utilities\Collection::isHash($arguments)) {
				
				//
				foreach($fields as $index => $field) {
					if (isset($arguments[$field])) {
						$temporary[$field = trim($field)] = isset($arguments[$field])
						
							? $arguments[$field]
							
							: null;
					}
					
			
					
					//else {
					//	throw new \Exception(
					//		"Statement failed because key '$field' does not exist in arguments list: " . print_r(
					//			$arguments
					//	));
					//}
				}
				
				
				$arguments = $temporary;
			}
			
			
			else if (is_array($arguments)) {
				if (count($arguments) == count($fields)) {
					
					$counter = 0;
					
					foreach($fields as $field) {
						
						if ($field == 'anonymous') {
							$field .= $counter++;		
						}
						
						$hold[] = array_shift($arguments);	
					}
					
					$arguments = $hold;
				}
				
				else {

					// TODO handle this (no echo_r's in production)
					// throw new \Exception(
					// 	'Statement failed because count of argument values does not match number of ' .
					// 	'required fields' . echo_r(array(
					// 		'arguments' => $arguments,
					// 		'fields'    => $fields
					// )));
				}
			} 
			
			
			else {
				throw new \Exception(
					"Statement failed because arguments type is invalid : " . print_r(
						$arguments	
				));
			}
					
		}


		// if running an execute statement and argument isn't available
		// remove from query
		// @TODO this shouldn't be done this way, but for the time being
		// to save time on queries, we remove fields that aren't available
		// in the passed argument list	
		if (isset($model) && $classification != 'select') {
												
			foreach ($fields as $field) {

				if (!isset($arguments[$field]) || is_null($arguments[$field])) {
					
					unset($arguments[$field]);
					
					// if an insert statement
					if ($classification == 'insert') {
						// now remove field from arguments list in statement
						$statement = preg_replace("/{$key}([\s\,\)])/", '$1', $statement);
						
					}
					
					// otherwise an update
					else if ($classification == 'update') {
						$statement = preg_replace("/{$field}\s*\=\s*[\S]+\s/is", null, $statement);
						
					}

				}
				
			}

			
			
			
			if ($classification == "insert") {
				// replace argument/value lists
				$statement = preg_replace(
					'/\(.*?\).*?(values).*?\(.*\)/is', '(#keys#) $1 (#values#)', $statement
				);
				
				
				$keys = \eGloo\Utilities\Collection::isHash($arguments)
					? array_keys($arguments)
					: $fields;
							
				// add back stupid argument/values list
				$statement = str_replace(
					"#keys#", implode(' , ', $keys), $statement
				);
				
				$statement = str_replace(
					"#values#", implode(' , ', array_fill(0, count(array_values($arguments)), '?')), $statement
				);			
						
						
			}
			
			else if ($classification == 'update') {
				// don't know what to do here yet - specifying all columns explicitly
			}
		}

		// retrieve data set
		// @TODO we have to determine nature of query, as there is no
		// point in return a multi-result set if performing an insert
		// for example
		
	//	echo "$statement<br/><br/>";

		//var_export(func_get_args()); 
		$result = $dataAccess->$method($statement, $arguments);
		

		if ($classification == 'update' && strpos($statement, 'session') !== false) {
			//echo $statement;exit;
		}
		
		// set result to false if we don't have a match
		// @TODO this should be fixed at connection level,
		// but that can be managed later - need to make sure
		// an empty array isnt expected behavior
		if (is_array($result) && !count($result)) {
			$result = false;
		}
		
		// determine if result is array, in which case take a look at
		// make up for return set
		if (is_array($result)) {
			
			// reference result with 'set' which is a more apt descriptor
			// of our result, plus will provide the added benefit of
			// of applying changes to set will be returned in $result
			// at the bottom of this method (perhaps not the clearest)
			// but a tad slick
			$set = &$result;

			// perform a count on a single record in set and determine
			// if it only contains one field value - in this instance
			// we truncate the array to just that value because 99%
			// of the time, we will know the field key being used -
			// if not, we can use one of the baser methods
			
			if (count($set[0]) == 1) {
				$values = array();
				$key    = \current(array_keys(
						$set[0]
				));
					
				foreach($set as $record) {
					$values[] = $record[$key];
				}
					
				$set = $values;
			}
			
			// here we provide some convenience for our returned
			// set - if only one record within set, then we don't
			// want to return multidimensional set
			if (count($set) == 1) {
				$set = $set[0];
			}
						
			// if our result set
			if (isset($lambda) && is_callable($lambda)) {
				// otherwise, iterate through set
				$inject = false;
				
				foreach($set as $record) {
					// here we copy the ruby array#inject, by allowing
					// to pass forward the value returned from last lambda
					// call
					$inject = $lambda($record, $inject);
						
				}
				
				// return inject to caller - in most instances this will null
				return $inject;				
			}
			
		}

		// return result, which is being referenced by $set and whose
		// value may have been manipulated based on the return result
		return $result;
	
	}	

	

		
}