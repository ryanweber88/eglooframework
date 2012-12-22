<?php
namespace eGloo\Dialect\Exception;

use \eGloo\Dialect;

/**
 * An exception that is a stack of exceptions
 */
class Stack extends Dialect\Exception {

	public function push(\Exception $e) {
		$this->exception[] = $e;
	}

	public function pop() {
		// if count($exception)
	}


	public function batch($lambda) {
		$inject = '';

		foreach($this->exceptions as $exception) {
			$inject = $lambda($exception, $inject);
		}

		return $inject;
	}

	public function getMessage() {
		return $this->batch(function($exception, $inject = '') {
			return "{$exception->getMessage()}\n";
		});
	}

	public function isEmpty() {
		return count($this->exceptions) > 0;
	}

	protected $exceptions = array();
}
