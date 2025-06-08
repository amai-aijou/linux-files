/******************************************
 * Name: 6-4.c
 * Purpose: 
 * Author: jolson
 * Date: Wed Jun  4 05:27:50 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	
	int i;

	for (i = 0; i < 10; i++) {
		printf("%10d ", i);
	}
	printf("\n");

	for (i = 0; i < 10; ++i) {
		printf("%10d ", i);
	}
	printf("\n");
	
	for (i = 0; i++ < 10; ) {
		printf("%10d ", i);
	}
	printf("\n");

}

// the third one is different, because i immediately becomes 1, as the Test Condition (second statement)
// is immediately evaluated and incremented before the loop is even run
