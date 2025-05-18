
/******************************************
 * Name: prog1.c
 * Purpose: 
 * Author: jolson
 * Date: Thu Apr 24 07:04:23 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int num = 10;
	int digit1 = 0;
	int digit2 = 0;

	printf("Enter a two-digit number:");
	scanf("%d", &num);

	if (num >=100) {
		
		int digit3 = 0;	
		digit1 = num / 100;
		digit2 = (num / 10) % 10;
		digit3 = num % 10;

		printf("The three-digit reversal is: %d%d%d\n", digit3, digit2, digit1);

		return 0;
	}

	digit1 = num / 10;
	digit2 = num % 10;

	printf("The reversal is: %d%d\n", digit2, digit1);
	
	return 0;
}

