<?php
namespace eGloo\DataProcessing\DDL\Manager;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Represents the pool of entity instance; can be accessed as array
 * @author Christian Calloway
 *
 */
class Pool extends \eGloo\Dialect\Object implements \eGloo\Utilities\StorageInterface, \Iterator, \ArrayAccess, \Countable { 
	
	function __construct() { 
		
		// stores entities in linked list, so as to allow for efficient unsetting
		// of values 
		$this->entities = new \SplDoublyLinkedList();
		
		// TODO attach listeners to pool
	}
	
	protected $entities;
	protected $map = [ ];
}