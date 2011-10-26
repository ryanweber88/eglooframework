<?php
namespace eGloo\DataProcessing\DDL\Statement;

use \eGloo\DataProcessing\DDL;
use \eGloo\DataProcessing\DDL\Entity\Entity;


/**
 * 
 * Responsible for building statement to be executed by Statement
 * @author Christian Calloway
 *
 */
class Builder extends \eGloo\Dialect\Object {
	
	
	public static function create(Entity $entity, $content, array $arguments = [ ]) {
		$builder            = new Builder();
		$builder->entity    = $entity;
		$builder->content   = $content;
		$builder->arguments = $arguments;
		
		var_export($builder->arguments); exit;
				
		return $builder->build();
	}
	
	/**
	 * 
	 * Responsible for building/parsing statement, given entity
	 * data
	 * @param Entity $entity
	 * @param string $content
	 */
	public function build() { 
		
		// type and array will be removed for variable interpolation
		// the information is there for future cases in which
		// work is needed based upon that data
		$content = $this->removeMetaData($this->content);
		
		// TODO cache parsed query based on key|value pairs
		// passed in arguments
		
		// use blitz parser
		$blitz = new \Blitz();
		$blitz->load($content);
		$blitz->parse($this->keyValueArguments(
			$this->arguments
		));
		
	}
	
	private function removeMetaData($string) { 
		// replace {{ name|type|[array] }} for {{ $name }}
		return preg_replace (
			'/\{\{.+?([a-zA-Z_]+).+?\}\}/', '{{ $$1 }}', $string
		);
	}
	
	private function keyValueArguments($arguments) { 
		$assoc = [ ];
		
		foreach ($arguments as $argument) { 
			$assoc[$argument->name] = $argument->value; 
		}
		
		return $assoc;
	}
	
	protected $entity;
	protected $content;
	protected $arguments;
	
}