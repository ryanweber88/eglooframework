<?php
namespace eGloo\DataProcessing\DDL\Entity;

use eGloo\DataProcessing\DDL;

/**
 * 
 * Provides public-facing methods needed for instances
 * that defer processing
 * @author Christian Calloway
 *
 */
interface EvaluationInterface { 
	
	
	/**
	 * 
	 * Determines if current instance is valid by
	 * running instance-specific evaluation routines
	 */
	public function valid();
}