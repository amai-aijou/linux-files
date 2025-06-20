/******************************************
 * Name: prog1.c
 * Purpose: 
 * Author: jolson
 * Date: Sat Jun  7 04:23:28 AM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	float num;
	float nmax;

	printf("##### Find The Largest Number #####\n\n");

	do {	
		
		printf("Enter a number: ");
		scanf("%f", &num);

		if (num > nmax) {
			nmax = num;
		} 

	} while (num); 

	printf("The largest number entered was %.2f\n", nmax);

	return 0;

}
