
/******************************************
 * Name: prog1n.c
 * Purpose: 
 * Author: jolson
 * Date: Thu Apr 24 07:36:58 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int n;

	printf("Please enter a two-/three-digit number: ");
	scanf("%d", &n);

	printf("The reversal of your number: %d%d%d\n", n % 10, (n / 10) % 10, n / 100);
				
	printf("(this is the way they wanted you to do it)\n");
	return 0;
}

