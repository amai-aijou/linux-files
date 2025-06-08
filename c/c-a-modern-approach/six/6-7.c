/******************************************
 * Name: 6-7.c
 * Purpose: 
 * Author: jolson
 * Date: Wed Jun  4 09:14:30 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	
	int i;

	for (i=9384; i > 0; i /= 10) {
		printf("%d ", i);
	}

	return 0;
}

