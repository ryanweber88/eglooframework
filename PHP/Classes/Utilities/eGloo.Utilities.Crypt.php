<?php
/**
 * Constains Cyrpt class definition
 * @author Christian Calloway callowaylc@gmail christian@petflow
 */
namespace eGloo\Utilities;
 
class Crypt {
	
	/**
	 * Creates a cryptographic nonce string
	 */
	public static function nonce($size = 32) {
		$ret = '';
		
		for($x=0;$x<$size;$x++){
			$ret.=chr(mt_rand(0,255));
		}
		
		return base64_encode($ret);
	}
} 