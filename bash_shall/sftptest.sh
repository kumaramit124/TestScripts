#!/bin/sh
user=$1
remoteIP=$2
file=$3
sftp $1@$2 <<'END'
get /tmp/$3
END
