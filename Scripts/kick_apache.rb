#!/usr/bin/env ruby

# Unbinds apache from service port, waits for graceful restart and rebinds;
# during unbind period, requests to service port are forwarded to an open
# port, where http requests are queued and subsequently forwarded to 
# apache once rebound
# @author Christian Calloway callowaylc@gmail.com


###  REQUIRES
require 'eventmachine'
require 'sys-proctable'

exit
###  CONSTANTS 
Host          = '127.0.0.1'
Port          = 6767
PortAccept    = 80
ServiceApache = 'apache2'
ControlApache = 'apache2ctl'
BinaryApache  = '/usr/sbin/apache2'
IndexPid      = 1
IndexApache   = 10
Sleep         = 5

### CLASSES

class RequestStore < EM::Connection
    attr_accessor :requests
    
    def initialize()
      @requests = [ ];
    end
    
    def receive_data(request)
      # push request data to be forwarded 
      # after apache has successfuly kicked
      @requests.push request
    end
    
    def unbind
      # forward requests to now restarted apache instance
      
    end
end

###  FUNCTIONS

def try_exec (message)
  raise 'System command failed' unless yield
  puts message
end

def run_commands(commands)
  commands.each do |hash|    
    try_exec hash.message do
      system hash.command
    end
  end
end

def apache_stopped? 
  
end

###  TEST

###  PRODUCTION

# start eventmachine to capture forwarded requests

EM.run do
    
  # start request queue server
  EM.start_server Host, Port, RequestStore
  
  # handle apache graceful restart on separate thread
  EM.defer do
    
    # block http port, forward to new port and graceful stop apache
    run_commands [
      { message: "Blocking http port #{Port}",              command: "ufw deny #{PortAccept}" },
      { message: "Forwarding http traffic to port #{Port}", command: "true" },
      { message: "Gracefully stopping apache",              command: "#{CONTROL_APACHE} graceful-stop" },
    ]
    
 
    # wait for apache processes to stop
    until apache_stopped do
      sleep Sleep  
    end
          
        
    try_exec 'Starting apache' do 
      system '#{CONTROL_APACHE} graceful-stop'
    end
    
      
    
  end
  
  puts "Started EchoServer on #{Host}:#{Port}"
end


# block port from future requests


# send sigterm signal to apache parent process
try_exec 'Gracefully stopping apache' do 
  system '#{CONTROL_APACHE} graceful-stop'
end

# start apache process
try_exec 'Starting apache' do 
  system '#{CONTROL_APACHE} graceful-stop'
end

# unblock port
try_exec 'Blocking http port' do 
  system 'ufw allow #{PORT_ACCEPT}'
end






