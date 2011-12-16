<?php
namespace eGloo\DataProcessing\DDL\Transaction;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Defines interface between manager and entity method call
 * @author Christian Calloway
 *
 */
interface Transaction { 
	
	/**
	 * 
	 * Commits an entity transaction (a transaction from manager
	 * to sql)
	 * @return DDL\Entity\Entity
	 */
	public function commit();
}