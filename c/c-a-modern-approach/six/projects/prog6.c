/******************************************
 * Name: prog6.c
 * Purpose: 
 * Author: jolson
 * Date: Sat Jun 14 07:16:52 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	
	int i, n, nsquare;

	printf("Enter a number: ");
	scanf("%d", &n);

	// Error handling (for 0 and negative numbers)
	if (n <= 0) {
		printf("What are you tryin to pull here!?\n"); 
		return 1;
	}

	for (i = 2; i * i < n; i +=2)
		printf("%d\n", i * i);

	/*
	 * Too complicated. can be done more simply
	// Main loop, runs through all numbers until the square hits n
	for (i = 1; nsquare < n; i++) {
		nsquare = i * i;
		if (i % 2 == 0) {
			printf("%d\n", nsquare);
		}
	}

	*/
	printf("Original number entered: %d\n", n);

	return 0;
}
