<?php
namespace eGloo\Domain\Model\Callback;

use \eGloo\Domain;
use \eGloo\Domain\Model;
use \eGloo\Dialect\Object;

/**
 * Provides generic crud operations, wrapped with model callback
 * handlers
 * @author Christian Calloway callowaylc@gmail.com
 */
class CRUD extends Model\Callback {
	
	/**
	 * Provides generic handler on 'update' event (fired from model instance)
	 */
	public function update(Domain\Model $model) {

		// check that a create callback has not already been created - this is to ensure
		// we don't face double inserts
		// @TODO since this was added late in the lifecycle of model design, there already
		// exist many create callbacks - until this is cleaned up, we have to specifically
		// check for the existence of create

		if ($model->send('hasCallbacks', 'update', 'around')) {
			
			$conditions = array();
										
			if ($model::hasCompositeKeys()) {
				foreach($model::primaryKey() as $key) {
					$conditions[] = "$key = ?";		
				}
			}
			
			else {
				$conditions[] = "{$model->primaryKeyName()} = ?";
			}	
									
			try { 
				$model::updates(array(
					'against'      => $model->send('entity'),
					'using'        => $model,
					'where'        => $conditions
				));	
				
			}
			
			// again, since this is a guess, we ignore exception and make determination that
			// update succeeded in child classes
			catch(\Exception $up) {
				throw $up; 	
			}		
		}
		
	}
	
	/**
	 * Provides generic event handler on 'create' event (fired from model instance)
	 */
	public function create(Domain\Model $model) {
		
		// check that a create callback has not already been created - this is to ensure
		// we don't face double inserts
		// @TODO since this was added late in the lifecycle of model design, there already
		// exist many create callbacks - until this is cleaned up, we have to specifically
		// check for the existence of create
		
		if ($model->send('hasCallbacks', 'create', 'around')) {
											
			try {
				
				// set primary key with result of insert - if it has been succesfully aliased,
				// then value will be updated on true primary key
				// @TODO composite keys? 
				$model->id = $model::inserts(array(
					'into'         => $model::send('entity'),
					'using'        => $model
				));	
									
				// calling false will halt callback chain
				// @TODO why the explicit check here??
				if (is_null($model->id) ||  $model->id === false) {
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
	
	/**
	 * Provides generic event handler on 'delete' event (fired from model instance)
	 */	
	public function delete(Domain\Model $model) {
		// check that a create callback has not already been created - this is to ensure
		// we don't face double inserts
		// @TODO since this was added late in the lifecycle of model design, there already
		// exist many create callbacks - until this is cleaned up, we have to specifically
		
		if ($model->send('hasCallbacks', 'delete', 'around')) {
		    	
			// @TODO replace with a flexible mechanism for deleting records; especially consider composite
			// keys
			$table = $model::send('entity');
			$pk    = $model::primaryKey();
								
			if ($model::send('hasCompositeKeys')) {
				foreach($pk as $key) {
					$conditions[] = "$key = ?";		
				}
			}
			
			else {
				$conditions[] = "$pk = ?";  
			}	
			
			$conditions = implode (' AND ', $conditions);				
			
			
			try { 
				$model::statement("
					DELETE 
					
					FROM
						$table
						
					WHERE
						($conditions)
						
				", $model);
			}
			
			catch (\Exception $pass) {
				throw $pass;
			}
			
		}		
	}
	
	/** @TODO stuff - determine performance impact for firing afterFind on multple instances */
	public function afterFind(Domain\Model $model) { }
}