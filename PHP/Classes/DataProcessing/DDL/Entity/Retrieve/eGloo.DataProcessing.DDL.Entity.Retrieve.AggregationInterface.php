<?php
namespace eGloo\DataProcessing\DDL\Entity\Retrieve;

use eGloo\DataProcessing\DDL;

/**
 * 
 * Provides interface for find/select operations on a set of data
 * @author Christian Calloway
 *
 */
interface AggregationInterface { 
	
	/**
	 * 
	 * Flags a group by for $fields on data set
	 * @param array $fields
	 */
	public function groupBy(array $fields);
	

}