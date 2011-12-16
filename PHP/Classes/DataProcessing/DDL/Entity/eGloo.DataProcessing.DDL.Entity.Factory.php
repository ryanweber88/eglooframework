<?php
namespace eGloo\DataProcessing\DDL\Entity;

/**
 * 
 * Provides factory initialization of entity classes; while this is simple
 * and would be better suited in the entity class itself, having a forward
 * facing factory within an entity, and its descendants, would be in bad 
 * form 
 * @author Christian Calloway
 * @todo   unless this gets more complicated, it should be removed
 *
 */
use eGloo\Dialect\_Class;

class Factory extends \eGloo\Dialect\Object { 

	public static function factory($class, $evaluate = true) {
		if (is_object($class) && $class instanceof \eGloo\Dialect\_Class) { 
			return $class->instance;
		}
		
		return (new _Class($class))->instantiate([$evaluate]);
	}
}