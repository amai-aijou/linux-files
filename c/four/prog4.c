
/******************************************
 * Name: prog4.c
 * Purpose: 
 * Author: jolson
 * Date: Thu Apr 24 08:19:26 PM CDT 2025
 ******************************************/
#include <stdio.h>

int main(void) {

	int n = 0;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &n);

	if(n < 0) {

		printf("Negative numbers are not accepted!\n");

		return 1;
	}

	if(n == 0) {

		printf("The number is 0\n");

		return 0;
	}

	if(n > 0 ) {
		
		printf("In octal, your number is: %d%d%d%d%d\n", ((((n/8)/8)/8)/8) % 8 ,(((n/8)/8)/8)%8	,((n / 8) / 8) % 8, (n / 8) % 8, n % 8);
		return 0;
	}
/*
	if(n > 99999) {
		printf("This program is limited to five digits");

		return 1;
	} */

	return 0;
}
