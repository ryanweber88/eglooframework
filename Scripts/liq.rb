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
  
  def ucfirst
    self.sub(/^(\w)/) {|s| s.capitalize }
  end
end

class Symbol
  def to_method_name
    self.to_s.downcase
  end
end

class Class
  # get the class name without module names attached
  def class_name
    self.name.split('::').last
  end
end

class Array
  def contains?(*a)
    return (self & a).length == a.length
  end
end




#[:singularize, :pluralize].each do | method |
#  String.classEval do
#    define_method method do
#      ActiveSupport::Inflector.send(method, self)
#    end
#  end
#end


# convenience method for retrieving liquid planner 
# constant from within module
def liq_constant(name)
  "LiquidPlanner::Resources::#{name}".to_class
end

module LiquidPlanner
  module Resources
    class Workspace
      # this is a bit of a hack at the moment; we need workspace
      # instance to respond_to activites in order to list them
      # @TODO find another method to do this; we shouldn't be
      # patching with placeholder methods
      def activities(a,b); end
    end
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


# here we are going to patch Project, Package, Task classes
(resources = [:Project, :Package, :Task]).each_with_index do | resource, index |
  
  # retrieve reference to class instance identified by resource
  const = liq_constant(resource)
  
  # now lets dynamically add methods to instance and class instance; 
  # we'll be adding children and parent methods based upon
  # resources placement (ie project will have packages and tasks)
  # methods and task will have project and parent method; as well
  # as utility methods list and get
  
  const.class_eval do
    

    # for some reason, instance_eval does not allow define_method
    # to add method to class scope (or have class as as receiver);
    # so instead we have to call method through singleton class self
    s = class << self; self; end   
    
    s.send :define_method, :list do
      filter = 'owner_id = me'
      workspace.send(resource.to_method_name.pluralize, :all, :filter => filter)
    end
        
    s.send :define_method, :get do | index |
      self.list[index]
    end
       
    resources.reverse.each do | compare |
      
      method = resource.eql? compare && compare
      
      # check to ensure that resource is not equal to compare, 
      # we don't want to do Project#projects for example
      unless resource.eql? compare
        
        # define our method name and add to to to current
        # resource class
        method = compare.to_method_name
        method = method.pluralize if resources.index(compare) > index

        define_method method do
          #set filter and send request to workspace instance 
          filter = "#{resource.to_s.downcase}_id=#{self.id}"   
          workspace.send method, :all, :filter => filter 
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
  activities
  start
  task
  activity
  work
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


# if our options contain
if options.keys.contains? :start, :task, :activity
  
  liq_constant(:Task).list.each do | task |
    if task.id == options[:task].to_i
      puts "found it"
    end
  end

else 
  
  # iterate through our options; the options can be a "list" or 
  # "action" oriented events; list events give us information 
  # in regards to packages, projects and tasks; action events
  # allow for the update tasks
  
  list, resource, const = nil
  
  options.each do | key, value |
      
    # check if workspace respond to key value, in which case
    # we have a list oriented event; we filter out our list
    # or item through each progressive 
    if workspace.respond_to? key
  
      # retrieve our workspace/rest resource
      const = liq_constant(key.to_s.singularize.ucfirst)
              
      # if a numeric value has been specified then 
      unless value.nil?
        resource = const.get value.to_i
        
      # otherwise retrieve a list of resource (a list of tasks for example)
      else
        list = resource.nil? && const.list || resource.send(key)
      end
    end
    
  end
  
  # if list is nil, then we set list to a list
  # attributes that comprise the resource; we
  # are essentially viewing the makeup of a 
  # single resource as opposed to listing of 
  # resources that would would fall under parent:
  # ie, a series of tasks that belong to a package
  if list.nil?
    list = resource.known_attributes
    puts "ATTRIBUTES FOR #{resource.type} ##{resource.id} : \"#{resource.name}\""
   
  # otherwise we have returned a list of items; check if
  # list is not empty or display message to that effect  
  else
    puts "LIST OF #{const.class_name.pluralize} FOR #{resource.type} : \"#{resource.name}\""
  
      
  end
  
  # now iterate through list
  list.each_with_index do | item, index |
    print "##{index } ==> " 
      
    if item.kind_of? LiquidPlanner::LiquidPlannerResource
      if item.respond_to? :is_done
        print "* " if     item.is_done
        print "  " unless item.is_done 
      end
      
      puts  "##{item.id} #{item.name}"   
      
    else
      puts "#{item}=#{resource.send(item)}" unless resource.send(item).nil?
    end
      
  end 
end