
/******************************************
 * Name: square2.c
 * Purpose: 
 * Author: jolson
 * Date: Tue Jun  3 04:30:59 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		printf("%10d%10d\n", i, i * i);

	return 0;
}

