<?php
namespace eGloo\DataProcessing\DDL\Entity\Definition;

use eGloo\DataProcessing\DDL;

/**
 * 
 * Responsible for building definition from entities file
 * @author Christian Calloway
 * @todo   support
 *
 */
class Builder extends \eGloo\Dialect\Object implements \eGloo\Utilities\BuilderInterface { 
	
	const FILE = 'Entities.xml';
	
	
	/**
	 * 
	 * Responsible for building entity object definition
	 * 
	 */
	public function build() {
		
		// throw exception if entity is unavailable
		if (is_null($this->entity)) { 
			throw new \eGloo\Dialect\Exception(
				'Builder requires entity property'
			);
		}
		
		// use simplexml to load/parse entities file
		// TODO abstract parsing mechanism, as we should be able
		// to load entity information from any storage scheme
		$path = 
			\eGlooConfiguration::getApplicationsPath() . '/' . 
			\eGlooConfiguration::getApplicationPath()  . '/XML/' . self::FILE;

		if (!isset($xml[$path])) { 
			$xml[$path] = simplexml_load_file(
				\eGlooConfiguration::getApplicationsPath() . '/' . 
				\eGlooConfiguration::getApplicationPath()  . '/XML/' . self::FILE
			);
		}
		
		$name  = $this->entity->_class->name;
		$definition = new DDL\Entity\Definition($this->entity);
		$relationships = [ ];
				
		// iterate through relationships
		foreach($xml[$path]->xpath("/DataProcessing/Entities/Entity[@name='$name']/Relationship") as $node) { 
			// TODO throw exception if required cardinality attributes 
			// are not available
			
			$relationship = new Relationship();
			$relationship->to  = $node['to'];
			
			foreach(['has', 'belongs'] as $type) { 
			
				if (isset($node[$type])) { 
					$relationship->$type = $node[$type] == 'many'
						? Relationship::CARDINALITY_MANY 
						: Relationship::CARDINALITY_ONE;
				}
			}
			
			$relationships[] = $relationship;
				
		}
		
		// set relationships property and return definition
		$definition->relationships = $relationships;
		
		return $definition;
		
	}
	
		
	protected $entity;
	private static $xml = []; 	
}