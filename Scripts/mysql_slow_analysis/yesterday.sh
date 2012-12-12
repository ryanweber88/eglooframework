#!/bin/bash

LOGSERV="maint"
SLOW_DIR="/home/ben/slow-quer"
SLOW_LOG_COMMON="slow.log"
DATE=$(date +%Y%m%d)
date
YEST=$(date -d '1 day ago' +'%Y%m%d')

pushd $SLOW_DIR

getStats() {
	SLOW_LOG_PREFIX="${1}-slow.log"
	# assume that the logs are rotated daily
	LOG=${SLOW_LOG_PREFIX}-${DATE}
	OUTPUT=${YEST}-$1.csv

	scp $LOGSERV:/var/log/$1/${LOG}.gz ${SLOW_LOG_COMMON}.gz
	gunzip ${SLOW_LOG_COMMON}.gz

	time ./slow_quer.py > ${OUTPUT}

        sed -i 's/petflow_report.*10.0.0.1./rep/g' $OUTPUT
        REP_NUM=$(grep rep $OUTPUT | wc -l)
        NUM_Q=$(wc -l $OUTPUT)

        echo
        echo "==== STATS ===="
        echo "TOTAL: $NUM_Q"
        echo "REPORT: $REP_NUM"
        echo
}

getStats serv1
getStats serv2

rm $SLOW_LOG_COMMON
popd
