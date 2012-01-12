<?php

//ini_set('display_errors', 'On');
//error_reporting();

set_error_handler('myErrorHandler');
register_shutdown_function('fatalErrorShutdownHandler');

function myErrorHandler($code, $message, $file, $line) {
  echo $message . "sucks!\n";
  return true;
}

function fatalErrorShutdownHandler()
{
  $last_error = error_get_last();

  if ($last_error['type'] === E_ERROR) {
    // fatal error
    myErrorHandler(E_ERROR, $last_error['message'], $last_error['file'], $last_error['line']);
  }
}

abstract class test {
	abstract public function test();
}

class test2 extends test {
	
}

class test3 extends test2 {
	public function test() { }
}