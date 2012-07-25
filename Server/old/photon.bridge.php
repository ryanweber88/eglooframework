<?php
/**
 * Provides support or bridge to photon services from within the EAS server script
 * @author Christian Calloway
 */
namespace photon
{
    const VERSION = '0.2.0';

    /**
     * Shortcut needed all over the place.
     *
     * Note that in some cases, we need to escape strings not in UTF-8, so
     * this is not possible to safely use a call to htmlspecialchars. This
     * is why str_replace is used.
     *
     * @param string Raw string
     * @return string HTML escaped string
     */
    function esc($string)
    {
        return str_replace(array('&',     '"',      '<',    '>'),
                           array('&amp;', '&quot;', '&lt;', '&gt;'),
                           (string) $string);
    }

    /**
     * Returns a parser of the command line arguments.
     */
    function getParser()
    {
        require_once 'Console/CommandLine.php';
        $parser = new \Console_CommandLine(array(
            'name' => 'hnu',
            'description' => 'Photon command line manager.',
            'version'     => VERSION));
        $parser->addOption('verbose',
                           array('short_name'  => '-v',
                                 'long_name'   => '--verbose',
                                 'action'      => 'StoreTrue',
                                 'description' => 'turn on verbose output'
                                 ));
        $parser->addOption('conf',
                           array('long_name'   => '--conf',
                                 'action'      => 'StoreString',
                                 'help_name'   => 'path/conf.php',
                                 'description' => 'where the configuration is to be found. By default, the configuration file is the config.php in the current working directory'
                                 ));

        $init_cmd = $parser->addCommand('init',
                                        array('description' => 'generate the skeleton of a new Photon project in the current folder'));
        $init_cmd->addArgument('project',
                               array('description' => 'the name of the project'));
        $rs_cmd = $parser->addCommand('testserver',
                                      array('description' => 'run the development server to test your application'));
        $rt_cmd = $parser->addCommand('runtests',
                                      array('description' => 'run the tests of your project. Uses config.test.php as default config file'));
        $rt_cmd->addOption('directory',
                           array('long_name'   => '--coverage-html',
                                 'action'      => 'StoreString',
                                 'help_name'   => 'path/folder',
                                 'description' => 'directory to store the code coverage report'
                                 ));

        $rt_cmd->addOption('bootstrap',
                           array('long_name'   => '--bootstrap',
                                 'action'      => 'StoreString',
                                 'help_name'   => 'path/bootstrap.php',
                                 'description' => 'bootstrap PHP file given to PHPUnit. By default the photon/testbootstrap.php file'
                                 ));

        $rst_cmd = $parser->addCommand('selftest',
                                      array('description' => 'run the Photon self test procedure'));
        $rst_cmd->addOption('directory',
                           array('long_name'   => '--coverage-html',
                                 'action'      => 'StoreString',
                                 'help_name'   => 'path/folder',
                                 'description' => 'directory to store the code coverage report'
                                 ));

        $rserver_cmd = $parser->addCommand('server',
                                      array('description' => 'run or command the Photon servers'));
        $rserver_cmd->addOption('all',
                           array('long_name'   => '--all',
                                 'action'      => 'StoreTrue',
                                 'description' => 'run the subcommand for all the running Photon processes'
                                 ));

        $rserver_cmd->addOption('server_id',
                           array('long_name'   => '--server-id',
                                 'action'      => 'StoreString',
                                 'help_name'   => 'id',
                                 'description' => 'run the subcommand for the given server id. If you start a process, it will receive this server id. The default subcommand is "start".'
                                 ));

        $sscd = $rserver_cmd->addCommand('start',
                                         array('description' => 'start a Photon server'));
        $sscd->addOption('children',
                        array('long_name'   => '--children',
                              'action'      => 'StoreInt',
                              'description' => 'number of children to fork. By default 3'
                                 ));

        $rserver_cmd->addCommand('stop',
                                 array('description' => 'stop one or more Photon server'));

        $rserver_cmd->addCommand('new',
                                 array('description' => 'start a new Photon server child'));

        $rserver_cmd->addCommand('less',
                                 array('description' => 'stop the oldest Photon server child'));

        $lcd = $rserver_cmd->addCommand('list',
                                        array('description' => 'list the running Photon servers'));

        $lcd->addOption('json',
                        array('long_name'   => '--json',
                              'action'      => 'StoreTrue',
                              'description' => 'output the information as json'
                                 ));

        $rserver_cmd->addCommand('childstart',
                                 array('description' => 'internal use to fork worker children'));


        $rserver_cmd->addOption('timeout',
                        array('long_name'   => '--wait',
                              'action'      => 'StoreString',
                              'description' => 'waiting time in seconds for the answers. Needed if your servers are under heavy load'
                                 ));
 
        $tcd = $parser->addCommand('taskstart',
                                    array('description' => 'internal use to fork background task'));

        $tcd->addArgument('task',
                          array('description' => 'the name of the task'));


        $pcd = $parser->addCommand('package',
                                    array('description' => 'package a project as a standalone .phar file'));

        $pcd->addArgument('project',
                          array('description' => 'the name of the project'));
        $pcd->addOption('conf_file',
                       array('long_name'   => '--include-conf',
                             'action'      => 'StoreString',
                             'help_name'   => 'path/config.prod.php',
                             'description' => 'path to the configuration file used in production'));

        $sk = $parser->addCommand('secretkey',
                                  array('description' => 'prints out a unique random secret key for your configuration.'));
        $sk->addOption('length',
                       array('long_name'   => '--length',
                             'action'      => 'StoreInt',
                             'description' => 'length of the generate secret key (64)'));

        return $parser;
    }
}