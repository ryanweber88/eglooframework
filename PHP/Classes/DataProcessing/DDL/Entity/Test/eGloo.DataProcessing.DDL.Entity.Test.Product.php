<?php
namespace eGloo\DataProcessing\DDL\Entity\Test;

use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Test product orm functionality
 * @author Christian Calloway
 *
 */
class Product extends Entity {

	public function __toString() { 
		if ($this->valid()) { 
			return $this->title;
		}
	}
}