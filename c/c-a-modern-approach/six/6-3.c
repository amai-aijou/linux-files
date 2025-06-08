/******************************************
 * Name: 6-3.c
 * Purpose: 
 * Author: jolson
 * Date: Wed Jun  4 05:15:38 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	
	int i, j;
	
	for (i=5, j=i-1; i>0, j>0; --i, j=i-1) {
		printf("%10d ", i);
		printf("%10d \n", j);
	}

	return 0;
}

