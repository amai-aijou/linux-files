/******************************************
 * Name: date.c
 * Purpose: 
 * Author: jolson
 * Date: Sun Apr 27 01:59:05 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	int month, day, year;

	printf("Enter date (mm/dd/yy): ");
	scanf("%d /%d /%d", &month, &day, &year);

	printf("Dated this %d", day);
	switch (day) {
		case 1: case 21: case 31:
			printf("st"); break;
		case 2: case 22:
			printf("nd"); break;
		case 3: case 23:
			printf("rd"); break;
		default: printf("th"); break;
	}
	printf(" day of ");

	switch (month) {
		case 1:		printf("January");		break;
		case 2:		printf("February");		break;
		case 3:		printf("March");		break;
		case 4:		printf("April");		break;
		case 5:		printf("May");			break;
		case 6:		printf("June");			break;
		case 7:		printf("July");			break;
		case 8:		printf("August");		break;
		case 9:		printf("September");	break;
		case 10:	printf("October");		break;
		case 11:	printf("November");		break;
		case 12:	printf("December");		break;
		default: 	printf("not working"); 	break;
	}

	printf(", 20%.2d.\n", year);			

	int i = 2;
	int j = 3;
	int k;
	k = i * j == 6;
	printf("%d", k);

	i=5; j=10; k=1;
	printf("(b):%d\n", k> i < j);

	i=3; j=4; k=5;
	printf("(d)%d\n", i%j + i<k);

	return 0;

}

