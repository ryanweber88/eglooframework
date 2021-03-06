<?php
/**
 *
 */
namespace eGloo\Utility;

/**
 * Provides delegate/proxy support; works on hierarchal basis, meaning
 * this trait will for proxying up a "hierarchal" chain, if the proxied
 * instance is itself a proxy
 */
trait DelegateTrait {

	/**
	 * Use our method missing to attempt to call method on delegate, this
	 * should in effect be recursive if receiver uses delegate trait as well,
	 * and will provide an idea of chained inheritence
	 */
	public function __call($name, $arguments) {

		$function = null;

		// iterate through our delegates and see if they will
		// respond to the message; either explicitly (a respond_to
		// has been specified) or implicitly (no respond_to's defined
		// for receiver; obviously the order in which we define our
		// delegation is important and will default to first
		// available delegate that passes above condition
		foreach ($this->receivers as $receiver) {

			// look for specific receiver - this works on a first come, first
			// serve basis
			if (in_array($name, $receiver['respond_to'])) {
				$function = function($arguments) use ($receiver) {
					return call_user_func_array(
						[ $receiver['is'], $name ],  $arguments
					);
				};
			}

		}

		// if we have not returned, look for a catch-all receiver -
		// again, the first catchall receiver we find will be
		// called, so it is up to the developer to not screw up
		// what receivers are specified
		foreach ($this->receivers as $receiver) {
			// we have found a catch all receiver, pass message to
			// receiver - it is not gaurenteed that receiver will be
			// able to respond to message, in which case an exception
			// must be thrown
			try {
				if (count($receiver['respond_to']) === 0) {
					$function = function($arguments) use ($receiver) {
						return call_user_func_array(
							[ $receiver['is'], $name ],  $arguments
						);
					};
				}
			}

			// we ignore our exception, to allow for passing __call method
			// up to parent, should it exist
			catch (\Exception $ignore) { }
		}


		// if function is callable, it has been defined
		if (is_callable($function)) {

			// add instance/singleton definition if user of
			// this trait responds to defineMethod - the purpose
			// of this is to add method definition either statically
			// (redefining class) or within quick lookup table (if
			// we are out side of stateful environment)
			if (method_exists($this, 'defineMethod')) {
				$function = $this->defineMethod(
					$name, $function
				);
			}

			// finally, execute block and return to caller
			return $function($arguments);
		}

		// check if parent responds to __call, in which case we
		// forward parenter handler; if this cannot respond to
		// message, an exception will be thrown further up
		// stack
		if (method_exists(parent, '__call')) {
			parent::__call($name, $arguments);
		}

	}

	/**
	 * Allows for delegating specifc methods, or variable (any)
	 * method to our target
	 */
	protected function delegate($mixed, $to = null) {


		// check if mixed is an object, in which we are delegating
		// wholesale to object
		if (is_object($mixed)) {
			$this->receivers[get_class($mixed)] = [
				'is'         => $mixed,
				'respond_to' => [ ]
			];
		}

		// check if mixed is instead a method name (as identified
		// by a string) - we are not checking explicitly to
		// see if reciever is valid
		else if (is_string($mixed) && is_object($to)) {
			$this->receivers[$key = get_class($to)]['is'] = $to;
			$this->receivers[$key]['respond_to'][] =
				$mixed;
		}

		// here, we are passing more than one method name via array
		else if (is_array($mixed) && is_object($to)) {
			$this->receivers[$key = get_class($to)]['is'] = $to;

			// iterate through our supposed list of method names
			foreach ($mixed as $method) {
				$this->receivers[$key]['respond_to'][] = $method;
			}
		}

		// in this, case we are passing itemized list of
		// methods to delegate; this is really only for
		// convenience
		else if (func_num_args() > 2 && is_object(func_get_args()[$number = func_num_args()-1])) {
			$this->receivers[$key = get_class($to)]['is'] = $to;

			foreach (array_slice(func_get_args(), 0, $number - 2) as $method) {
				$this->receivers[$key]['respond_to'] = $method;
			}
		}

		// throw an exception in the case that we are attempting
		// to delegate to illegal reciever
		else {
			throw new \eGloo\Dialect\Exception\Exception (
				"Attempted to delegate to illegal reciever $mixed $to"
			);
		}
	}


	/**
	 * We mark receivers as private as it not intended
	 * for usage outside of this trait
	 */
	private $receivers = [ ];
}
