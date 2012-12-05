<?php
namespace eGloo\Domain\Utility;

use \eGloo\Dialect\Object;
use \eGloo\TemplateProcessing;
use \eGloo\Domain\Utility;

/**
 * Provides domain-specific date utility methods
 * @author Christian Calloway
 * @TODO most of this should be determined at infrastructure level
 */
class Date extends Object 
	implements TemplateProcessing\ToTemplateInterface {
	
	public static function years() {
		$result		= array();
		$start_year = date('Y');
		for( $i = $start_year; $i <= $start_year + 8 ; $i++ ) {
			$result[$i] = $i;
		}
		
		return $result;		
	}
	
	public static function months() {
		return array(
			1	=> '01 - January',
			2	=> '02 - February',
			3	=> '03 - March',
			4	=> '04 - April',
			5	=> '05 - May',
			6	=> '06 - June',
			7	=> '07 - July',
			8	=> '08 - August',
			9	=> '09 - September',
			10	=> '10 - October',
			11	=> '11 - November',
			12	=> '12 - December' 
		);		
	}
	
	public function toTemplate() {
		return new Utility\ArrayAccess($this);
	}
	
}
