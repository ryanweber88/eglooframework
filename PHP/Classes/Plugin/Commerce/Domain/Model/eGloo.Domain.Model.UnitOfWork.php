<?php
namespace eGloo\Domain\Model;

use \eGloo\Dialect\ObjectSafe as Object,
    \eGloo\Domain;

/**
 * Maintains a list of objects affected by a business transaction and 
 * coordinates the writing out of changes and the resolution of concurrency problems.
 * @author Christian Calloway callowaylc@gmail
 */
class UnitOfWork extends Object {

	// @TODO don't see the point of fetch
	//public function fetchById($id);
	public function fresh(Domain\ModelInterface $entity) { }
	public function clean(Domain\ModelInterface $entity) { }
	public function dirty(Domain\ModelInterface $entity) { }
	public function deleted(Domain\ModelInterface $entity) { }
	public function commit() { }
	public function rollback() { }
	public function clear() { }
			
}