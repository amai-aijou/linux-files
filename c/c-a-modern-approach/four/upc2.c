
/******************************************
 * Name: upc.c
 * Purpose: 
 * Author: jolson
 * Date: Tue Apr 22 05:55:11 PM CDT 2025
 ******************************************/
#include <stdio.h>

int main(void) {

	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
		first_sum, second_sum, total;
	int chkDigit, functionSelect;

/*	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
*/
	
	printf("Enter 1 to Calculate, 2 to Validate: ");
	scanf("%d", &functionSelect);

	if (functionSelect < 0 || functionSelect > 2) {
			printf("Invalid selection");
			return 1;
	}
	
	if (functionSelect == 1) {
		printf("Enter the first 11 digits of a UPC: ");
		scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
				&d, &i1, &i2, &i3, &i4, &i5,
				&j1, &j2, &j3, &j4, &j5);
	} else if (functionSelect == 2) {
		printf("Enter the first 12 digits of a UPC: ");
		scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
				&d, &i1, &i2, &i3, &i4, &i5,
				&j1, &j2, &j3, &j4, &j5, &chkDigit);
	}
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	if (functionSelect == 1) {
		printf("Check digit: %d\n", 9 - ((total - 1) % 10));
	} else if (functionSelect == 2) {
		if (chkDigit == 9 - ((total - 1) % 10)) {
			printf("VALID\n");
		} else
			printf("INVALID\n");
	}

	return 0;

}
