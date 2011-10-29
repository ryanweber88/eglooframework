<?php
namespace eGloo\DataProcessing\DDL\Manager;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Defines protocol by which entities are managed within persistence context;
 * Concrete implementations will transparently provide operations between entity
 * orm functionality and interfacing sql
 * 
 * influenced by JPA model
 * @author Christian Calloway
 *
 */
interface ManagerInterface { 
	
	/**
	 * 
	 * Places entity into persistence context
	 * @param DDl\Entity $entity
	 */
	public function persist(Entity $entity);
	
	
	/**
	 * 
	 * Removes entity from persistence context
	 * @param DDL\Entity $entity
	 */
	public function remove(Entity $entity);
	
	
	/**
	 * 
	 * Determines if entity is currently in persistence context
	 * @param DDL\Entity
	 */
	public function contains(Entity $entity);
	
	/**
	 * 
	 * Retrieves entity from persistence context
	 * @param DDL\Entity $entity
	 * @param mixed      $key
	 */
	public function retrieve(Entity $entity, $key);
	
	
	/**
	 * 
	 * Refresh the state of the instance from the database, overwriting changes 
	 * made to the entity, if any.
	 * @param DDL\Entity $entity
	 */
	public function refresh(Entity $entity);
	
	/**
	 * 
	 * Merge context
	 * @param  Entity $entity
	 * @throws \eGloo\Dialect\Exception
	 */
	public function merge(Entity $entity);
	
	
	/**
	 * 
	 * Synchronize the persistence context to the underlying database
	 */
	public function flush();
	

	
	
	/**
	 * 
	 * Clear the persistence context, causing all managed entities to become detached.
	 */
	public function clear();
}