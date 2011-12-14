<?php
namespace eGloo\DataProcessing\DDL\Statement;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Provides a set of utility parsing methods
 * @author Christian Calloway
 *
 */
class Parser extends \eGloo\Dialect\Object {
	
	/**
	 * 
	 * Parses a 'find' statement for fields available
	 * to entity
	 * @param  string $content
	 * @return string[] 
	 */
	public static function fields($content) { 
		// pass
		return [
			'nid', 'title'
		];
	}
} 