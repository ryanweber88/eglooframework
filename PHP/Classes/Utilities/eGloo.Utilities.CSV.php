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
class CSV extends Utilties\ArrayAccess implements 
	\ArrayAccess, \IteratorAggregate {

	// @PASS
	public static function parse($file, $headers = true) { }

	function __construct($__mixed = null) {
		// if arguments have been passed, then we are auto-setting
		// our columns with list of arguments
		if (func_num_args() > 0) {
			$this->columns = $arguments
		}
	}


	public function getIterator() {
		// allows for iteration across rows or columns
		// given status of row property

		return is_null($this->row)
			// if row is null, then we iterate across rows
			// using an ArrayIterator instance 
			// @WTFPHP ArrayIterator is a class...
			? new \ArrayIterator($this->matrix)

			// otherwise we iterate across the columns of a specific 
			// row			
			: new \ArrayIterator($this->matrix[$this->row]);


	}

	public function offsetGet($offset) {
		
		// determine correct index/offset, which if 
		// not is numeric, we set with column index
		// value 
		if (!is_numeric($offset)) {
			$offset = $this->columnIndex($offset);
		}

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

			// otherwise we are attempting to set a row
			// with a specific value, which will throw
			// an exception
			} else { 
				throw new \Exception(
					"Cannot set row '{$this->row}' with scalar value"
				);
			}

		// otherwise row has been set and we are attempting 
		// to set a specific column value
		} else {
			// if array is passed we set with 
			if (is_array($values = $value)) {
				$value = implode(';', $values);
			}

			$this->maxtrix[$this->row][$offset] = $value;
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
		return strtolower(preg_replace(
			'/\s/', '_', $name
		));
	}





	protected $columns;
	protected $matrix = array();
	private   $row    = null;
}