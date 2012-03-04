<?php
namespace eGloo\Utilities;

/**
 * 
 * Clearly inspired by rails inflections class - provides pluralizing/singularalizing utilities
 * @author Christian Calloway
 * @todo   Add rules as opposed to statically listing them in pluralize
 *
 */
class InflectionsSafe extends \eGloo\Dialect\ObjectSafe {
	
	//use \eGloo\Utilities\SingletonTrait;
	
	function __construct() { 
		$this->singulars = array(
	        array( '/(quiz)zes$/i'             , "$1" ),
	        array( '/(matr)ices$/i'            , "$1ix" ),
	        array( '/(vert|ind)ices$/i'        , "$1ex" ),
	        array( '/^(ox)en$/i'               , "$1" ),
	        array( '/(alias)es$/i'             , "$1" ),
	        array( '/(octop|vir)i$/i'          , "$1us" ),
	        array( '/(cris|ax|test)es$/i'      , "$1is" ),
	        array( '/(shoe)s$/i'               , "$1" ),
	        array( '/(o)es$/i'                 , "$1" ),
	        array( '/(bus)es$/i'               , "$1" ),
	        array( '/([m|l])ice$/i'            , "$1ouse" ),
	        array( '/(x|ch|ss|sh)es$/i'        , "$1" ),
	        array( '/(m)ovies$/i'              , "$1ovie" ),
	        array( '/(s)eries$/i'              , "$1eries" ),
	        array( '/([^aeiouy]|qu)ies$/i'     , "$1y" ),
	        array( '/([lr])ves$/i'             , "$1f" ),
	        array( '/(tive)s$/i'               , "$1" ),
	        array( '/(hive)s$/i'               , "$1" ),
	        array( '/(li|wi|kni)ves$/i'        , "$1fe" ),
	        array( '/(shea|loa|lea|thie)ves$/i', "$1f" ),
	        array( '/(^analy)ses$/i'           , "$1sis" ),
	        array( '/((a)naly|(b)a|(d)iagno|(p)arenthe|(p)rogno|(s)ynop|(t)he)ses$/i'  , "$1$2sis" ),
	        array( '/([ti])a$/i'               , "$1um" ),
	        array( '/(n)ews$/i'                , "$1ews" ),
	        array( '/(h|bl)ouses$/i'           , "$1ouse" ),
	        array( '/(corpse)s$/i'             , "$1" ),
	        array( '/(us)es$/i'                , "$1" ),
	        array( '/s$/i'                     , "" )			
		);
		
		$this->plurals = array(
			array( '/(quiz)$/i',			      "$1zes"   ),
			array( '/^(ox)$/i',			      "$1en"	),
			array( '/([m|l])ouse$/i',		  "$1ice"   ),
			array( '/(matr|vert|ind)ix|ex$/i', "$1ices"  ),
			array( '/(x|ch|ss|sh)$/i',		  "$1es"	),
			array( '/([^aeiouy]|qu)y$/i',	  "$1ies"   ),
			array( '/([^aeiouy]|qu)ies$/i',	  "$1y"	    ),
			array( '/(hive)$/i',			      "$1s"	    ),
			array( '/(?:([^f])fe|([lr])f)$/i', "$1$2ves" ),
			array( '/sis$/i',				  "ses"	    ),
			array( '/([ti])um$/i',			  "$1a"	    ),
			array( '/(buffal|tomat)o$/i',	  "$1oes"   ),
			array( '/(bu)s$/i',				  "$1ses"   ),
			array( '/(alias|status)$/i',	      "$1es"	),
			array( '/(octop|vir)us$/i',		  "$1i"	    ),
			array( '/(ax|test)is$/i',		  "$1es"    ),
			array( '/s$/i',					  "s"       ),
			array( '/$/',					  "s"       )
		);
		
		$this->irregulars = array(
			array( 'move',   'moves'	),
			array( 'sex',	'sexes'	),
			array( 'child',  'children' ),
			array( 'man',	'men'	  ),
			array( 'person', 'people'   ),
			array( 'status', 'status' )
		);
		
		$this->uncountables = array( 
			'sheep', 
			'fish',
			'series',
			'species',
			'money',
			'rice',
			'information',
			'equipment'
		);
	}
	
	/**
	 * 
	 * Add plural rule
	 * @param  string $regexp
	 * @param  string $replacement
	 * @return void
	 */
	public function plural($regexp, $replacement) { 
		$this->plurals[] = array($regexp, $replacement);
	}

	/**
	 * 
	 * Add singular rule
	 * @param  string $regexp
	 * @param  string $replacement
	 * @return void
	 */
	public function singular($regexp, $replacement) { 
		$this->singulars[] = array($regexp, $replacement);
	}
	
	/**
	 * 
	 * Specifies a humanized form of a string by a regular 
	 * expression rule or by a string mapping.
	 * @param  string $regexp
	 * @param  string $replacement
	 * @return void
	 */
	public function human($regexp, $replacement) { 
		$this->humans[] = array($regexp, $replacement);
	}	
	
	/**
	 * 
	 * Specifies a new irregular that applies to both pluralization and 
	 * singularization at the same time.
	 * @param  string $singular
	 * @param  string $plural
	 * @return void
	 */
	public function irregular($singular, $plural) { 
		$this->irregulars[] = array($singular, $plural);
	}		

	/**
	 * 
	 * Add irregular translation of singular to plural
	 * @param  string $regexp
	 * @param  string $replacement
	 * @return void
	 */
	public function uncountable($word) { 
		$this->uncountables[] = $word;
	}	
	
	/**
	 * 
	 * Returns the plural form of the word in the string.
	 * @param  string $string
	 * @return string
	 */
	public static function pluralize($string) {

		$inflections = static::instance();

		// save some time in the case that singular and plural are the same
		if ( in_array( strtolower( $string ), $inflections->uncountables ) ) {
			return $string;
		}
		
		// check for irregular singular forms
		foreach ( $inflections->irregulars as $noun ) {
			if ( strtolower( $string ) == $noun[0] ) {
				return $noun[1];
			}
		}

		// check for matches using regular expressions
		foreach ( $inflections->plurals as $pattern ) {
			if ( preg_match( $pattern[0], $string ) ) {
				return preg_replace( $pattern[0], $pattern[1], $string );
			}
		}
	
		return $string;
	}	
	
	/**
	 * 
	 * Returns the plural form of the word in the string.
	 * @param  string $string
	 * @return string
	 */
	public static function singularize($string) {

		$inflections = static::instance();

		// save some time in the case that singular and plural are the same
		if ( in_array( strtolower( $string ), $inflections->uncountables ) ) {
			return $string;
		}
		
		// check for irregular singular forms
		foreach ( $inflections->irregulars as $noun ) {
			if ( strtolower( $string ) == $noun[0] ) {
				return $noun[1];
			}
		}

		// check for matches using regular expressions
		foreach ( $inflections->singulars as $pattern ) {
			if ( preg_match( $pattern[0], $string ) ) {
				return preg_replace( $pattern[0], $pattern[1], $string );
			}
		}
	
		return $string;
	}
	
	public static function isSingular($name) {
		return static::singularize($name) == $name;
	}
	
	public static function isPlural($name) {
		return static::pluralize($name) == $name;
	}

	/**
	 * 
	 * Returns the plural form of the word in the string.
	 * @param  string $string
	 * @return string
	 */
	public static function camelize($sring) { }
	
	/**
	 * 
	 * Returns the plural form of the word in the string.
	 * @param  string $string
	 * @return string
	 */
	public static function underscore($sring) { }
	
	protected $humans;
	protected $plurals;
	protected $singulars;
	protected $uncountables;
	protected $irregulars;
}