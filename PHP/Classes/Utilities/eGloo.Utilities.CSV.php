<?php
/*
 *  Constaints class definition for CSV 
 *  @AUTHOR Christian Calloway callowaylc@gmail christian@petflow
 */
namespace eGloo\Utilities;
use       \eGloo\Utilities;

/**
 * Provides csv parsing/read/write functionaltiy abstracted within
 * array notaiton
 * @TODO   This can be abstracted further into the concept of tokens
 *         the only difference here is that csv is always a matrix and
 *         contains the idea of headers
 * @author Christian Calloway callowaylc@gmail.com
 */
class CSV extends Utilties\ArrayAccess implements \ArrayAccess {

	// @PASS
	public static function parse($file, $headers = true) { }

	function __construct($__mixed = null) {
		// if arguments have been passed, then we are auto-setting
		// our columns with list of arguments
		if (func_num_args() > 0) {
			$this->columns = $arguments
		}
	}

	public function offsetGet($offset) {
		// we are looking for a value at a specific index
		if (is_numeric($offset)) {


			// next we check if we are "returning" a row
			// which in reality means we are returning
			// an instance of self so that we can chain
			// array notation brackets $instance[row][column]
			// or in laymens terms, present a true two dimensional
			// array or matrix				
			if (is_null($this->row)) {
				$this->row = $offset;
				return $this;

			// if row property has been set to numeric value we are returning
			// an actual column value
			} else {
				// reset row to null for next query and return
				// associated column value
				$this->row = null;

				// @TODO we need to do constraint check here
				// and throw exception on out of bounds
				return $this->matrix[$this->row][$offset]			
			}

		

		// we are looking for all values to associated
		// to a particular column
		} else {

			// if row is null, then we return an array of
			// values associated to the index of column
			// @TODO comeback
			if (is_null($this->row)) {
				$values = array();
				$index  = $this->columnIndex($offset);
				
				foreach ($this->maxtrix as $row) {
					$values[] = $row[$index];
				}

				return $values;
			
			// otherwise we are returning the value for a
			// particular column
			} else {
				// unset row and return column value as index of column header
				$this->row = null;
				return $this->matrix[$this->row][$this->columnIndex($offset)];
			}

		}
	}

	public function offsetSet($offset, $value) {
		
		// determine correct index/offset, which if 
		// not is numeric, we set with column index
		// value 
		if (!is_numeric($offset)) {
			$offset = $this->columnIndex($offset);
		}

		// we are setting the value of a whole row
		// if row is null
		if (is_null($this->row)) {
			if (is_array($values = $value)) {
				$this->maxtrix[$this->row] = $values;

			// otherwise we are setting a specific value
			} else { 
				$this->matrix[$this->row][$offset];
			}
		}

		// @TODO enforce constrants against column/headers
		if (is_numeric($offset)) {
		


		// we are looking for all values to associated
		// to a particular column
		} else {

		}
	}

	public function offsetUnset($offset) {

	}

	public function offsetExists($offset) {

	}

	private function columnIndex($colmn) {
		// we attempt to determine the index of column using its
		// symbolic representation; if column cannot be found, we
		// (royal we) throw an exception

		if (is_array($this->columns)) {
			for ($counter=0; $counter < count($this->columns); $counter++) { 	
				if ($this->symbol($this->columns[$counter]) == $column) {
					return $counter;
				}
			}

			throw new \Exception(
				"Failed to determine index of column '$column' " . 
				"because it does not exist" 
			)
		}

		// otherwise throw exception because csv does not
		// contain the idea of headers
		else {
			throw new \Exception(
				"Failed to determine if column '$column' is valid " . 
				"because csv does not contain headers"
			);
		}

		// if we have reached this point
		return false;
	}





	private function symbol($name) {
		// the purpose of this method is convert a human readable
		// column to a symbolic representation that can be conveniently
		// used as hash key
		return preg_replace(
			'/\s/', 
		);
	}





	protected $columns;
	protected $matrix = array();
	private   $row    = null;
}