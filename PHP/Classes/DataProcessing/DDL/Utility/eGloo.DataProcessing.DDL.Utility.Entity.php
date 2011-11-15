<?php
namespace eGloo\DataProcessing\DDL\Utility;

use \eGloo\DataProcessing\DDL;
use \eGloo\DataProcessing\DDL\Entity\Entity;


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
	public static function key(Entity $entity) {
		return $entity->_class->class;
	}
}