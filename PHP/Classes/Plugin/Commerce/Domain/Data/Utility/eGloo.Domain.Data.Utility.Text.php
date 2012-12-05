<?php
namespace eGloo\Domain\Data\Utility;

/**
 * Provides text-based utility methods mostly related to data functions
 * @author Christian Calloway callowaylc@gmail.com
 */
class Text extends \eGloo\Dialect\Object {
	public static function addWildcards($text) {
		return '%' . preg_replace('/\s/', '%', $text) . '%';
	}	
}