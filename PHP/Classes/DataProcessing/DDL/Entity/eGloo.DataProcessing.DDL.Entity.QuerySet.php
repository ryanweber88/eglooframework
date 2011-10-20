<?php
namespace eGloo\DataProcessing\DDL\Entity;

  
/**
 * 
 * Represents a returned set of entitities (this may be redundant since entities are
 * stored in manager as set?)
 * @author Christian Calloway
 * @todo This may be redundant 
 *
 */
class QuerySet extends \eGloo\Dialect\Object implements
 Retieve\AggregationInterface, Retrieve\PaginationInterface, Retrieve\WindowingInterface, Retrieve\CommitInterface {
	
 	// Retrieve Interfaces --------------------------------------------------- //
	
 
	public function limit($amount) { 
		
	}
	
	public function offset($amount) { 
		
	}
	
	public function groupBy(array $fields) {
		
	}
	
	public function commit() { 
		
	}
 	
}