/******************************************
 * Name: prog12.c
 * Purpose: 
 * Author: jolson
 * Date: Wed Jun 18 05:28:17 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	float e = 1.0;
	float factorial = 1;
	float n;

	printf("##### Euler's Formula #####\n\n");
	printf("Enter a max term ε: ");
   scanf("%f", &n);	

	for (int i = 1; (1.0 / factorial) >= n; i++) {
		factorial *= i;
		e += (1.0 / factorial );	
		printf("Factorial: %d\n", factorial);
		printf("e: %f\n", e);
	}

	printf("e = %f\n", e);

	return 0;
}


//bit messy, but I think it works!
//
//
//
//.......probably =P
