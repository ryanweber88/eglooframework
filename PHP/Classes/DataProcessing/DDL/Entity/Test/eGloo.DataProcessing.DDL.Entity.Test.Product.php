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
			echo $e->getMessage(); exit;
		}
			return $this->title;
		//}
		
		return "N/A";
	}
}