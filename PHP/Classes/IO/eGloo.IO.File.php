<?php
namespace eGloo\IO;

/**
 * 
 * Represents a system file (file or directory) and provides standard utility
 * methods to work with file
 * @author Christian Calloway
 *
 */
class File extends \eGloo\Dialect\Object { 
	
	function __construct($path, \Closure $handler = null) { 
		$this->pointer = fopen();
	}
	
	function __destruct() { 
		fclose($this->pointer);
	}
	
	public static function open($path, \Closure $handler = null) { 
		
	}
	
	// 
	public static function fileFiles(File $file, $pattern) { 
		
	}
	
	public static function basename($path) { 
		$tmp = explode('/', $path);
		return $tmp[count($tmp)-1];
	}
	
	private $pointer;
	
}