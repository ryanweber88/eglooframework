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
		try {
			$this->events->trigger('evaluate', $this);
		}
		catch (\Exception $e) {
			// TODO handle this
		}
			return $this->title;
		//}
		
		return "N/A";
	}
}