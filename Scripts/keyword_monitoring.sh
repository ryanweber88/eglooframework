#!/bin/bash

FILE=''
KEYWORD=''
OUTPUT_BASE_NAME=''

# output files
OUT="${OUTPUT_BASE_NAME}.log"
OUT_INFO="${OUTPUT_BASE_NAME}.info"
DIFF_FILE="${OUTPUT_BASE_NAME}.diff"
ODIR="/tmp/${OUTPUT_BASE_NAME}"

# check if the dir exists
if [ ! -d $ODIR ]; then
	mkdir $ODIR
fi

# go to the work dir
pushd $ODIR

# check if the info file exists
if [ ! -e $OUT_INFO ]; then
	echo 0 > $OUT_INFO
fi

# get the old number of lines with keyword
OLD=$(tail -n 1 $OUT_INFO)
# grep for the keyword we're looking for
grep -i $KEYWORD $FILE > $OUT
# find the new number of lines with keyword, save in info file
wc -l < $OUT > $OUT_INFO
# get the new number
NEW=$(tail -n 1 $OUT_INFO)

# if the old num occurances is diff
if [ $OLD -ne $NEW ]; then

	# calc the diff
	DIFF=`expr $NEW - $OLD`

	# if the diff is positive, do something
	if [ $DIFF -ge 0 ]; then

		# find the diff lines
		tail -n $DIFF $OUT > $DIFF_FILE

		# do something with those lines
		while read line
		do

			# do something here

		done <$DIFF_FILE

		rm $DIFF_FILE
	fi
fi

popd
