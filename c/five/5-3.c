/******************************************
 * Name: 2-3.c
 * Purpose: 
 * Author: jolson
 * Date: Sun Apr 27 05:37:13 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int i, j, k;

	i = 3; j = 4; k = 5;
	printf("a: %d \n", i < j || ++j < k);
	printf("%d %d %d\n", i, j, k);
	printf("guess:1...3 4 5\n");

	i = 7; j = 8; k = 9;
	printf("b: %d \n", i - 7 && j++ < k);
	printf("%d %d %d\n", i, j, k);
	printf("guess:0...7 8 9\n");

	i = 7; j = 8; k = 9;
	printf("c:%d \n", (i = j) || (j = k));	
	printf("%d %d %d\n", i, j, k);
	printf("guess:1...8 9 9\n");

	i = 1; j = 1; k = 1;
	printf("d:%d \n", ++i || ++j && ++k);
	printf("%d %d %d\n", i, j, k);
	printf("guess:1...2 1 2...ok now I get it....2 1 1 \n");
	printf("Even though && is above ||, they're both Left to Right, so || is evaluated first");
	
	return 0;

}

