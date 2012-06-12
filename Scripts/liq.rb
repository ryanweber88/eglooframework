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

# first lets instantiate our client
lp = LiquidPlanner::Base.new(
  :email    => Email, 
  :password => Password
)


account     = lp.account
puts account; exit
workspaces  = lp.workspaces

workspace = lp.workspaces(7)                                # access a workspace by ID
tasks     = workspace.tasks                                 # list all the tasks
my_tasks  = workspace.tasks(:all, :filter=>'owner_id = me') # use a filter

puts account