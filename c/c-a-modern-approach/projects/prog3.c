/******************************************
 * Name: prog3.c
 * Purpose: 
 * Author: jolson
 * Date: Sun Jun  8 04:43:13 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int nnum, ndenom;
	int num, denom, remainder;

	printf("Enter a fraction: ");
	scanf("%d/%d", &nnum, &ndenom);


	if (ndenom == 0) {
		printf("dividing by zero!?! stop, you'll kill us all!! you'll k-\n.\n..");
		printf("...u-urgh..w-...why...the fool...the damn fool... \n");
		return 1;
	}
	
	num = nnum;
	denom = ndenom;

	while (num != 0) {
		remainder = denom % num;
		denom = num;
		num= remainder;	
			
	}

	nnum /= denom;
	ndenom /= denom;


	printf("In lowest terms: %d/%d\n", nnum, ndenom);

	return 0;
}

