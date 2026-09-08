#!/bin/sh -f
cd "/home/jy5187/Documents/adv_proj/hwpq"
PIDS=""
cd "/home/jy5187/Documents/adv_proj/hwpq/csrc/"
make  -f Makefile.hsopt -j 16 rmapats.so &
PIDS+=" $!"
cd "/home/jy5187/Documents/adv_proj/hwpq"

STATUS=""
for pid in ${PIDS[@]}; do
	wait ${pid}
	STATUS+=" $?"
done

for st in ${STATUS[@]}; do
	if [[ ${st} -ne 0 ]]; then
		exit -1
	fi
done

PIDS=""

exit 0
