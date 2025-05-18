/******************************************
 * Name: prog4.c
 * Purpose: 
 * Author: jolson
 * Date: Tue Apr 29 07:48:06 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int windSpeed;

	printf("Please enter the wind speed (in knots): ");
	scanf("%d", &windSpeed);

	if (windSpeed < 1) {
		printf("The estimated wind force is: Calm\n");
	} else if (windSpeed < 4) {
		printf("The estimated wind force is: Light air\n");
	} else if (windSpeed < 28) {
		printf("The estimated wind force is: Breeze\n");
	} else if (windSpeed < 48) {
		printf("The estimated wind force is: Gale\n");
	} else if (windSpeed < 64) {
		printf("The estimated wind force is: Storm\n");
	} else if (windSpeed < 63 ) {
		printf("The estimated wind force is: Hurricane\n");
	}

	printf("*Simplified Beaufort scale*\n");

	return 0;
}
