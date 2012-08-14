<?php
/**
 * Provides autoload functionality for the egloo framework 
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
 
// @TODO obviously
const PATH_APPLICATION = '/var/www/api/PHP/Classes';

// this is a special case where we need to autoload eGloo base library
// classes; it is not built to be performant, and will be dropped
// from the stack once Application initializes
spl_autoload_register($GLOBALS['__autoload'] = function($name) {
	$filename = preg_replace('/\\\\/', '.', $name) . '.php';
	
	//$namspace = 
	$iterator = new RecursiveIteratorIterator(
		new RecursiveDirectoryIterator(PATH_APPLICATION)
	);
	
	foreach($iterator as $file) {
		if ($file->isFile() && $file->getFilename() == $filename) {
			require_once $file;
			
			// make sure object is instanceof of global Object
			// - if the case, then we are assured that we have
			// a __statuc method, whether a stubb or
			// actualy definition - since we are checking
			// on a string, we need to call methodExists
			// over
			if ( method_exists($name, '__static') ) {
				// because method exists will return true for inherited methods that
				// are NOT explicitly defined in class - we need to determine that
				// __static is in fact defined in loaded classes, otherwise we will
				// constantly call the Object::__static for all of its descendants;
				// to do this, we use reflection and check the declaring class against
				// our passed name parameter
				$reflection = new \ReflectionMethod($name, '__static');
		
				// since our static constructors do share the same concept of inheritence
				// as do regular constructors, we use the 'Polymorphic' annotation to
				// describe any static constructor that should be called in the
				// children of
				if (strpos($reflection->getDocComment(), '@Polymorphic') !== false ||
		
						// check if __static is in declaring class, as opposed to simply available
						// through inheritence
						$reflection->getDeclaringClass()->getName() == $name) {
		
					$name::__static();
				}
			}			
		}
	}	
});