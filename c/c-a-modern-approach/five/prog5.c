/******************************************
 * Name: prog5.c
 * Purpose: 
 * Author: jolson
 * Date: Tue Apr 29 08:22:56 PM CDT 2025
 ******************************************/

#include <stdio.h>


int main(void) {
	
	float income, tax, due;

	printf("Enter your taxable income: $");
	scanf("%f", &income);

	if (income <=0.00) {
			printf("You don't have any money :(\n");
			return 1;
	} else if (income > 0.00 && income <= 750.00) {
			due = 7.50;
	} else if (income > 750.00 && income <= 2250.00) {
			due = 7.50 + .02 * (income - 750.00);
	} else if (income > 2250.00 && income <= 3750.00) {
			due	= 37.50 + .03 * (income - 2250.00);
	} else if (income > 3750.00 && income <= 5250.00) {
			due = 82.50 + .04 * (income - 3750.00);			
	} else if (income > 5250.00 && income <= 7000.00) {
			due = 142.50 + .05 * (income - 5250.00);
	} else if (income > 7000.00 && income <=999999999999999999.00) {
			due = 230.00 + .06 * (income - 7000.00);
	} else {
			printf("Your riches are incomprehensible...you broke it!\n");
			return 2;
	}
	
	printf("Tax due: %.2f\n", due);
		
	return 0;

}
