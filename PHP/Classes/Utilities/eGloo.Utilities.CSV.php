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

			// we need to match the column

		}
	}

	public function offsetSet($offset, $value) {
		// we are looking for a value at a specific index
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

	public function columnIndex($colmn) {
		if (is_array($this->columns)) {
			foreach ($this->columns as $compare) {
				if ($this->columnAsSymbol($compare) == $column) {
					return true;
				}
			}
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


	private function columnIndex($name) { 
		// iterate through columns in attempt to match
		// against		
	}


	private function columnAsSymbol($name) {
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