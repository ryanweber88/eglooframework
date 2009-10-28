#! /bin/bash
#
# eGloo Framework Installation Script (OS X)
#
# Script should be chmod 700 and run as root from the working directory
# using the command ./Install.sh
#
#
# Copyright 2008 eGloo, LLC
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#        http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#  
# @author George Cooper
# @copyright 2008 eGloo, LLC
# @license http://www.apache.org/licenses/LICENSE-2.0
# @package Build
# @subpackage Installation
# @version 1.0

# Exit the script if any variables specified are unset when accessed
set -o nounset

# Exit the script if any statement returns a non-true value
# This prevents errors from cascading
set -o errexit

# Exit Error Codes
E_XCD=01       # Script can't change directories
E_NOTROOT=02   # Script not run as root

# Script Constants
ROOT_UID=0     # Only users with $UID 0 have root privileges.

# Default Configuration Parameters (OS X)
DEFAULT_APPLICATIONS="/Library/Application Support/eGloo/Applications"
DEFAULT_CACHE_DIR="/Library/Caches/eGloo"
DEFAULT_CONFIG="/Library/Application Support/eGloo/Framework/Configuration"
DEFAULT_CUBES="/Library/Application Support/eGloo/Cubes"
DEFAULT_DOCUMENTATION="/Library/Documentation/eGlooFramework"
DEFAULT_DOCUMENTROOT="/Library/WebServer/eGloo"
DEFAULT_FRAMEWORKROOT="/Library/Frameworks/eGloo.framework"
DEFAULT_LOGPATH="/Library/Logs/eGloo"
PARENT_DIRECTORY=$(_egloo_parent_dir=$(pwd) ; echo "${_egloo_parent_dir%/*}")

# Check for root
if [ "$UID" -ne "$ROOT_UID" ]
then
	echo "***********************************"
	echo "* Must be root to run this script *"
	echo "***********************************"
	echo
	#exit $E_NOTROOT
fi

# Give the user an explanation of the build process
echo "********************************"
echo "* eGloo Framework Installation *"
echo "********************************"
echo
echo "This installation script is interactive to give the user as much control as possible."
echo "In the future there should be an option for full automation."
echo

echo -n "Continue? [Y/n]: "
read -e CONFIRM_CONTINUE

# Make sure the user is prepared to answer some setup questions
case "$CONFIRM_CONTINUE" in
	"N" | "n" | "No" | "NO" | "no" )
		echo "Installation Aborted"
		exit
	;;

	* )
	;;
esac

echo -n "Use symlinks to distribution instead of files? (Useful for eGloo Development) [Y/n]: "
read -e USE_SYMLINKS

# Make sure the user is prepared to answer some setup questions
case "$USE_SYMLINKS" in
	"N" | "n" | "No" | "NO" | "no" )
		echo "Using files"
		USE_SYMLINKS=false
	;;

	* )
		echo "Using symlinks"
		USE_SYMLINKS=true
	;;
esac

echo
echo "*****************************"
echo "* eGloo Configuration Files *"
echo "*****************************"
echo
echo -n "Default Location: "
echo "\"$DEFAULT_CONFIG\""
echo

echo -n "Use this location? [Y/n]: "
read -e CONFIRM_CONTINUE

# Check if the user wants to use the default or specify their own configuration path
case "$CONFIRM_CONTINUE" in
	# User chose to specify own configuration path
	"N" | "n" | "No" | "NO" | "no" )
		NEW_PATH_SET=0
		
		# Loop until we have a new path and the user has confirmed the location
		while [ "$NEW_PATH_SET" -ne 1 ]
		do
			echo -n "Enter New Location: "
			read -e CONFIG_PATH
			echo
			echo "Location: \"$CONFIG_PATH\""
			echo
		
			echo -n "Use this location? [y/N]: "
			read -e CONFIRM_CONTINUE
		
			# Make sure user entered right path
			case "$CONFIRM_CONTINUE" in
				# New path is good, break the loop
				"Y" | "y" | "Yes" | "YES" | "yes" )
					NEW_PATH_SET=1
				;;
				# New path is no good, loop back
				* )
				;;
			esac
		done		
	;;

	# User chose the default path
	* ) CONFIG_PATH=$DEFAULT_CONFIG
	;;
esac

echo "Building configuration files..."
echo "\"$CONFIG_PATH\""

if [ $USE_SYMLINKS ]
then
	mkdir -p "$CONFIG_PATH"
	cp -R "../Configuration/Smarty" "$CONFIG_PATH"
else
	mkdir -p "$CONFIG_PATH"
	cp -R "../Configuration/Smarty" "$CONFIG_PATH"
fi

echo
echo "********************"
echo "* eGloo Cache Path *"
echo "********************"
echo
echo -n "Default Location: "
echo "\"$DEFAULT_CACHE_DIR\""
echo

echo -n "Use this location? [Y/n]: "
read -e CONFIRM_CONTINUE

# Check if the user wants to use the default or specify their own cache path
case "$CONFIRM_CONTINUE" in
	# User chose to specify own cache path
	"N" | "n" | "No" | "NO" | "no" )
		NEW_PATH_SET=0
		
		# Loop until we have a new path and the user has confirmed the location
		while [ "$NEW_PATH_SET" -ne 1 ]
		do
			echo -n "Enter New Location: "
			read -e CACHE_PATH
			echo
			echo "Location: \"$CACHE_PATH\""
			echo
		
			echo -n "Use this location? [y/N]: "
			read -e CONFIRM_CONTINUE
		
			# Make sure user entered right path
			case "$CONFIRM_CONTINUE" in
				# New path is good, break the loop
				"Y" | "y" | "Yes" | "YES" | "yes" )
					NEW_PATH_SET=1
				;;
				# New path is no good, loop back
				* )
				;;
			esac
		done		
	;;

	# User chose the default path
	* ) CACHE_PATH=$DEFAULT_CACHE_DIR
	;;
esac

echo "Building cache path..."
echo "\"$CACHE_PATH\""

mkdir -p "$CACHE_PATH"

echo
echo "****************************"
echo "* eGloo Documentation Path *"
echo "****************************"
echo
echo -n "Default Location: "
echo "\"$DEFAULT_DOCUMENTATION\""
echo

echo -n "Use this location? [Y/n]: "
read -e CONFIRM_CONTINUE

# Check if the user wants to use the default or specify their own documentation path
case "$CONFIRM_CONTINUE" in
	# User chose to specify own documentation path
	"N" | "n" | "No" | "NO" | "no" )
		NEW_PATH_SET=0
		
		# Loop until we have a new path and the user has confirmed the location
		while [ "$NEW_PATH_SET" -ne 1 ]
		do
			echo -n "Enter New Location: "
			read -e DOCUMENTATION_PATH
			echo
			echo "Location: \"$DOCUMENTATION_PATH\""
			echo
		
			echo -n "Use this location? [y/N]: "
			read -e CONFIRM_CONTINUE
		
			# Make sure user entered right path
			case "$CONFIRM_CONTINUE" in
				# New path is good, break the loop
				"Y" | "y" | "Yes" | "YES" | "yes" )
					NEW_PATH_SET=1
				;;
				# New path is no good, loop back
				* )
				;;
			esac
		done		
	;;

	# User chose the default path
	* ) DOCUMENTATION_PATH=$DEFAULT_DOCUMENTATION
	;;
esac

echo "Building documentation path..."
echo "\"$DOCUMENTATION_PATH\""

mkdir -p "$DOCUMENTATION_PATH"

echo
echo "**********************"
echo "* eGloo Logging Path *"
echo "**********************"
echo
echo -n "Default Location: "
echo "\"$DEFAULT_LOGPATH\""
echo

echo -n "Use this location? [Y/n]: "
read -e CONFIRM_CONTINUE

# Check if the user wants to use the default or specify their own log path
case "$CONFIRM_CONTINUE" in
	# User chose to specify own log path
	"N" | "n" | "No" | "NO" | "no" )
		NEW_PATH_SET=0
		
		# Loop until we have a new path and the user has confirmed the location
		while [ "$NEW_PATH_SET" -ne 1 ]
		do
			echo -n "Enter New Location: "
			read -e LOGPATH
			echo
			echo "Location: \"$LOGPATH\""
			echo
		
			echo -n "Use this location? [y/N]: "
			read -e CONFIRM_CONTINUE
		
			# Make sure user entered right path
			case "$CONFIRM_CONTINUE" in
				# New path is good, break the loop
				"Y" | "y" | "Yes" | "YES" | "yes" )
					NEW_PATH_SET=1
				;;
				# New path is no good, loop back
				* )
				;;
			esac
		done		
	;;

	# User chose the default path
	* ) LOGPATH=$DEFAULT_LOGPATH
	;;
esac

echo "Building log path..."
echo "\"$LOGPATH\""

mkdir -p "$LOGPATH"
chmod 777 "$LOGPATH"

echo
echo "*****************************"
echo "* eGloo Framework Root Path *"
echo "*****************************"
echo
echo -n "Default Location: "
echo "\"$DEFAULT_FRAMEWORKROOT\""
echo

echo -n "Use this location? [Y/n]: "
read -e CONFIRM_CONTINUE

# Check if the user wants to use the default or specify their own documentation path
case "$CONFIRM_CONTINUE" in
	# User chose to specify own documentation path
	"N" | "n" | "No" | "NO" | "no" )
		NEW_PATH_SET=0
		
		# Loop until we have a new path and the user has confirmed the location
		while [ "$NEW_PATH_SET" -ne 1 ]
		do
			echo -n "Enter New Location: "
			read -e FRAMEWORK_PATH
			echo
			echo "Location: \"$FRAMEWORK_PATH\""
			echo
		
			echo -n "Use this location? [y/N]: "
			read -e CONFIRM_CONTINUE
		
			# Make sure user entered right path
			case "$CONFIRM_CONTINUE" in
				# New path is good, break the loop
				"Y" | "y" | "Yes" | "YES" | "yes" )
					NEW_PATH_SET=1
				;;
				# New path is no good, loop back
				* )
				;;
			esac
		done		
	;;

	# User chose the default path
	* ) FRAMEWORK_PATH=$DEFAULT_FRAMEWORKROOT
	;;
esac

echo "Building framework path..."
echo "\"$FRAMEWORK_PATH\""

if [ $USE_SYMLINKS ]
then
	if [ ! -e "$FRAMEWORK_PATH/PHP" ] && [  ! -L "$FRAMEWORK_PATH/PHP" ]
	then
		mkdir -p "$FRAMEWORK_PATH"
		ln -s "$PARENT_DIRECTORY/PHP" "$FRAMEWORK_PATH/PHP"
	else
		echo "Symlink exists"
	fi
else
	mkdir -p "$FRAMEWORK_PATH"
	cp -R ../PHP "$FRAMEWORK_PATH/PHP"
fi

echo
echo "****************************"
echo "* Web Server Document Root *"
echo "****************************"
echo
echo -n "Default Location: "
echo "\"$DEFAULT_DOCUMENTROOT\""
echo

echo -n "Use this location? [Y/n]: "
read -e CONFIRM_CONTINUE

# Check if the user wants to use the default or specify their own documentation path
case "$CONFIRM_CONTINUE" in
	# User chose to specify own documentation path
	"N" | "n" | "No" | "NO" | "no" )
		NEW_PATH_SET=0
		
		# Loop until we have a new path and the user has confirmed the location
		while [ "$NEW_PATH_SET" -ne 1 ]
		do
			echo -n "Enter New Location: "
			read -e DOCUMENT_PATH
			echo
			echo "Location: \"$DOCUMENT_PATH\""
			echo
		
			echo -n "Use this location? [y/N]: "
			read -e CONFIRM_CONTINUE
		
			# Make sure user entered right path
			case "$CONFIRM_CONTINUE" in
				# New path is good, break the loop
				"Y" | "y" | "Yes" | "YES" | "yes" )
					NEW_PATH_SET=1
				;;
				# New path is no good, loop back
				* )
				;;
			esac
		done		
	;;

	# User chose the default path
	* ) DOCUMENT_PATH=$DEFAULT_DOCUMENTROOT
	;;
esac

echo "Building web server document root path..."
echo "\"$DOCUMENT_PATH\""

if [ $USE_SYMLINKS ]
then
	# if [ ! -e "$DOCUMENT_PATH/DocRoot/.htaccess" ] && [  ! -L "$DOCUMENT_PATH/DocRoot/.htaccess" ]
	# then
	# 	mkdir -p "$DOCUMENT_PATH/DocRoot"
	# 	ln -s "$PARENT_DIRECTORY/.htaccess" "$DOCUMENT_PATH/DocRoot/.htaccess"
	# else
	# 	echo ".htaccess Symlink exists"
	# fi
	# 
	# if [ ! -e "$DOCUMENT_PATH/DocRoot/index.php" ] && [  ! -L "$DOCUMENT_PATH/DocRoot/index.php" ]
	# then
	# 	mkdir -p "$DOCUMENT_PATH/DocRoot"
	# 	ln -s "$PARENT_DIRECTORY/index.php" "$DOCUMENT_PATH/DocRoot/index.php"
	# else
	# 	echo "index.php Symlink exists"
	# fi

	if [ ! -e "$DOCUMENT_PATH/DocRoot" ] && [  ! -L "$DOCUMENT_PATH/DocRoot" ]
	then
		mkdir -p "$DOCUMENT_PATH"
		ln -s "$PARENT_DIRECTORY/DocRoot" "$DOCUMENT_PATH/DocRoot"
	else
		echo "DocRoot Symlink exists"
	fi

	if [ ! -e "$DOCUMENT_PATH/PHP" ] && [  ! -L "$DOCUMENT_PATH/PHP" ]
	then
		mkdir -p "$DOCUMENT_PATH"
		ln -s "$PARENT_DIRECTORY/PHP" "$DOCUMENT_PATH/PHP"
	else
		echo "PHP Symlink exists"
	fi

	if [ ! -e "$DOCUMENT_PATH/Templates" ] && [  ! -L "$DOCUMENT_PATH/Templates" ]
	then
		mkdir -p "$DOCUMENT_PATH"
		ln -s "$PARENT_DIRECTORY/Templates" "$DOCUMENT_PATH/Templates"
	else
		echo "Templates Symlink exists"
	fi

	if [ ! -e "$DOCUMENT_PATH/XML" ] && [  ! -L "$DOCUMENT_PATH/XML" ]
	then
		mkdir -p "$DOCUMENT_PATH"
		ln -s "$PARENT_DIRECTORY/XML" "$DOCUMENT_PATH/XML"
	else
		echo "XML Symlink exists"
	fi

else
	mkdir -p "$DOCUMENT_PATH"
	cp ../DocRoot/.htaccess "$DOCUMENT_PATH/DocRoot/.htaccess"
	cp ../DocRoot/index.php "$DOCUMENT_PATH/DocRoot/.index.php"

	if [ ! -e "$DOCUMENT_PATH/PHP" ] && [  ! -L "$DOCUMENT_PATH/PHP" ]
	then
		mkdir -p "$DOCUMENT_PATH"
		ln -s "$FRAMEWORK_PATH/PHP" "$DOCUMENT_PATH/PHP"
	else
		echo "PHP Symlink exists"
	fi

fi

exit

echo
echo "*******************************"
echo "* eGloo Web Applications Root *"
echo "*******************************"
echo
echo -n "Default Location: "
echo "\"$DEFAULT_APPLICATIONS\""
echo

echo -n "Use this location? [Y/n]: "
read -e CONFIRM_CONTINUE

# Check if the user wants to use the default or specify their own documentation path
case "$CONFIRM_CONTINUE" in
	# User chose to specify own documentation path
	"N" | "n" | "No" | "NO" | "no" )
		NEW_PATH_SET=0
		
		# Loop until we have a new path and the user has confirmed the location
		while [ "$NEW_PATH_SET" -ne 1 ]
		do
			echo -n "Enter New Location: "
			read -e APPLICATIONS_PATH
			echo
			echo "Location: \"$APPLICATIONS_PATH\""
			echo
		
			echo -n "Use this location? [y/N]: "
			read -e CONFIRM_CONTINUE
		
			# Make sure user entered right path
			case "$CONFIRM_CONTINUE" in
				# New path is good, break the loop
				"Y" | "y" | "Yes" | "YES" | "yes" )
					NEW_PATH_SET=1
				;;
				# New path is no good, loop back
				* )
				;;
			esac
		done		
	;;

	# User chose the default path
	* ) APPLICATIONS_PATH=$DEFAULT_APPLICATIONS
	;;
esac

echo "Building web applications path..."
echo "\"$APPLICATIONS_PATH\""

if [$USE_SYMLINKS]
then
	mkdir -p "$APPLICATIONS_PATH"
	ln -s ../Applications/eGloo "$APPLICATIONS_PATH/eGloo"
else
	mkdir -p "$APPLICATIONS_PATH"
	cp -R ../Applications/* "$APPLICATIONS_PATH"
fi

echo
echo "********************"
echo "* eGloo Cubes Root *"
echo "********************"
echo
echo -n "Default Location: "
echo "\"$DEFAULT_CUBES\""
echo

echo -n "Use this location? [Y/n]: "
read -e CONFIRM_CONTINUE

# Check if the user wants to use the default or specify their own documentation path
case "$CONFIRM_CONTINUE" in
	# User chose to specify own documentation path
	"N" | "n" | "No" | "NO" | "no" )
		NEW_PATH_SET=0
		
		# Loop until we have a new path and the user has confirmed the location
		while [ "$NEW_PATH_SET" -ne 1 ]
		do
			echo -n "Enter New Location: "
			read -e CUBES_PATH
			echo
			echo "Location: \"$CUBES_PATH\""
			echo
		
			echo -n "Use this location? [y/N]: "
			read -e CONFIRM_CONTINUE
		
			# Make sure user entered right path
			case "$CONFIRM_CONTINUE" in
				# New path is good, break the loop
				"Y" | "y" | "Yes" | "YES" | "yes" )
					NEW_PATH_SET=1
				;;
				# New path is no good, loop back
				* )
				;;
			esac
		done		
	;;

	# User chose the default path
	* ) CUBES_PATH=$DEFAULT_CUBES
	;;
esac

echo "Building cubes path..."
echo "\"$CUBES_PATH\""

if [$USE_SYMLINKS]
then
	mkdir -p "$CUBES_PATH"
	ln -s ../Cubes/B "$CUBES_PATH/B"
	ln -s ../Cubes/F "$CUBES_PATH/F"
	ln -s ../Cubes/P "$CUBES_PATH/P"
else
	mkdir -p "$CUBES_PATH"
	cp -R ../Cubes/* "$CUBES_PATH"
fi

# echo
# echo "********************"
# echo "* eGloo Cubes Root *"
# echo "********************"
# echo
# echo -n "Default Location: "
# echo "\"$DEFAULT_CUBES\""
# echo
# 
# echo -n "Use this location? [Y/n]: "
# read -e CONFIRM_CONTINUE
# 
# # Check if the user wants to use the default or specify their own documentation path
# case "$CONFIRM_CONTINUE" in
# 	# User chose to specify own documentation path
# 	"N" | "n" | "No" | "NO" | "no" )
# 		NEW_PATH_SET=0
# 		
# 		# Loop until we have a new path and the user has confirmed the location
# 		while [ "$NEW_PATH_SET" -ne 1 ]
# 		do
# 			echo -n "Enter New Location: "
# 			read -e CUBES_PATH
# 			echo
# 			echo "Location: \"$CUBES_PATH\""
# 			echo
# 		
# 			echo -n "Use this location? [y/N]: "
# 			read -e CONFIRM_CONTINUE
# 		
# 			# Make sure user entered right path
# 			case "$CONFIRM_CONTINUE" in
# 				# New path is good, break the loop
# 				"Y" | "y" | "Yes" | "YES" | "yes" )
# 					NEW_PATH_SET=1
# 				;;
# 				# New path is no good, loop back
# 				* )
# 				;;
# 			esac
# 		done		
# 	;;
# 
# 	# User chose the default path
# 	* ) CUBES_PATH=$DEFAULT_CUBES
# 	;;
# esac
# 
# echo "Building framework path..."
# echo "\"$CUBES_PATH\""
# 
# mkdir -p "$CUBES_PATH"


# Clean exit
exit


