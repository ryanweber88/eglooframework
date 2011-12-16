<?php
namespace eGloo\Utilities;

/**
 * 
 * Generic interface for defining running processes (think threads, or initiator)
 * @author Christian Calloway
 *
 */
interface Runnable { 
	public function run();
}