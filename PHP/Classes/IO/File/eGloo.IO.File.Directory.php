<?php
namespace eGloo\IO\File;

/**
 * 
 * Represents a system directory
 * @author Christian Calloway
 *
 */
class Directory extends \eGloo\IO\File { 
	
	function __construct($path) { 
		parent::__construct($path);
	}
	
	public function glob($pattern, \Closure $lambda = null) { 
		
	} 
}