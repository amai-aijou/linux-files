/******************************************
 * Name: prog1.c
 * Purpose: 
 * Author: jolson
 * Date: Mon Apr 28 07:45:02 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	
	int input = 0;
	int digits = 0;

	printf("Enter a number: ");
	scanf("%d", &input);

	if (input > 9999) {
		printf("Exception: Out of range (0-9999)\n");
		return 1;
	} else if ((input / 10) >= 100) {
		 digits = 4; 
	} else if ((input / 10) >= 10) {
		 digits = 3; 
	} else if ((input / 10) >= 1) { 
		 digits = 2; 
	} else { 
		 digits = 1; 
	}	

	printf("The number %d has %d digits\n", input, digits);


	return 0;
}
