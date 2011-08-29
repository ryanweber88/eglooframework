#!/usr/bin/php
<?php
/**
 * Front/wrapper to mongrel2 + m2php instance
 * @author Christian Calloway
 */

// CONSTANTS //////////////////////////////////////////////////////////////////
// TODO : Move to configuration

const NUMBER_CHILDREN = 4;

// NAMESPACE //////////////////////////////////////////////////////////////////


// SET INCLUDE PATHS //////////////////////////////////////////////////////////
// TODO: Remove; this should be part of cli bootstrap

set_include_path(
	get_include_path()                      . ':' . 
	realpath(__DIR__ .   '/m2php')          . ':' .
	realpath(__DIR__ .   '/../')            . ':' . // egloo framework home
	realpath(__DIR__ .   '/../PHP/Classes') . ':'   // egloo framework class library
);


// DEFINE AUTOLOADERS /////////////////////////////////////////////////////////
// TODO: Remove; this should be part of cli bootstrap

// pear autoloader
spl_autoload_register(function($className) { 
	@include_once str_ireplace('_', '/', $className) . '.php';
});

// egloo namespace autoloader
spl_autoload_register(function($className) { 
	
	// assume classes are namespaced and remove top level domain "eGloo"
	// as its a synonym for /root/PHP/Classes/
	//echo "class = $className\n";
	$parts = array_slice(
		explode ('\\', $className), 1
	);
	
	$path  = implode(
		DIRECTORY_SEPARATOR, array_slice($parts, 0, count($parts) - 1)
	);

	$file = implode('.', $parts) . '.php';
	
	
	// load file into currently running context 	
	if (!(@include_once "$path/eGloo.$file")) { 
		// log className which could not be loaded
	} 
	
});


// PROPERTIES /////////////////////////////////////////////////////////////////


// EXECUTION //////////////////////////////////////////////////////////////////


foreach ()
