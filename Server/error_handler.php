<?php
/**
 * Contains generic error handler for API application
 * @author Christian Calloway callowaylc@gmail christian@petflow
 */

 
/**
 * The job of error handler is to catch header and session calls within
 * application context; since output has already been sent, they will
 * annoyingly/automatically send warning messages; we use this
 * @TODO check xdebug to see if we can get more explicit on error
 * messages; the current comparison is inefficent at best
 */ 
set_error_handler(function($id, $message, $file, $line, $context) {
	
	// first we are only checking on "warning" errors	
	if ($id == E_WARNING) {
		
		// do a debug backtrace to check function call and
		// delcare list of functions that will be handled 
		// explicitly
		$backtrace = debug_backtrace();
		
		if (isset($backtrace[1])) {
			$backtrace = $backtrace[1];		
			$functions = [
				'header',
				'session_start'
			];
					 
			// if in list, we handle each case explicitly
			// @TODO for the time being, we don't have to worry about
			// sessions because we are writing to a stateless environment
			if (in_array($function = $backtrace['function'], $functions)) {
				// get header & arguments and store 
				// @TODO could loop this, but clearer this way; appserver headers
				// follow the form of [n] = header, [n+1] = header argument
				list($header, $argument) = explode(
					':', $backtrace['args'][0]
				);
				
				$GLOBALS['headers'][] = trim($header);
				$GLOBALS['headers'][] = trim($argument);
			}
		}

	}
});