<?php
namespace eGloo\DataProcessing\DDL\Statement;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Responsible for building determining entity interface
 * @author Christian Calloway
 * @todo   Need limit architecture placed on static storage
 * @todo   A bundle should really be an instance over anything else
 * @todo   limit_static
 *
 */
class Bundle extends \eGloo\Dialect\Object { 
	
	use \eGloo\Utilities\Collection\StaticStorageTrait;
	
	// this would be better as a const, but not
	// available in php
	static protected $REQUIRED = [
		// crud features
		'find',
		'create',
		'update',
		'delete',
		// pagination features
		'limit', 
		'orderBy', 
		'offset'
	];
	
	function __construct($path) {
		// 
		$this->path =  $path; 
		
		// use a static retrieve for files, as files are not likely to change
		// TODO sniff statement type
		$this->files = glob("$path/*");
		
		// retrieve bundle content
		foreach ($this->files as $file) {
			$this->names[]           = $name = explode('.', \eGloo\IO\File::basename($file))[0];	
			$this->paths[$name]      = $file;
			$this->content[$name]    = file_get_contents(
				$file
			);
			
		}
		

				
		
		// check that required files in bundle are available - proceed up hierarchy chain
		// if not available in current directory
		// @todo determine moreso elegant mechanism for determining stop point
		// in hierarchy - right now just looking at directory name vs engine mode
		
		foreach(static::$REQUIRED as $required) {
			 			
			if (!in_array($required, $this->names)) { 
				$found = false;
				
				do { 
					$path = dirname($this->path);
					
					// @todo account for multiple files with same pattern (it should be
					// rare, but it can happen
					if (count($matches = preg_grep("/$required/i", glob("$path/*")))) { 
						$found = true;
						
						$this->content[$this->names[] = $required] = file_get_contents($this->paths[$required] = array_pop(
							$matches
						));	
					}

										
				} while (strtolower(basename($path)) != strtolower($_SERVER['EG_DB_CONNECTION_PRIMARY_ENGINE']));
				
				
				// check found flag, which if false, throw exception, because required
				// statement is apparently missing
				if (!$found) { 
					throw new DDL\Exception\Exception(
						"MISSING required statement: $required"
					);
				}				
			}

		}
		
		
		

	}

	/**
	 * 
	 * Returns path to statement as identified by name - statement/file type
	 * will be determine by patter $name.+ 
	 * @param string $name
	 */
	public function path($name) {
		if (isset($this->paths[$name])) {
			return $this->paths[$name];
		}
				
		return false;
	}	
	
	/**
	 * 
	 * Determines if statement, identified by name,
	 * is a valid construct
	 * @param  string $name
	 * @throws DDL\Exception\Exception
	 */
	public function valid($name) {
		return isset($this->paths[$name]);
	}

	
	/**
	 * Retrieve a bundle instance based on
	 * @todo limit_static 
	 */
	public static function create(Entity $entity) { 
		return static::retrieve($entity->_class->name, function() use ($entity) { 
			return new Bundle(DDL\Utility\Path::statements(
				$entity
			));		
		});
	}

	public function statementContent($name) { 
		if (isset($this->content[$name])) { 
			return $this->content[$name];
		}
		
		throw new DDL\Exception\Exception (
			'Statement not found : ' . $name
		);
	}
	
	/**
	 * 
	 * An alias to statement content
	 * @param  string $name
	 * @throws DDL\Exception\Exception
	 * @todo   Should return statement instance as opposed to content
	 */
	public function statement($name) { 
		return $this->statementContent($name);
	}
	
	
	
	private   $path;
	protected $files;
	protected $names   = [ ];
	protected $content = [ ];
	protected $paths   = [ ];
}