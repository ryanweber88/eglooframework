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
		
	// @todo remove and place into configurable
	const FILE_ENTITIES = '/home/petflowdeveloper/www/tierzwei/Client.gloo/XML/Entities.xml';
	
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
		// @todo load entities from configurable
		$xml        = simplexml_load_file(self::FILE_ENTITIES);	
		$name       = $this->entity->_class->name;
		$definition = new DDL\Entity\Definition($this->entity);
		$attributes = [ ];
				
		// check that entity definition exists
		if (($nodes = $xml->xpath("/DataProcessing/Entities/Entity[@name='$name']")) !== false) {

			// make sure only one node exist - if more than one
			if (count($nodes) === 1) { 
				
				// set definition attributes
				foreach ($nodes[0]->attributes() as $key => $value) { 
					$attributes[$key] = (string)$value;
				}
				
				$definition->attributes = $attributes;
				
				
				// check if Relationship nodes exists
				if (is_array($nodes = $nodes[0]->xpath("Relationship"))) {
					
					// iterate through relationships
					foreach($nodes as $node) { 
						// TODO throw exception if required cardinality attributes 
						// are not available
						
						if (!isset($node['ignore'])) { 
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
					}
			
				
					return $definition;
				}
			}
			
			// otherwise, throw exception as entities must be unique 
			else { 
				throw new DDL\Exception\Exception(
					'Multiple Definitions '
				);
			}
		}
		
		throw new \eGloo\Dialect\Exception(
			'INVALID entity construction'
		);
		
	}
	
		
	protected $entity;
	private static $xml = []; 	
}