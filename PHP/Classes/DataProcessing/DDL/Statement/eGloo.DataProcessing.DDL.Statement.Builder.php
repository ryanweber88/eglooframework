<?php
namespace eGloo\DataProcessing\DDL\Entity\Statement;

use eGloo\DataProcessing\DDL\Entity\Entity;


/**
 * 
 * Responsible for building statement to be executed by Statement
 * @author Christian Calloway
 *
 */
class Builder extends \eGloo\Dialect\Object { 
	
	/**
	 * 
	 * Responsible for building/parsing statement, given entity
	 * data
	 * @param Entity $entity
	 * @param string $content
	 */
	public static function build(Entity $entity, $content) { 
		return $content;
	}
	
}