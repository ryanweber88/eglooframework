#!/usr/bin/env ruby

# Unbinds apache from service port, waits for graceful restart and rebinds;
# during unbind period, requests to service port are forwarded to an open
# port, where http requests are queued and subsequently forwarded to 
# apache once rebound
# @author Christian Calloway callowaylc@gmail.com


###  REQUIRES
require 'eventmachine'
require 'sys/proctable'
require 'net/telnet'
require 'socket'

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
    class << self; 
      attr_accessor :callbacks 
    end
    
    @callbacks = [ ]
    
    def receive_data(request)

      # push request data to be forwarded 
      # after apache has successfuly kicked
      self.class.callbacks.push(lambda do
        response = dispatch_request_to_apache request
        
        send_data(response)
      end)
    end
    
 
    
end

###  FUNCTIONS

def dispatch_request_to_apache(request)
 
  apache   = Net::Telnet.new(
    "Port"       => 80,
  )
  response = apache.cmd(request) 

  # close connection return response
  apache.close
  response 
end


def try_exec (message)
  raise 'System command failed' unless yield
  puts message
end

def run_commands(commands)
  commands.each do |hash|   

    try_exec hash[:message] do
      system hash[:command] ||= false
    end
  end
end

def apache_running? 
  Sys::ProcTable.ps do |p|
    if p.comm =~ /apache2/
      return true
    end 
  end
  
  false
end

###  TEST


###  PRODUCTION

# start eventmachine to capture forwarded requests

EM.run do
    
  # start request queue server
  EM.start_server Host, Port, RequestStore
  
  # handle apache graceful restart on separate thread
  EM.defer do    
    
    # start apache if not currently running
    # @todo remove from production
    try_exec('Starting Apache') { system "#{ControlApache} start" } unless apache_running?
  
   
    # block http port, forward to new port and graceful stop apache
    run_commands [
      { message: "Blocking traffic on http port #{PortAccept}",   command: "ufw deny #{PortAccept}" },
      { message: "Forwarding http traffic to port #{Port}",       command: "true" },
      { message: "Gracefully stopping apache",                    command: "#{ControlApache} graceful-stop" },
    ]
    
 
    # wait for apache processes to stop
    sleep 5 while apache_running?

          
    # start apache and reopen blocked http port and remove forward
    run_commands [
        { message: 'Starting apache',                                     command: "#{ControlApache} start"  },
        { message: "Allowing traffic on http port #{PortAccept}",         command: "ufw allow #{PortAccept}" },
        { message: "Removing forwarding rule on http port #{PortAccept}", command: "true" }
    ] 
    
    puts "Forwarding #{RequestStore.callbacks.length} requests to apache"

    RequestStore.callbacks.each do |request|
      request.call
    end
           
    # kill event loop - for whatever reason this has to be placed into
    # separate thread to work?? 
    # @todo look up reason as to
    EM.add_timer(1) do
      EM.stop_event_loop  
    end

  end
  
   
  puts "Started EchoServer on #{Host}:#{Port}"
end


  




