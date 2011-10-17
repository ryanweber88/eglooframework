<?php
namespace eGloo\DataProcessing\DDL\Entity;

<<<<<<< HEAD
=======
use \eGloo\DataProcessing\DDL;

>>>>>>> develop
/**
 * 
 * Represents an entity's data, attributes or makeup 
 * @author Christian Calloway
 *
 */
<<<<<<< HEAD
abstract class Data extends \eGloo\Dialect\Object {

	
	/** The data persistent id */
	protected $pid;
=======
class Data extends \eGloo\Dialect\Object {

	function __construct(Entity &$entity) { 
		$this->entity = $entity;
	}
	
	/** The data persistent id */
	protected $pid;
	
	protected $entity;
>>>>>>> develop
}