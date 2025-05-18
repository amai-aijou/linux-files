/******************************************
 * Name: 5-4.c
 * Purpose: 
 * Author: jolson
 * Date: Sun Apr 27 06:29:23 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	
	int i, j;

	i=1; j=2;
	printf("%d\n", (i > j) - (i <j));
	//0 - 1 = -1	

	i=2; j=2;	
	printf("%d\n", (i > j) - (i <j));
	//0 - 0 = 0

	i=2; j=1;
	printf("%d\n", (i > j) - (i <j));
	//1 - 0 = 1


	return 0;
}

