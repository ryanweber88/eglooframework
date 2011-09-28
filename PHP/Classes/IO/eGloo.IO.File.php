<?php
namespace eGloo\IO;

/**
 * 
 * Represents a system file (file or directory) and provides standard utility
 * methods to work with file; currently, only used for read operations 
 * @author Christian Calloway
 *
 */
class File extends IO { 
	
	const OP_READ = 0x00;
	
	/**
	 * 
	 * Enter description here ...
	 * @param unknown_type $path
	 */
	function __construct($path) { 
		$this->pointer = fopen($path, self::OP_READ);
		$this->path    = $path;
		
		if (!$this->pointer) { 
			throw new \eGloo\Dialect\Exception(
				"FAILED opening file @ path = $path"
			);
		}
	}
	
	function __destruct() { 
		fclose($this->pointer);
	}
	
	/**
	 * 
	 * Open file and pass to handler if available; otherwise, treat as factory
	 * and return new instance of File
	 * @param string $path
	 * @param \Closure $handler
	 */
	public static function open($path, \Closure $handler = null) { 
		$file = null;
		
		try { 
			$file = new static($path);
		}
		catch (\Exception $pass) { 
			throw $pass;
		}	
			
		if (is_callable($handler)) { 
			return $handler($file);
		} 
		
		else { 
			return $file;
		}
	}
	
	// 
	public static function fileFiles(File $file, $pattern) { 
		
	}
	
	public static function basename($path) { 
		$tmp = explode('/', $path);
		return $tmp[count($tmp)-1];
	}
	
	/**
	 * 
	 * Overrides parent construct to provide read for file
	 * currently pointed to
	 */
	public function read($length = null, $offset = null) { 
		// TODO implement length, offset parameters
		return file_get_contents($this->path);
	}
	
	private $pointer;
	private $path;
	
}