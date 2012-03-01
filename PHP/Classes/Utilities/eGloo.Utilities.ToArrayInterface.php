<?php
namespace eGloo\Utilities;

/**
 * 
 * Classes implementing ToArray must provide __toArray method to callers
 * @author Christian Calloway
 *
 */
interface ToArrayInterface {
	
	/**
	 * 
	 * Convert object to array
	 */
	public function __toArray();
}
