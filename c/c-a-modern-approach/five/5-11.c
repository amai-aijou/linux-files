/******************************************
 * Name: 5-11.c
 * Purpose: 
 * Author: jolson
 * Date: Mon Apr 28 07:31:22 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	
	int area_code;

	printf("Input area code: ");
	scanf("%d", &area_code);

	switch (area_code) {
		case 229:
			printf("Albany\n");
			break;
		case 404: case 470: case 678: case 770:
			printf("Atlanta\n");
			break;
		case 478:
			printf("Macon\n");
			break;
		case 706: case 762:
			printf("Columbus\n");
			break;
		case 912:
			printf("Savannah\n");
			break;
	}	
	return 0;
}
