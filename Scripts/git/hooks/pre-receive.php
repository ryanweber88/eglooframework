#!/usr/bin/php
<?php
/**
 * Git server pre-receive hook: fires on push, and is responsible for enforcing
 * process and coding standards; rules can be added via lambda in pre-recieve/rules
 * directory
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
 namespace eGloo\Scripts\Git\Hooks;
 
// CONSTANTS //////////////////////////////////////////////////////////////////
 
const COMMAND_GIT_REVPARSE  = 'git rev-parse --verify HEAD 2> /dev/null';
const COMMAND_GIT_DIFFINDEX = 'git diff-index --cached --name-only HEAD';

const EXIT_SUCCESS = 0;
const EXIT_FAIL    = 1;

// FUNCTIONS //////////////////////////////////////////////////////////////////

/**
 * Examines files that were created/updated on HEAD push
 * @TODO this may removed on refactor for reuse on other commit hooks
 */
function changed_files($hash = 'HEAD') {
	$output = array();
	
	// I actually don't know what the below do, other
	// than retrieve list of changed files
	exec(COMMAND_GIT_REVPARSE, $output);
	exec(COMMAND_GIT_DIFFINDEX, $output);
	
	return $output;
}


var_export(changed_files());
exit(1);


foreach (changed_files() as $file) {
	echo "$file\n";				
				/*
        if (!preg_match($needle, $file)) {
                // only check php files
                continue;
        }

        $lint_output = array();
        $rc              = 0;
        exec('php -l '. escapeshellarg($file), $lint_output, $rc);
        if ($rc == 0) {
                continue;
        }
        # echo implode("\n", $lint_output), "\n";
        $exit_status = 1;
        */
}

// print message back to user on commit

// finally exit successfully
exit(EXIT_FAIL);