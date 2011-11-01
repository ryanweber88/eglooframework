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
	
	const REQUIRED = [
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
			$this->content[$this->names[] = explode('.', \eGloo\IO\File::basename($file))[0]] = file_get_contents(
				$file
			);
		}
		
		// check that required files in bundle are available - proceed up hierarchy chain
		// if not available in current directory
		// @todo determine moreso elegant mechanism for determining stop point
		// in hierarchy - right now just looking at directory name vs engine mode
		foreach(self::REQUIRED as $required) {
			$found = false;
			 			
			if (!in_array($required, $this->names)) { 
				do { 
					$path = dirname($path);
					
					// @todo account for multiple files with same pattern (it should be
					// rare, but it can happen
					if (count($matches = preg_grep("/$required/i", glob("$path/*")))) { 
						$found = true;
						
						$this->content[$this->names[] = $required] = file_get_contents(
							$matches[0]
						);	
					}
					
				} while (strtolower(basename($path)) != strtolower($_SERVER['EG_DB_CONNECTION_PRIMARY_ENGINE']) );
			}

			if (!$found) { 
				throw new DDL\Exception\Exception(
					"MISSING required statement: $required"
				);
			}
		}

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
		return $this->content[$name];
	}
	
	
	
	private   $path;
	protected $files;
	protected $names   = [ ];
	protected $content = [ ];
}