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