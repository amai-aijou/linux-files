#!/bin/bash
# Script creates new file using input $1, then formats it for C

# Create variable to contatenate filename
fileName="$1.c"

# Check if file exists; if not, create it, then paste in schema
if [ -e $fileName ]; then
	echo "File $fileName already exists!"
else
	touch $fileName;
echo "/******************************************
 * Name: $fileName
 * Purpose: 
 * Author: $USER
 * Date: $(date)
 ******************************************/

{

}
" > $fileName;
fi
