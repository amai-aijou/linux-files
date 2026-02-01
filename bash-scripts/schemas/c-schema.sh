#!/bin/bash
# Script creates new file using input $1, then formats it for C

# Create variable to contatenate filename
fileName="$1.c"

# Check if file exists; if not, create it, then paste in schema
if [ -e $fileName ]; then
	echo "File $fileName already exists!"
else
	touch $fileName;
echo "
/*┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━ ୨୧ ━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
                    ❤︎︎࣪ I N F O R M A T I O N  ❤︎︎࣪    
  ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━ ୨୧ ━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛*/
   ❤︎︎࣪ Name: $filename 
   ❤︎︎࣪ Purpose: 
   ❤︎︎࣪ Author: amai-aijou
   ❤︎︎࣪ Date: $(date)
                                                                */
/*┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━ ୨୧ ━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
                        ❤︎︎࣪  G L O B A L  ❤︎︎࣪    
  ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━ ୨୧ ━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/*┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━ ୨୧ ━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
                     ❤︎︎࣪  P R O T O T Y P E S  ❤︎︎࣪    
  ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━ ୨୧ ━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛*/
int example_function(int i);

/*┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━ ୨୧ ━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
                          ❤︎︎࣪  M A I N  ❤︎︎࣪    
  ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━ ୨୧ ━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛*/
int main(void) {

}

/*┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━ ୨୧ ━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
                      ❤︎︎࣪  F U N C T I O N S  ❤︎︎࣪    
  ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━ ୨୧ ━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛*/
int example_function(int i) {

}
" > $fileName;
fi
