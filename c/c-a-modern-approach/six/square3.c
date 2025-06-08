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

	i = 1;
	odd = 3;
	for (square = 1; i <= n; odd += 2) {
		printf("%10d%10d\n", i, square);
		++i;
		square += odd;
	}
	return 0;
}


/**************************
 * Example Output:
 *
 * This program prints a table of squares.
 *Enter number of entries in table: 5
 *         1         1
 *         2         4
 *         3         9
 *         4        16
 *         5        25
 */
