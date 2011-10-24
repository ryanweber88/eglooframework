<?php
namespace eGloo\DataProcessing\DDL\Entity;

use eGloo\DataProcessing\DDL;

/**
 * 
 * Responsible for building an entity data structure from a return data set
 * @author Christian Calloway
 *
 */
class Builder extends \eGloo\Dialect\Object { 
	
	/**
	 * 
	 * Builds entity data structure from $data
	 * @param Entity $entity
	 * @param mixed[] $data
	 * @return Entity
	 */
	public static function build(Entity $entity, array $data) { 
		
		// initialize entities data structure
		$entity->data = new Data($entity);
		$entity->data->properties = $data;
		$relationships = [ ];
		
		// TODO figure out how to relationshipos here
		//foreach ($entity->relationships as $relationship) { 
		//	$entity->data->relationships = $relationship->entity()->findBy('something');
		//}
		
		return $enitity;
		
	}
	
}