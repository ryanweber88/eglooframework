<?php
/**
 * Prints class hierarchy information
 * @author Christian Calloway
 */

// CONSTANTS //////////////////////////////////////////////////////////////////


// NAMESPACE //////////////////////////////////////////////////////////////////

// SET INCLUDE PATHS //////////////////////////////////////////////////////////

// @todo currently cwd is changing through course of this script which
// bad bad bad

set_include_path(
	get_include_path() . ':' .                       // EAS Server Path
	realpath(__DIR__)  . ':' . 
	realpath(__DIR__   . '/../') . ':' .             // egloo framework home
	realpath(__DIR__   . '/../PHP/Classes/') . ':' . // egloo framework class 
	realpath('/home/petflowdeveloper/Vendor/zf2/library/')
);


// AUTOLOAD ///////////////////////////////////////////////////////////////////
//include '/home/petflowdeveloper/Develop/eglooframework/PHP/Includes/eGlooAutoload.php';

// TODO : remove when migrating to cli tool
spl_autoload_register(function($className) { 

	
	// assume classes are namespaced and remove top level domain "eGloo"
	// as its a synonym for /root/PHP/Classes/
	// echo "class = $className\n";
	$parts = preg_match('/eGloo/i', $className) 
		? array_slice(
			explode ('\\', $className), 1
		  )
		: explode ('\\', $className) ;
		
			
	$path  = implode(
		DIRECTORY_SEPARATOR, array_slice($parts, 0, count($parts) - 1)
	);
	

	$file = preg_match('/eGloo/i', $className)
		? "$path/eGloo." . implode('.', $parts) . '.php'
		: "$path/{$parts[count($parts)-1]}.php";
				
	// load file into currently running context 	
	$paths = explode(":", get_include_path());
		
	array_walk($paths, function($path) use ($file) { 
		if (file_exists("$path/$file")) { 
			require_once "$path/$file";
			return true;
		}
		
	});
	
});



// FUNCTIONS //////////////////////////////////////////////////////////////////

function putsReflectionClass(ReflectionClass $class) {
	echo ">>> {$class->getName()} @\n{$class->getFileName()}\n\n";
	
	if ($class->getParentClass()) {
		putsReflectionClass($class->getParentClass());
	}
	
}
// PROPERTIES /////////////////////////////////////////////////////////////////

$file    = $argv[count($argv)-2];
$command = $argv[count($argv)-1];


// EXECUTION //////////////////////////////////////////////////////////////////

// TESTING

// PROGRAM

// bootstrap egloo environment
// @todo remove this as egloo environment shouldn't be required
// for generalized program
$application = new \eGloo\System\Server\Application(
	__DIR__, '/var/www/client'
);

//$configuration = &\eGloo\System\Server\Configuration::instance();

// run application bootstrap
$bootstrap = &$application->bootstrap()
	// bootstrap egloo environment 
	->bootstrap('egloo');

// check if file is valid
if (is_file($file)) {
	
	require_once $file;
	
	$reflection_file  = new \Zend\Code\Reflection\FileReflection($file);
	$reflection_class = $reflection_file->getClasses()[0];

	
	eval("die_r($command);");
	
}

else {
	throw new \Exception(
		"File $file not found"
	);
	
}
