<?php
namespace eGloo\System\Server;

/**
 * 
 * This is basically a utility class for bidging the divide between Apache and Mongrel;
 * specifically placing values into application/persistent context
 * @author Christian Calloway
 * @todo remove entirely
 *
 */
class Bridge {
	
	/**
	 * 
	 * Parses htaccess and makes values available to application context
	 * @param unknown_type $path
	 */
	public static function htaccess($path) { 
		
		$buf = null;
		$matches = null;
		$directives = array();
		
		// match all SetEnv and place into $_SERVER global context
		preg_match_all (
			'/^SetEnv.+/im', $buf = file_get_contents($path), $matches 
		);
				
		foreach ($matches[0] as $match) { 
			$parts = preg_split('/\s+/', $match);
			$_SERVER[$parts[1]] = @$parts[2];
		}
		
		// fill in default values to play nicely with config load
		$_SERVER['SCRIPT_NAME'] = '/index.php';
		
		// match all apache rewrite conditions
		// @todo figure out how rewrites will work (seperate engine available?) - for
		// now just record rewrite conditions 
		preg_match_all (
			'/^Rewrite/i', $buf, $matches
		);
		
		foreach ($matches[0] as $match) { 
			$parts = preg_split('\s', $match);
			$directives[] = Directive::factory($parts[0])
				->value($parts[1]);
		}
				
		// @TODO : do something with directives

	}
	
	/**
	 * 
	 * Transparently move request parameters to global specifiers
	 * @param  object $request
	 * @return void
	 */
	public static function parameters($request) { 
		$method = $request->method;
		$name   = "_$method";

		// set method global to point to request method
		$$name = &$request->method;
		$_REQUEST = &$request->method;		
	}
	
}