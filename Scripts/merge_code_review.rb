#!/usr/bin/env ruby
# Attempts to automate code review process by doing the following:


# REQUIRES

require 'csv'
require 'find'
require 'erb'
require 'fileutils'
require 'fastercsv'
require 'time'

# CONSTANTS

DirectorySupport        = 'automate_code_review'
DirectoryTierz          = '/home/petflowdeveloper/www/tierzwei'
#DirectoryTierz          = '/home/christian/Develop/tierzwei'
DirectoryAdministration = "#{DirectoryTierz}/Administration.gloo/"
DirectoryClient         = "#{DirectoryTierz}/Client.gloo/"
DirectoryPHP            = "#{DirectoryTierz}/Common/PHP"

ModifyTime              = "20120109"

# CLASSES

def base_dir(file)
  return "#{DirectoryTierz}/Common" unless file =~ /request_processor/
  return "#{DirectoryTierz}/" + (file =~ /admin/ && "Administration.gloo" || "Client.gloo")
end

# TESTING

# PRODUCTION



# Get list of all dependencies

model_dependencies = [ ]
dirs               = [
  "#{DirectoryPHP}/Models",
  "#{DirectoryPHP}/Persistence"
]

dirs.each do | directory |
  Dir.glob("#{directory}/**/*.php").each do | file |
    model_dependencies << file
  end
end



# Now iterate across
counter  = 0
 
Dir["#{DirectorySupport}/*.csv"].each do | file |
  
  csv_file = file
  rows     = [ ]
    
  # compare csv to its review file, merge dependencies/notes
  csv              = CSV.readlines file
  csv_reviewed     = CSV.readlines "#{file}.review!"
  rows             = [ csv.shift  ]
  dependency_index = file =~ /request_processor/  && 7 || 6
  
  csv_reviewed.shift 
 
  
  csv.each_with_index do | row, index |
    
    row[dependency_index] ||=''
    
    unless (row_reviewed = csv_reviewed[index]).nil?  
      row[dependency_index] = 
        "HUMAN\n#{row[dependency_index]}\n\n" unless row[dependency_index].nil? 
        
      row[dependency_index] += 
        "AUTOMATED\n#{row_reviewed[dependency_index]}" unless row_reviewed[dependency_index].empty?
    end
    
    rows << row
  end
  
    # write to merged file
  CSV.open("#{File.dirname(file)}/#{File.basename(file, '.csv')}.merged.csv", "w")  do | csv |
    rows.each do | row |
      csv << row
    end
  end
  
  next  
  
  
  
  
  # iterate through individual support file rows

  
  csv = CSV.read(file)
  csv.shift
  csv.each do | row |

    classes       = [ ]
    row_size      = row.length-1 
    row[row_size] = ""
    

        
    # determine support type, based on file name, if request_processor
    # we will have to look for file 
    unless row.empty?
     
      
      next
      

      if csv_file =~ /request_processor/      
        # get path to file 
        directory = file =~ /Administration.gloo/ && DirectoryAdministration || DirectoryClient + 
                    "/PHP/RequestProcessing"
        file      = "#{directory}/#{row[3].strip}.php"
      
      # otherwise file can be determine simply from tierzwei root     
      else
        file = "#{DirectoryTierz}/#{row[2].strip}"
      end

      # get owner, because we will not be processing my review files
      owner      = csv_file =~ /request_processor/ && row[4]       || row[3] 
      class_name = csv_file =~ /request_processor/ && row[3].strip || row[1].strip
      

      
      unless owner == "Christian"            
        file_review      = "#{file}.review!"
        

  
        # check if file exists, and subsequently, check if .review! file exists
        if File.file?(file) && File.file?(file_review) && row     
          
          # check if file has been modified after ModifyDate, in which case, remove .review!
          if File.mtime(file) >= Time.parse(ModifyTime)
            File.delete file_review
            #exit
            #puts "#{counter += 1} removing #{file_review}"
          
          else
            #puts "keeping #{file_review}"  
            
          end
        end
        
        
        # now do the same with unit test files    
         
        unit_test = "#{base_dir(csv_file)}/Test/PHPUnit/Local/"   +
                    "#{File.dirname(file.sub(/^.+?PHP\//, ''))}/" +
                    "#{class_name}Test.php"
         
        unit_test_review = "#{base_dir(csv_file)}/Test/Common/" +
                           "#{File.dirname(file.sub(/^.+?PHP\//, ''))}/" +
                           "#{class_name}Test.php.review!"        
         
                         

        
        if File.file?(unit_test) && File.file?(unit_test_review)
          File.delete unit_test_review
          #puts "#{counter} removing #{unit_test_review}"
          
        elsif File.file? unit_test_review
          FileUtils.mkdir_p File.dirname(unit_test)
          FileUtils.mv unit_test_review, unit_test
          #puts "moving #{unit_test_review}"
        end
        
      end
    end 
  end  
end