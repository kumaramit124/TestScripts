#!/bin/bash
COUNT=6
#while loop
while [ $COUNT -gt 0 ]; do
	echo "value of count is: $COUNT"
	COUNT=$((COUNT-1))
done
