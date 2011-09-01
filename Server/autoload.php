<?php
/**
 * Simple autoload to attach to eGloo framework class library
 * @author Christian Calloway
 */
spl_autoload_register(function($className) { 

	// assume classes are namespaced and remove top level domain "eGloo"
	// as its a synonym for /root/PHP/Classes/
	// echo "class = $className\n";
	$parts = array_slice(
		explode ('\\', $className), 1
	);
	
	$path  = implode(
		DIRECTORY_SEPARATOR, array_slice($parts, 0, count($parts) - 1)
	);

	$file = "$path/eGloo." . implode('.', $parts) . '.php';
	
	
	// load file into currently running context 	
	$paths = explode(":", get_include_path());
		
	array_walk($paths, function($path) use ($file) { 
		if (file_exists("$path/$file")) { 
			require_once "$path/$file";
		}
	});
	
});