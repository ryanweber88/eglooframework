#!/usr/bin/env ruby
# This is just a port of rlocate - runs remote commands on server

# REQUIRE

require 'optparse'
require 'net/ssh'

# CONSTANTS

Space    = ' '
Newline  = "\n"
Remote   = '192.168.10.7' 
#Remote  = '192.168.93.131'
#User    = 'christian'
User     = 'petflowdeveloper'
Password = 'fe5180zz'
Editor   = 'zend' 
Mount    = '/Volumes/' + Remote



# CLASSES

# add instance method to fixnum to determine
# if value is positive
class Fixnum
  def positive?
    self >= 0
  end
end

# add instance method to array to determine
# if index is in correct range
class Array
  def in_bounds?(index)
    index.positive? && index <= (self.size - 1)
  end
end

class String
  def ucfirst
    self.sub (/^(\w)/) { | s | s.capitalize }
  end
end


# FUNCTIONS


# TESTING

# PRODUCTION



# check if --remote option has been specified, also
# provide default values should i not want to go
# through that shit

options = {
  remote:   true,
  user:     User,
  password: Password,
  editor:   Editor,
  mount:    Mount
}

OptionParser.new do |opts|
  opts.banner = 'Usage: example.rb [options]'
    
  %w(remote user password mount sudo).each do | word |
    opts.on "-#{word[0]} [VALUE]", "--#{word}"   do | value |
      options[:"#{word}"] = value || true
    end    
  end  
end.parse!


# set options remote to default if remote has been specified,
# but without a value - this is redundant and needs to be 
# replaced
options.each_with_index do | (key, value), index |
  if options[key] == true
    unless (const = Object.const_get(key.to_s.ucfirst)).nil?
      options[key] = const unless Object.const_get(key.to_s.ucfirst).nil?
    end
  end
end

# check for sudo flag, in which case, we want to set user to root
options[:user] = 'root' if options[:sudo]

# make sure something.. anything has been passed as our main
# argument to locate
raise 'You forgot to pass a value cunt' if ARGV.empty?

# we are simply passing parameter values to locate command
parameters = ARGV.join(Space)

# if doing a remote check, we will to ssh into our remote
# and perform a locate there

# raise an exception if 
begin
  Net::SSH.start(options[:remote], options[:user], :password => options[:password]) do | ssh |
    @results = (ssh.exec! "#{parameters}").split Newline
  end

rescue => error
  raise "Problem with connection to #{options[:remote]} with error : #{error}"  
    
end

puts @results