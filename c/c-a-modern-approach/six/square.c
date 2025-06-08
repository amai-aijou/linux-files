
/******************************************
 * Name: square.c
 * Purpose: 
 * Author: jolson
 * Date: Sat May 31 07:42:46 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	i = 1;
	while (i <=n) {
		printf("%10d%10d\n", i, i * i);
		i++;
	}

	return 0;
}
