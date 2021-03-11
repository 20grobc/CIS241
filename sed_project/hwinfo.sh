#!/bin/bash

lscpu | sed -E '/^CPU\(s\):/!d'
echo =======
echo Memory:
echo =======
free -h | sed -E 's/Gi/ Gigabytes/;1,2!d'
echo
echo Disks:
echo =======
df -h | awk '$2 ~ /T/ {print}'
echo
echo Date:
echo =======
echo $(date) |sed -E 's/Mon/Monday/;s/Tue/Tuesday/;s/Wed/Wednesday/;s/Thu/Thursday,/;s/Fri/Friday,/;s/Sat/Saturday,/;s/Sun/Sunday,/' | sed -E 's/Jan/January/;s/Feb/February/;s/Mar/March/;s/Apr/April/;s/Jun/June/;s/Jul/July/;s/Aug/August/;s/Sep/September/;s/Oct/October/'| sed -E 's/Nov/November/;s/Dec/December/'|sed -E 's/AM/a.m/;s/PM/p.m/'|sed -E 's/EST/Eastern Standard/;s/CST/Central Standard/;s/MST/Mountain Standard/;s/PST/Pacific Standard/'
