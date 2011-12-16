<?php
namespace eGloo\Utilities\ClassBuilder;

/**
 * 
 * Responsible for formatting (beautifying) source
 * @author christian@petflow.com
 *
 */
class Formatter { 
	
	public static function format ($source) { 
		$beautifier = new \PHP_Beautifier();
		$beautifier->setBeautify(true);
		$beautifier->setInputString($source);
		$beautifier->process();
		
		ob_start();
		$beautifier->show();
		return ob_get_clean();
	}
}