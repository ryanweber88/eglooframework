#!/usr/bin/env ruby
# Runs locate command and returns numbered list from which to launch gedit on
# located files
# Feature Wish List:
# Need to cache results for N seconds since remote connection can take some time
# or keep connection alive in background

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
  remote:   false,
  user:     User,
  password: Password,
  editor:   Editor,
  mount:    Mount
}

OptionParser.new do |opts|
  opts.banner = 'Usage: example.rb [options]'
    
  %w(remote user password mount).each do | word |
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

# make sure something.. anything has been passed as our main
# argument to locate
raise 'You forgot to pass a value cunt' if ARGV.empty?

# we are simply passing parameter values to locate command
parameters = ARGV.join(Space)

# if doing a remote check, we will to ssh into our remote
# and perform a locate there

if options[:remote]
  
  # raise an exception if 
  begin
    Net::SSH.start(options[:remote], options[:user], :password => options[:password]) do | ssh |
      @results = (ssh.exec! "locate #{parameters}").split Newline
    end
  
  rescue => error
    raise "Problem with connection to #{options[:remote]} with error : #{error}"  
      
  end
  
# otherwise we simply call a  
else
  @results = `locate #{parameters}`.split Newline   
end


unless @results.empty?

  if @results.length == 1
    result = @results.pop
    result = "#{options[:mount]}/#{result}" unless options[:remote] == false
    
    `#{options[:editor]} #{result} &`
    
  else

    # iterate through result set and display as choosable options
    # user
    @results.each_with_index do | result, index |
      puts "#{index} ==> #{result}"
    end
  
    print "\nchoose from above index: "
  
    # recieve user input from command line and launch gedit
    # with filepath
    if (answer = $stdin.gets.chomp).length > 0
      answer = answer.to_i
      @results[answer] = options[:mount] + "/#{@results[answer]}" unless options[:remote] == false
      
      `#{options[:editor]} #{@results[answer]} &` if @results.in_bounds?(answer)
    end 
  end
end