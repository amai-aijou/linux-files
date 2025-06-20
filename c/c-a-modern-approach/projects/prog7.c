/******************************************
 * Name: square3.c
 * Purpose: 
 * Author: jolson
 * Date: Tue Jun  3 05:17:47 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int i, n, odd, square;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	odd = 3;
	square = 1;
	for (i  = 1; i <= n; ++i) {
		printf("%10d%10d\n", i, square);
		square += odd;
		odd += 2;
	}

	return 0;
}


/**************************
 * Example Output:
 *
 * This program prints a table of squares.
 *Enter number of entries in table: 5
       Iteration  Square  Odd 
 *         1         1		1	
 *         2         4		3
 *         3         9		5
 *         4        16		7
 *         5        25		9
 *         					
 */
