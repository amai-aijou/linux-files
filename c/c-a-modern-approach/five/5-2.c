/******************************************
 * Name: 5-2.c
 * Purpose: 
 * Author: jolson
 * Date: Sun Apr 27 05:16:25 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int i = 10; int j = 5; int k;
	printf("guess (a): 1\n");
	printf("(a)%d\n", !i < j);

	i = 2; j = 1;
	printf("guess (b): 1\n");
	printf("(b)%d\n", !!i + !j);

	i = 5; j = 0; k = -5;
	printf("guess (c): 1?\n");
	printf("(c)%d\n", i && j || k);

	i = 1; j = 2; k = 3;
	printf("guess (d): 1?\n");
	printf("(d)%d\n", i < j || k);

	return 0;
}

