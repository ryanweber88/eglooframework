<?php
namespace eGloo\DataProcessing\DDL\Statement;

use \eGloo\DataProcessing\DDL;
use \eGloo\DataProcessing\DDL\Entity\Entity;


/**
 * 
 * Responsible for building statement to be executed by Statement
 * @author Christian Calloway
 * @todo   limit_static
 *
 */
class Builder extends \eGloo\Dialect\Object {
	
	use \eGloo\Utilities\Collection\StaticStorageTrait;
	
	
	public static function create(Entity $entity, $content, array $arguments = [ ]) {
		$builder            = new Builder();
		$builder->entity    = $entity;
		$builder->content   = $content;
		$builder->arguments = $arguments;
						
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
		
		// parse "statement" statements
		$this->content = $this->insertIncludes($this->entity, $this->content);
	
		
		// type and array will be removed for variable interpolation
		// the information is there for future cases in which
		// work is needed based upon that data
		$content = $this->removeMetaData($this->content);
		
		// TODO cache parsed query based on key|value pairs
		// passed in arguments
		//echo $content; exit;
		
		
		// add entity specific values to arguments
		$this->arguments = $this->processArguments(
			$this->arguments
		);
		
		$this->arguments['type'] = strtolower(
			$this->entity->_class->name
		);
		
		
		// use blitz parser
		$blitz = new \Blitz();
		$blitz->load($this->content);
		
		// TODO arguments should be passed as object type, but
		// associative array for now
		return $blitz->parse($this->arguments);
		
		/*
		$blitz->parse($this->keyValueArguments(
			$this->arguments
		));
		*/
	}
	
	
	private function insertIncludes(Entity $entity, $content) { 
		// parses statement content for list of includes, which
		// follows pattern 	
		$bundle = Bundle::create ($entity, $content);
		
		// match all {{ |statement }} patterns and replace
		// with bundle content - using eval modifier here just
		// for sanity reasons, as well as n-step
		return preg_replace (
			'/\{\{\s+?\$(.+?)\|statement\s+?}\}/e', '', $content
		);
				
		
	}
	
	private function processArguments(array $arguments = [ ]) { 
		// processes arguments to be used in query: for example,
		// turns string[] to comma delimited
		// @todo this will have to be far more intelligent,
		// as a 1 size fits all approach will not work
		
		foreach ($arguments as $key => $argument) { 
			if (is_array($argument)) { 
				$arguments[$key] = $argument;
			}
		}
		
		return $arguments;
		
	}
	
	private function removeMetaData($content) { 
		// replace {{ name|type|[array] }} for {{ $name }}
		return preg_replace (
			'/\{\{\s+?\$([a-zA-Z_]+).+?\}\}/', '{{ $$1 }}', $content
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