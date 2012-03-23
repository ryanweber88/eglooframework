<?php
namespace eGloo\Domain\Utility;

/**
 * A bit of a misnomer, but allows for easily plugging in empty default values
 * into a smarty template
 * @author Christian Calloway callowaylc@gmail.com
 */
class NilArrayAccess extends ArrayAccess {
	function __construct() {
		//parent::__construct(new stdClass);
	}
}