
/******************************************
 * Name: numdigits.c
 * Purpose: Calculates the number of digits in an integer
 * Author: jolson
 * Date: Sun Jun  1 06:06:13 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main (void) {
	
	int digits = 0, n;

	printf("Enter a non-negative integer: ");
	scanf("%d", &n);

	do {
		n /= 10;
		digits++;
	} while (n > 0);

	printf("The number has %d digit(s).\n", digits);

	return 0;
}
