#!/bin/sh

if [ $# -ne 3 ]; then
    echo "usage: $0 url username password"
    exit 1
fi

url=$1
username=$2
password=$3
cookie=cookie

# logOn
echo ""
echo "invoking logOn"
data=$(cat logOn)
data=$(echo $data | sed s:USERNAME:$username:)
data=$(echo $data | sed s:PASSWORD:$password:)
curl -H "Content-Type: text/xml; charset=utf-8" -k -c $cookie -d "$data" $url
echo "DONE logOn"

# getServiceAttributes
echo ""
echo "invoking getServiceAttributes"
data=$(cat getSA)
curl -H "Content-Type: text/xml; charset=utf-8" -k -b $cookie -c $cookie -d "$data" $url
echo "DONE getServiceAttributes"

# setReadingSystemAttributes
echo ""
echo "invoking setReadingSystemAttributes"
data=$(cat setRSA)
curl -H "Content-Type: text/xml; charset=utf-8" -k -b $cookie -c $cookie -d "$data" $url
echo "DONE setReadingSystemAttributes"

# setReadingSystemAttributes with "invalid xml data"
echo ""
echo "invoking setReadingSystemAttributes with \"invalid xml data\""
data=$(cat setRSA_fail)
curl -H "Content-Type: text/xml; charset=utf-8" -k -b $cookie -c $cookie -d "$data" $url
echo "DONE setReadingSystemAttributes"

echo ""
