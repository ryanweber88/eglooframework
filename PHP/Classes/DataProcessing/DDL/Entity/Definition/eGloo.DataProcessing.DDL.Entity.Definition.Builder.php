<?php
namespace eGloo\DataProcessing\DDL\Entity\Definition;

use \eGloo\DataProcessing\DDL;
use \eGloo\DataProcessing\DDL\Entity\Entity;


/**
 * 
 * Responsible for building definition from entities file
 * @author Christian Calloway
 * @todo   support
 *
 */
class Builder extends \eGloo\Dialect\Object implements \eGloo\Utilities\BuilderInterface { 
	
	use \eGloo\Utilities\StaticStoreTrait;
	
	
	public static function create(Entity $entity) { 
		$builder = new Builder();
		$builder->entity = $entity;
		
		return $builder->build();
	}
	
	/**
	 * 
	 * Responsible for building entity object definition
	 * @throws \eGloo\Dialect\Exception
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
		$xml = &static::retrieve(DDL\Utility\Path::definition(), function($key) {
			return simplexml_load_file($key);
		});	

		
		$name  = $this->entity->_class->name;
		$definition = new DDL\Entity\Definition($this->entity);
				
		// check that entity definition exists
		if ($xml->xpath("/DataProcessing/Entities/Entity[@name='$name']/Relationship")) { 
			
			// iterate through relationships
			foreach($xml->xpath("/DataProcessing/Entities/Entity[@name='$name']/Relationship") as $node) { 
				// TODO throw exception if required cardinality attributes 
				// are not available
				
				$relationship = new DDL\Entity\Relationship;
				$relationship->to = $node['to'];
				
				foreach(['has', 'belongs'] as $type) { 
				
					if (isset($node[$type])) { 
						$relationship->$type = $node[$type] == DDL\Entity\Relationship::STRING_MANY
							? DDL\Entity\Relationship::CARDINALITY_MANY 
							: DDL\Entity\Relationship::CARDINALITY_ONE;
					}
				}
				
				$definition->addRelationship($relationship);
			}
		
			
			return $definition;
		}
		
		throw new \eGloo\Dialect\Exception(
			'INVALID entity construction'
		);
		
	}
	
		
	protected $entity;
	private static $xml = []; 	
}