<?php
namespace eGloo\Utilities;

/**
 * Implements methods required for classes implementing \SplSubject or Observable interface
 */
trait SubjectTrait { 

	/*
	 * Attaches observer 
	 */
	public function attach(\SplObserver $observer) {
		$this->observers[get_class($observer)] = $observer;
	}
	
	/**
	 * Detaches observer
	 */
	public function detach(\SplObserver $observer) { 
		unset($this->observers[get_class($observer)]);
	}
	
	/**
	 * Notifies observers that an event has occured
	 */
	public function notify() { 
		foreach($this->observers as $observer) { 
			$observer->update($this);
		}
	}
		
	protected $observers = [];
}