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
require 'net/http'
require 'fileutils'

###  CONSTANTS 
Host          = '0.0.0.0'
Port          = 6767
PortRedirect  = 6767
PortAccept    = 80
PortHttp      = 80
ServiceApache = 'apache2'
ControlApache = 'apache2ctl'
BinaryApache  = '/usr/sbin/apache2'
IndexPid      = 1
IndexApache   = 10
Sleep         = 5
LogDirectory  = '/var/log/kick_apache'

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

class Firewall
     
  def self.deny(port)
    try_exec "Denying traffic to port #{port}" do
      system "ufw deny #{port}"
    end
  end
  
  def self.allow(port)
    try_exec "Denying traffic to port #{port}" do
      system "ufw allow #{port}"
    end  
  end
  
  def self.redirect_to(port)        
    # read in rules file, and write new new rules
    try_exec "Using iptables to redirect to #{port}" do
      system "iptables -t nat -A PREROUTING -i eth0 -p tcp --dport #{PortHttp} -j REDIRECT --to-port #{port}"
    end
    
  end
  
  def self.remove_redirect(port)
    try_exec "Removing redirect rule using iptables" do
      system "sudo iptables -t nat -D PREROUTING -i eth0 -p tcp --dport #{PortHttp} -j REDIRECT --to-port #{port}"
    end
  end
  
  class << self
    def save_rules()
      timestamp = Time.now.to_i
      
      puts "Saving ufw riles to #{LogDirectory}"
      
      # raise exception if  rules files do not exist
      raise 'Cannot find ufw rules @ /lib/ufw/user.rules' unless File.file? '/lib/ufw/user.rules'
      
      # save ufw rules from /etc/rules
      FileUtils.cp '/lib/ufw/user.rules', "#{LogDirectory}/ufw.user.rules.#{timestamp}"
      
      # save iptables rules       
      try_exec "Saving iptables firewall rules to #{LogDirectory}/iptables.rules.#{timestamp}" do
        system "iptables-save > #{LogDirectory}/iptables.rules.#{timestamp}"
      end
                 
    end
  end

end
 

###  FUNCTIONS


def dispatch_request_to_apache(request)
 

  apache   = Net::Telnet.new(
    "Port"       => PortHttp,
    "Telnetmode" => false
  )

  # for some bizarre reason, passing HTTP/1.1. in request header
  # is causing apache to freeze
  response = apache.cmd(request.gsub /HTTP\/1.1/i, '') 

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
    
    if (hash[:block])
      puts hash[:message]
      hash[:block].call  
    
    else 
      try_exec hash[:message] do
        system hash[:command] ||= false
      end
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
  EM.start_server Host, PortRedirect, RequestStore
  
  # handle apache graceful restart on separate thread
  EM.defer do    
    
    # create kick_apache log directory if it does not exist
    FileUtils.mkdir_p LogDirectory
    
    # save Firewall rules
    Firewall.save_rules
    
    # start apache if not currently running
    # @todo remove from production
    try_exec('Starting Apache') { system "#{ControlApache} start" } unless apache_running?
  
   
    # block http port, forward to new port and graceful stop apache
    run_commands [
      { message: "Opening redirect port #{PortRedirect}",           command: "ufw allow #{PortRedirect}" },
      { message: "Forwarding http traffic to port #{PortRedirect}", block:   lambda { Firewall.redirect_to PortRedirect }},
      { message: "Gracefully stopping apache",                      command: "#{ControlApache} graceful-stop" },
    ]
        
 
    # wait for apache processes to stop
    sleep 5 while apache_running?

          
    # start apache and reopen blocked http port and remove forward
    run_commands [
        { message: 'Starting apache',                                     command: "#{ControlApache} start"  },
        { message: "Removing forwarding rule on http port #{PortHttp}",   block:   lambda { Firewall.remove_redirect(PortRedirect) } },
        { message: "Denying traffic on redirect port #{PortRedirect}",    command: "ufw deny #{PortRedirect}" }
        
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
  
   
  puts "Started EchoServer on #{Host}:#{PortRedirect}"
end

