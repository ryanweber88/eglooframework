#!/usr/bin/env ruby
# CLTool to provide access to liquid planner account

# gems/requires
require 'nokogiri'
require 'optparse'
require 'pathname'
require 'liquidplanner'
require 'active_support'
 

# constants
Email     = 'christian@petflow.com'
Password  = 'fe5180zz'
WorkSpace = 68456 

# first lets instantiate our client and grab
# our account and workspace resources
lp = LiquidPlanner::Base.new(
  :email    => Email, 
  :password => Password
)
account     = lp.account
workspace   = lp.workspaces(WorkSpace) 

# now lets grab our options
options = %w(
  current
  projects
  packages
  tasks
  start
  stop
)


OptionParser.new do |opts|
  chosen      = { }
  opts.banner = 'Usage: example.rb [options]'
  
  options.each do | word |
    opts.on "-#{word[0]} [VALUE]", "--#{word}" do | value |
      chosen[:"#{word}"] = value || nil
    end    
  end
  
  options = chosen
end.parse!


container = nil 
filter    = 'owner_id = me'
list      = nil

options.each do | key, value |
  # check if workspace respond to key value, in which case
  # we have a list oriented event
  if workspace.respond_to? key
    
    # @TODO how the fuck do you pass multiple filters
    list = workspace.send key, :all, :filter => filter
       
    # if value is not null, we filter by grabbing the current
    # representation
    unless value.nil?
      container = list[value.to_i]
      filter    = ActiveSupport::Inflector.singularize(key) +
                  '_id=' + 
                  container.id.to_s
      next                   
    end
    
    # otherwise lets list current 
    if list.length > 1
      list.each_with_index do | item, index |
        print "##{index } ==> " 
        
        print "* " if item.is_done
        print "  " unless item.is_done 
        
        puts  " #{item.name}"   
          
      end   
    end
   
  # otherwise we have an "action oriented" event
  else
    
  end
end

if list.length == 1
  resource = list.pop
  puts "#{resource.type} : #{resource.name}"
  
  resource.known_attributes.each do | attribute |
    puts "#{attribute} ==> #{resource.send attribute}"  
  end
end
