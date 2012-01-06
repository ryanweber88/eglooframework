#!/usr/bin/env ruby
# Attempts to automate code review process by doing the following:
# * Identify within review classes, those classes that inappropriately touch
#   the databse - in those cases, add @todo label to identify dependency/needed update
# * Identify within review classes, those classes that have hardcoded sql,
#   in those cases, add @todo label to identify dependency/needed update
# * List dependencies for each class and respective method, based on above
# * Create PHPUnit stub classes for those classes that do not have them
# * Create docblox for classes/methods that do not have them
# * Identify multiple returns within the body of method and make note
#   within depependencies list
# * Identify the usage of improper fields/columns (eg. 'eid') within method bodies, 
#   and make note via @todo and dependencies
#   within class definition and add to dependencies list
# * Add/Append @author of reviewer to class definition doc
# * Identify request processors that are no longer used and make note within dependencies

# REQUIRE

# CLASSES 

# TESTING

# PRODUCTION