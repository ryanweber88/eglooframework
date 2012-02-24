<?php
namespace eGloo\Domain\Utility;

use \eGloo\Domain;

/**
 * The purpose of empty set is to provide a dynamically expanding array that
 * always returns an instance of model, if current offset is not set
 */
class EmptySet extends Domain\Model\Set {

	public function offsetGet($offset) {
		try { 
			return parent::offsetGet($offset);
		}
		
		catch (\Exception $ignore) { 
			$this->container[$offset] = new $this->model;
		}
	
		return $this->container[$offset];
	}
}