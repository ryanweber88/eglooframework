<?php
namespace eGloo\DataProcessing\DDL\Entity\EntityInterface;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Provides standard bearer interface for Entity objects
 * @author Christian Calloway
 *
 */
interface EntityInterface { 

	// CRUD METHODS 
	
	public static function create() { }
	public static function find($id) { }
	public function update() { }
	public function delete() { }
	public function save();
	
	// LIFECYCLE CALLBACK
	
	public function onPersist(\Closure $lambda = null);
	public function onRemove(\Closure $lambda = null);
	public function onRefresh(\Closure $lambda = null);
		
	
}