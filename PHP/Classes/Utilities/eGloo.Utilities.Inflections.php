<?php
namespace eGloo\Utilities;

/**
 * 
 * Clearly inspired by rails inflections class - provides pluralizing/singularalizing utilities
 * @author Christian Calloway
 * @todo   Add rules as opposed to statically listing them in pluralize
 *
 */
class Inflections extends \eGloo\Dialect\Object {
	
	use \eGloo\Utilities\SingletonTrait;
	
	function __construct() { 
		$this->singulars = [
	        [ '/(quiz)zes$/i'             , "$1" ],
	        [ '/(matr)ices$/i'            , "$1ix" ],
	        [ '/(vert|ind)ices$/i'        , "$1ex" ],
	        [ '/^(ox)en$/i'               , "$1" ],
	        [ '/(alias)es$/i'             , "$1" ],
	        [ '/(octop|vir)i$/i'          , "$1us" ],
	        [ '/(cris|ax|test)es$/i'      , "$1is" ],
	        [ '/(shoe)s$/i'               , "$1" ],
	        [ '/(o)es$/i'                 , "$1" ],
	        [ '/(bus)es$/i'               , "$1" ],
	        [ '/([m|l])ice$/i'            , "$1ouse" ],
	        [ '/(x|ch|ss|sh)es$/i'        , "$1" ],
	        [ '/(m)ovies$/i'              , "$1ovie" ],
	        [ '/(s)eries$/i'              , "$1eries" ],
	        [ '/([^aeiouy]|qu)ies$/i'     , "$1y" ],
	        [ '/([lr])ves$/i'             , "$1f" ],
	        [ '/(tive)s$/i'               , "$1" ],
	        [ '/(hive)s$/i'               , "$1" ],
	        [ '/(li|wi|kni)ves$/i'        , "$1fe" ],
	        [ '/(shea|loa|lea|thie)ves$/i', "$1f" ],
	        [ '/(^analy)ses$/i'           , "$1sis" ],
	        [ '/((a)naly|(b)a|(d)iagno|(p)arenthe|(p)rogno|(s)ynop|(t)he)ses$/i'  , "$1$2sis" ],
	        [ '/([ti])a$/i'               , "$1um" ],
	        [ '/(n)ews$/i'                , "$1ews" ],
	        [ '/(h|bl)ouses$/i'           , "$1ouse" ],
	        [ '/(corpse)s$/i'             , "$1" ],
	        [ '/(us)es$/i'                , "$1" ],
	        [ '/s$/i'                     , "" ]			
		];
		
		$this->plurals = [
			[ '/(quiz)$/i',			      "$1zes"   ],
			[ '/^(ox)$/i',			      "$1en"	],
			[ '/([m|l])ouse$/i',		  "$1ice"   ],
			[ '/(matr|vert|ind)ix|ex$/i', "$1ices"  ],
			[ '/(x|ch|ss|sh)$/i',		  "$1es"	],
			[ '/([^aeiouy]|qu)y$/i',	  "$1ies"   ],
			[ '/([^aeiouy]|qu)ies$/i',	  "$1y"	    ],
			[ '/(hive)$/i',			      "$1s"	    ],
			[ '/(?:([^f])fe|([lr])f)$/i', "$1$2ves" ],
			[ '/sis$/i',				  "ses"	    ],
			[ '/([ti])um$/i',			  "$1a"	    ],
			[ '/(buffal|tomat)o$/i',	  "$1oes"   ],
			[ '/(bu)s$/i',				  "$1ses"   ],
			[ '/(alias|status)$/i',	      "$1es"	],
			[ '/(octop|vir)us$/i',		  "$1i"	    ],
			[ '/(ax|test)is$/i',		  "$1es"    ],
			[ '/s$/i',					  "s"       ],
			[ '/$/',					  "s"       ]
		];
		
		$this->irregulars = [
			[ 'move',   'moves'	],
			[ 'sex',	'sexes'	],
			[ 'child',  'children' ],
			[ 'man',	'men'	  ],
			[ 'person', 'people'   ],
		];
		
		$this->uncountables = [ 
			'sheep', 
			'fish',
			'series',
			'species',
			'money',
			'rice',
			'information',
			'equipment'
		];
	}
	
	/**
	 * 
	 * Add plural rule
	 * @param  string $regexp
	 * @param  string $replacement
	 * @return void
	 */
	public function plural($regexp, $replacement) { 
		$this->plurals[] = [ $regexp, $replacement ];
	}

	/**
	 * 
	 * Add singular rule
	 * @param  string $regexp
	 * @param  string $replacement
	 * @return void
	 */
	public function singular($regexp, $replacement) { 
		$this->singulars[] = [ $regexp, $replacement ];
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
		$this->humans[] = [ $regexp, $replacement ];
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
		$this->irregulars[] = [ $singular, $plural ];
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