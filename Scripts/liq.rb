#!/usr/bin/env ruby
# CLTool to provide access to liquid planner account

# gems/requires
require 'nokogiri'
require 'optparse'
require 'pathname'
require 'liquidplanner'

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


filter = [
  'owner_id = me'
]

options.each do | key, value |
  # check if workspace respond to key value, in which case
  # we have a list oriented event
  if workspace.respond_to? key
    list = workspace.send key, :all, :filter => 'owner_id = me'
       
    # if value is not null, we filter by grabbing the current
    # representation
    unless value.nil?
      p list[value.to_i]
      exit
      id = list[value.to_i].id
      puts key
      exit  
    
    # otherwise lets list current 
    else
      puts key
      
      list.each_with_index do | item, index |
        puts "##{index } ==> #{item.name}"  
      end            
    end
   
  # otherwise we have an "action oriented" event
  else
    
  end
end
