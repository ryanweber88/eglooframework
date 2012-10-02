#!/usr/bin/php

<?php

// expecting email address, double-quoted subject line, and canonical location of a file
//   containing the message body text
$numArgsExpected = 3;
// the name of the script is passed as arg[0]
$numArgsExpected = $numArgsExpected + 1;
$numArgs = sizeof( $argv );

$errorEmailAddr = 'ben@petflow.com';
$errorEmailSub = 'Error with EmailScript.php';
$errorEmailMess = 'Unchanged message...';

if ( $numArgs == $numArgsExpected ) {
	$mail_to = $argv[1];
	$subject = $argv[2];
	$canonicalMessageLoc = $argv[3];

	$message = file_get_contents( $canonicalMessageLoc );
	
	$mail_success = mail( $mail_to, $subject, $message );
}
else {
	$errorEmailMess = 'Wrong num Args';

	$mail_success = mail( $errorEmailAddr, $errorEmailSub, $errorEmailMess );
}
