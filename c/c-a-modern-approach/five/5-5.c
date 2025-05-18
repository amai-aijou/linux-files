/******************************************
 * Name: 5-5.c
 * Purpose: 
 * Author: jolson
 * Date: Sun Apr 27 07:53:12 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	
	int n = 1;
	if (n >= 1 <= 10) {
		printf("This worked.\n");
	}
	
	n = 0;
	if (n >= 1 <= 10) {
		printf("This worked.\n");
	}

	n = 19;
	if (n >= 1 <= 10) {
		printf("This worked.\n");
	}
	
	//These loops evaluate as:
	// ((n >= 1) <= 10)
	// ((0 or 1) <= 10)
	// TRUE;
	//
	// No matter what value you use, it will always be true,
	// as both TRUE and FALSE are less than 10!

	return 0;
}

