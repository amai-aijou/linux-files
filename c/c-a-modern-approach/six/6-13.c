/******************************************
 * Name: 6-13.c
 * Purpose: 
 * Author: jolson
 * Date: Sat Jun  7 03:15:37 AM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	
	int n;
	int m = 10;
	m /=2;
	for (n = 0; m > 0; m/=2, n++) {
		printf("%10d %10d\n", n, m);
	}

	return 0;
}

