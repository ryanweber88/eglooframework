<?php
namespace eGloo\DataProcessing\DDL\Utility;

use \eGloo\DataProcessing\DDL;


/**
 * 
 * Provides utility methods surrounding entity
 * @author Christian Calloway
 *
 */
class Entity extends \eGloo\Dialect\Object { 
	
	/**
	 * 
	 * Returns unique key representation of entity class
	 * @param  Entity $entity
	 * @return string
	 */
	public static function key(DDL\Entity\Entity $entity) {
		return base64_encode($entity->_class->class);
	}
}