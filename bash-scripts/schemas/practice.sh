#!/bin/bash
# Script creates new file using input $1, then formats it for C

# Create variable to contatenate filename
fileName="$1"

# Check if file exists; if not, create it, then paste in schema
if [ -e $fileName ]; then
	echo "File $fileName already exists!"
else
	touch $fileName;
echo "# ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
                    ❤︎︎࣪    P R A C T I C E    ❤︎︎࣪    				 
   ❤︎︎࣪ Name: $1 - CSAPP
   ❤︎︎࣪ Author: amai-aijou
   ❤︎︎࣪ Date: $(date)
# ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛

# ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
    \"Practice Problem x.x\"

# ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛

###############
   "Answers"
###############
" > $fileName;
fi
