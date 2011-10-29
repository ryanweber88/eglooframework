<?php
namespace eGloo\DataProcessing\DDL\Entity\Data;

use eGloo\DataProcessing\DDL;

/**
 * 
 * Responsible for building definition from entities file
 * @author Christian Calloway
 * @todo   support
 * @deprecated
 */
class Builder extends \eGloo\Dialect\Object implements \eGloo\Utilities\BuilderInterface { 
	
	public static function create(DDL\Entity\Entity $entity, array $data) { 
		$builder = new Builder();
		$builder->entity = $entity;
		$builder->data   = $data;
		
		return $builder->build();
	}
	
	/**
	 * 
	 * Responsible for build of entity data structure;
	 */
	public function build() { 

		$data = new DDL\Entity\Data;
		
		foreach($data as $key => $value) { 
			
		}
		
		return $data;
	}
	
	protected $entity;
	protected $data;
}