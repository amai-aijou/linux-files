/******************************************
 * Name: prog2.c
 * Purpose: 
 * Author: jolson
 * Date: Mon Apr 28 08:37:22 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int hour24, minute24;
	int hour12, minute12;
	char amPm = 'A';

	printf("Enter a 24-hour time: ");
	scanf("%2d :%2d", &hour24, &minute24);	
	
	//error handling
	if ((hour24 > 24) || (hour24 <0)) {
		printf("Exception: Out of Range (0-24)");
		return 1;
	}
	//error handling, cont'd
	if ((minute24 > 59) || (minute24 < 0)) {
		printf("Exception: Out of Range (0-59)");
	}
	minute12 = minute24;	

	if (hour24 > 12) {
		hour12 = hour24 - 12;
		amPm = 'P';
	} else if (hour24 == 0) {	
		hour12 = 12;		
	} else {
		hour12 = hour24; 
	}

	
	printf("Equivalent 12-hour time: %2d:%02d %cM\n", hour12, minute12, amPm);

	return 0;
}
