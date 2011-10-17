<?php
namespace eGloo\DataProcessing\DDL\Entity;

use eGloo\DataProcessing\DDL;

/**
 * 
 * Defines protocol by which entities are managed within persistence context;
 * Concrete implementations will transparently provide operations between
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
	public function persist(DDl\Entity $entity);
	
	
	/**
	 * 
	 * Removes entity from persistence context
	 * @param DDL\Entity $entity
	 */
	public function remove(DDL\Entity $entity);
	
	
	/**
	 * 
	 * Determines if entity is currently in persistence context
	 * @param DDL\Entity
	 */
	public function contains(DDL\Entity $entity);
	
	/**
	 * 
	 * Retrieves entity from persistence context
	 * @param DDL\Entity $entity
	 */
	public function retrieve(DDL\Entity $entity);
	
	
	/**
	 * 
	 * Refresh the state of the instance from the database, overwriting changes 
	 * made to the entity, if any.
	 * @param DDL\Entity $entity
	 */
	public function refresh(DDL\Entity $entity);
	
	
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