<?php
namespace eGloo\System\Server;

/**
 * 
 * Provides a set of static utility/helper methods
 * @author petflowdeveloper
 *
 */
class Utilities extends \eGloo\Dialect\Object {
	
	public static function rebrand($string) { 
		// TODO : rebrand should be removed, but in the meantime, 
		// information should come from config
		return preg_replace(
			'/photon/i', 'eGloo+', $string
		);
	}
}