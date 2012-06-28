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
Resources = 
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
  
  def to_class
    self.split('::').inject(Object) do |mod, class_name|
      mod.const_get(class_name)
    end
  end  
  
end

#[:singularize, :pluralize].each do | method |
#  String.classEval do
#    define_method method do
#      ActiveSupport::Inflector.send(method, self)
#    end
#  end
#end




# first lets instantiate our client and grab
# our account and workspace resources
lp = LiquidPlanner::Base.new(
  :email    => Email, 
  :password => Password
)
account     = lp.account
workspace   = lp.workspaces(WorkSpace) 

# here we are going to patch Project, Package, Task classes
(resources = [:Project, :Package, :Task]).each_with_index do | resource, index |
  
  # retrieve reference to class instance identified by resource
  const = "LiquidPlanner::Resources::#{resource}".to_class
  
  # now lets dynamically add methods to that class instance; 
  # we'll be adding children and parent methods based upon
  # resources placement (ie project will have packages and tasks)
  # methods and task will have project and parent method
  const.class_eval do 
    resources.reverse.each do | compare |
      
      # check to ensure that resource is not equal to compare, 
      # we don't want to do Project#projects for example
      unless resource.eql? compare
        
        # get index of compare in resources array to determine whether
        # compare is upstream or downstream of current
        resources.index compare
       
        # define our method name and add to to to current
        # resource class
        method = compare.to_s.downcase
        method = method.pluralize if resources.index(compare) > index
        
        define_method method do
          #set filter and send request to workspace instance 
          filter = "#{resource.to_s.downcase}_id=#{self.id}"   
          workspace.send method.to_s.pluralize, filter 
        end 

      end
    end
  end

end


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
