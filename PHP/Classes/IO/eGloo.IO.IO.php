<?php
namespace eGloo\IO;

/**
 * 
 * Responsible for input/output operations; influenced by ruby class IO
 * @author Christian Calloway
 *
 */
abstract class IO extends \eGloo\Dialect\Object { 

	/**
	 * 
	 * Runs lambda and flushes to output
	 * @param \Closure $lambda
	 */
	public static function buffer($lambda) { 
		if (is_callable($lambda)) { 
			ob_start();
			$lambda();
			
			return ob_get_clean();
		}
	}
}