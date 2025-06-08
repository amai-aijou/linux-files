/******************************************
 * Name: 6-2.c
 * Purpose: 
 * Author: jolson
 * Date: Wed Jun  4 05:12:11 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	
	int i = 9384;
	
	do {
	  printf("%d ", i);
	  i /=10;
	} while (i>0);
	
	return 0;
}

