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

# patches

class String
  # add a singularize method to our string class (this is for convenience
  # sake alone)
  def singularize
    ActiveSupport::Inflector.singularize(self)
  end
  
  def pluralize
    ActiveSupport::Inflector.pluralize(self)
  end
  
end

%w(:Project :Package :Task).each_with_index do | resource, index |
  Object.const_get(resource).classEval do 
    
  end

end

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


container, list = nil
filter    = 'owner_id = me'


# iterate through our options; the options can be a "list" or 
# "action" oriented events; list events give us information 
# in regards to packages, projects and tasks; action events
# allow for the update tasks

options.each do | key, value |
    
  # check if workspace respond to key value, in which case
  # we have a list oriented event; we filter out our list
  # or item through each progressive 
  if workspace.respond_to? key
    
    # @TODO how the fuck do you pass multiple filters
    list = workspace.send key, :all, :filter => filter
    
    # if value is not null, we filter by grabbing the current
    # representation
    unless value.nil?
      container = list[value.to_i]
      filter    = key.to_s.singularize + '_id=' + container.id.to_s
    end
   
   
 
  # otherwise we have an "action oriented" event
  else
    
  end
end




# otherwise lets output current list of items/resources
# @TODO pretty print output
if list.length > 1
  list.each_with_index do | item, index |
    print "##{index } ==> " 
    
    print "* " if     item.is_done
    print "  " unless item.is_done 
    
    puts  " #{item.name}"   
      
  end 

# if list length is one, then we want to print out the attributes for
# for a given resource
elsif list.length == 1

  # if our filter is valid, we "re-list" from workspace
  unless container.nil?
    method = container.type.downcase.pluralize
    filter = "id=#{container.id}"
    list = workspace.send method, :all, :filter => filter
  end  
  
  resource = list.pop
  puts "#{resource.type} : #{resource.name}"
  
  resource.known_attributes.each do | attribute |
    puts "#{attribute} ==> #{resource.send attribute}"  
  end    
end

if list.length == 1

end
