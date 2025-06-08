/******************************************
 * Name: 6-11.c
 * Purpose: 
 * Author: jolson
 * Date: Wed Jun  4 10:00:48 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void){
	
	int i;
	int sum = 0;

	for (i = 0; i < 10; i++) {
		if (i % 2) {
			printf ("if statement procc'ed, current sum: %d\n", sum);
			continue;
		}
		printf("no proc, addition occurs: %d\n", sum);
		sum += i;
	}
	printf("%d\n", sum);

	return 0;
}


/* Suspected output:
 *
 * internal loops:
 * 
 * 
 *
 * output should be 0? because anything with a non-zero value would result in the true "if" statement
 */
