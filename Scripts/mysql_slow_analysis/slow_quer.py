#!/usr/bin/python3

ln = "slow.log"
log = open(ln, "r")

qstats = dict()

ready_to_print = 0
split_str = ':'
time_key = 'Time'
user_key = 'User@Host'
query_time_key = 'Query_time'
lock_time_key = 'Lock_time'
rows_sent_key = 'Rows_sent'
rows_examined_key = 'Rows_examined'
query_string_key = 'Raw_query'

expected_keys = set( {time_key, user_key, query_time_key, lock_time_key, rows_sent_key, rows_examined_key, query_string_key} )


def splitAndAddToDict( aString, aDict, aSplitter=':' ):
	kv = aString.split(aSplitter)
	aDict[kv[0]] = kv[1]

def printStats():
	diffInSets = expected_keys - qstats.keys()

	if len(diffInSets) != 0:
		aLine = 'ERROR'
	else:
		aLine = qstats[time_key] + ','
		aLine += qstats[query_time_key] + ','
		aLine += qstats[lock_time_key] + ','
#		aLine += qstats[rows_sent_key] + ','
#		aLine += qstats[rows_examined_key] + ','

		aLine += qstats[user_key]
#		aLine += qstats[query_string_key]

	print(aLine)

print('date,query_time,lock_time')

for line in log:
	line = line.replace(': ', ':')
	line = line.replace('\n', '')
	line = line.strip()
	if line.startswith('# Time:'):
		if ready_to_print:
			printStats()
			ready_to_print = 0
		line = line.replace('# Time:', '')
		year = line[0] + line[1]
		month = line[2] + line[3]
		day = line[4] + line[5]
		oldDate = year + month + day
		newDate = '20' + year + '-' + month + '-' + day
		line = line.replace(oldDate, newDate)
		qstats[time_key] = line
	elif line.startswith('# User'):
		if ready_to_print:
			printStats()
			ready_to_print = 0
		qstats[query_string_key] = ''
		line = line.replace('# ','')
		splitAndAddToDict( line, qstats )
	elif line.startswith('# Query_time:'):
		stats_str = line.replace('# ', '')
		stats = stats_str.split(' ')

		query_time_str = stats[0]
		splitAndAddToDict( query_time_str, qstats )

		lock_time_str = stats[2]
		splitAndAddToDict( lock_time_str, qstats )

		rows_sent_str = stats[3]
		splitAndAddToDict( rows_sent_str, qstats )

		rows_examined_str = stats[5]
		rows_examined_str = rows_examined_str.replace('\n', '')
		splitAndAddToDict( rows_examined_str, qstats )
		
		ready_to_print = 1
	else:
		if query_string_key in qstats:
			qstats[query_string_key] = qstats[query_string_key] + ' ' + line
		else:
			qstats[query_string_key] = line


printStats()
