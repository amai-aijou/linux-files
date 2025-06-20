/******************************************
 * Name: broker.c
 * Purpose: 
 * Author: jolson
 * Date: Fri Apr 25 10:51:14 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	float commission, value;
	float shareNum, sharePrice;

//	printf("Enter number of shares: ");
//	scanf("%f", &shareNum);

//	printf("Enter price per share: $");
//	scanf("%f", &sharePrice);

	do {
		printf("Enter value of trade: ");
		scanf("%f", &value);

//	value = shareNum * sharePrice;

		if (value == 0) {
			printf("Program Complete\n");
			break; }
		else if (value < 2500.00f)
			commission = 30.00f + .017f * value;
		else if (value < 6250.00f)
			commission = 56.00f + .0066f * value;
		else if (value < 20000.00f)
			commission = 76.00f + .0034f * value;
		else if (value < 50000.00f)
			 commission = 100.00f + .0022f * value;
		else if (value < 500000.00f)
			commission = 155.00f + .0011f * value;
	
		if (commission < 39.00f)
			commission = 39.00f;

		printf("Commission: $%.2f\n", commission);
	} while (value != 0);


	/*rival commission for program "5-3b"

	if (value < 2000) {
		commission = 33.00f + .03f * value;
	} else if (value > 1999) {
		commission = 33.00f + .02f * value;
	}

	printf("Commission: $%.2f (rival)\n", commission);
	*/

	return 0;
}

