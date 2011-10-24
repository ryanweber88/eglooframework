<?php
namespace eGloo\DataProcessing\DDL\Entity\Statement;


use eGloo\DataProcessing\DDL\Entity\Entity;


/**
 * 
 * Responsible for building statement to be executed by Statement
 * @author Christian Calloway
 *
 */
class Builder extends \eGloo\Dialect\Object { 
	
	/**
	 * 
	 * Responsible for building/parsing statement, given entity
	 * data
	 * @param Entity $entity
	 * @param string $content
	 */
	public static function build(Entity $entity, $content, array $arguments = [ ]) { 
		
		// type and array will be removed for variable interpolation
		// the information is there for future cases in which
		// work is needed based upon that data
		$content = static::removeMetaData($string);
		
		// TODO cache parsed query based on key|value pairs
		// passed in arguments
		
		// use blitz parser
		$blitz = new \Blitz();
		$blitz->load($content);
		$blitz->parse(static::keyValueArguments(
			$arguments
		));
		
	}
	
	private static function removeMetaData($string) { 
		// replace {{ name|type|[array] }} for {{ $name }}
		return preg_replace (
			'/\{\{.+?([a-zA-Z_].+?).+?\}\}/', '{{ $$0 }}', $string
		);
	}
	
	private static function keyValueArguments($arguments) { 
		$assoc = [ ];
		
		foreach ($arguments as $argument) { 
			$assoc[$argument->name] = $argument->value; 
		}
		
		return $assoc;
	}
	
}