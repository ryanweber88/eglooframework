<?php
namespace eGloo\Domain\Model\Callback;

use \eGloo\Dialect\ObjectSafe as Object;

/**
 * Provides generic crud operations, wrapped with model callback
 * handlers
 */
class CRUD extends Object {
	
	public function update($model) {

						
		// check that a create callback has not already been created - this is to ensure
		// we don't face double inserts
		// @TODO since this was added late in the lifecycle of model design, there already
		// exist many create callbacks - until this is cleaned up, we have to specifically
		// check for the existence of create
		$callbacks = &$model->reference('callbacks');
		
		if ($model->send('hasCallbacks', 'update', 'around') && count($callbacks['update']['around']) == 1) {
			// get instance attributes
			$attributes = $model->attributes();
							
											
			try { 
				$model::updates(array(
					'against'      => $model->send('signature'),
					'using'        => $model
				));	
				
			}
			
			// again, since this is a guess, we ignore exception and make determination that
			// update succeeded in child classes
			catch(\Exception $pass) {
				throw $pass; 	
			}		
		}
		
	}
	
	public function create($model) {
		// check that a create callback has not already been created - this is to ensure
		// we don't face double inserts
		// @TODO since this was added late in the lifecycle of model design, there already
		// exist many create callbacks - until this is cleaned up, we have to specifically
		// check for the existence of create
		$callbacks = &$model->reference('callbacks');
		
		if ($model->send('hasCallbacks', 'create', 'around') && count($callbacks['create']['around']) == 1) {
			
			// get instance attributes - strip the primary key if 
			// is in list of attributes and has a null value
			$attributes = $model->attributes();
			$signature  = $model->send('signature');
			
			// apparently an associative array key with an associated value of nil is
			// considered unset, #wtfphp
			//if (isset($attributes[$pk = $model->primaryKeyName()]) || 
			//    is_null($attributes[$pk])) {
			
			unset($attributes[$model->primaryKeyName()]);			
			//}
											
			try {
				// set primary key with result of insert - if it has been succesfully aliased,
				// then value will be updated on true primary key
				// @TODO composite keys? 
				$model->id = $model::inserts(array(
					'into'         => $model->send('signature'),
					'using'        => $model
				));	
									
				// calling false will halt callback chain
				if (!is_null($model->id) ||  $model->id === false) {
					return false;
				}
											
			}
			
			// since we guesing on this insert, we ignore sql errors and make a determination
			// in inherited classes whether insert was successful
			catch(\Exception $pass) {
				// TODO handle this
				throw $pass;
			}	
		}			
	}
	
	public function delete($model) {
		// check that a create callback has not already been created - this is to ensure
		// we don't face double inserts
		// @TODO since this was added late in the lifecycle of model design, there already
		// exist many create callbacks - until this is cleaned up, we have to specifically
		// check for the existence of create
		$callbacks = &$model->reference('callbacks');
		
		if ($model->send('hasCallbacks', 'delete', 'around') && count($callbacks['delete']['around']) == 1) {
			
			// @TODO replace with a flexible mechanism for deleting records; especially consider composite
			// keys
			$table = $model->send('signature');
			
			try { 
				$model::statement("
					DELETE 
					
					FROM
						$table
						
					WHERE
						{$table}_id = ? 
						
				", $model->id);
			}
			
			catch (\Exception $pass) {
				throw $pass;
			}
			
		}		
	}
	
	public function afterFind($model) { }
}