/******************************************
 * Name: temp.c
 * Purpose: 
 * Author: jolson
 * Date: Thu Jun 12 08:41:13 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	
	int num, digit1, digit2, digit3, digit4;	
	int ndiv;
	int i;

	printf("Enter a number with 0-4 digits: ");
	scanf("%d", &num);
	ndiv = num;

	for (i = 0; ndiv > 0; i++) {
		ndiv /= 10;
	}

	// Debugging statement
	printf("Number of digits: %d \n", i);
	digit4 = num / 1000;
	digit3 = num / 100;
	digit2 = num / 10;
	digit1 = num % 10;
	
	switch (i) {
		case 0: 
				printf("You shouldn't be seeing this...he knows too much!\n");
				return 1;
		case 1: 
				digit1 = num % 10;
				printf("The single-digit reversal is: %d\n", digit1);
				break;
		case 2: 
				digit2 = num / 10;
				digit1 = num % 10;
				printf("The two-digit reversal is: %d/%d\n", digit1, digit2);
				break;
		case 3: 
				digit3 = num / 100;
				digit2 = (num / 10) % 10;
				digit1 = num % 10;
				printf("The three-digit reversal is: %d/%d/%d\n",  digit1, digit2, digit3);
				break;
		case 4: 
				digit4 = num / 1000;
				digit3 = num / (100) % 10;
				digit2 = num / (10) % 10;
				digit1 = num % 10;
				printf("The four-digit reversal is: %d/%d/%d/%d\n", digit1, digit2, digit3, digit4);
				break;
	}

	return 0;
}





/*
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
*/
