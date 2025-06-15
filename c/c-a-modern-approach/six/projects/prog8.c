/******************************************
 * Name: prog8.c
 * Purpose: 
 * Author: jolson
 * Date: Sun Jun 15 03:15:21 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int nday, nduration;
	int currentDay = 1;
	int date;

	printf("##### Calendar #####\n\n");
	
	printf("Enter number of days in month: ");
	scanf("%2d", &nduration);
	printf("Enter starting day of the week\n(1=Sun, 7=Sat)\nDay: ");
	scanf("%1d", &nday);

	//error handling for incorrect values
	if (nday < 1 || nday > 7) {
		printf("Out of Range Error\n");
		return 1;
	}

	while ( currentDay  < nday) {
		printf("\t");
		currentDay++;
	}

	for (date = 1; date <= nduration; date++  ) {
		
		if ( currentDay % 8 == 0) {
			printf("\n");
			currentDay = 1;
		}	
		
		printf("%d\t", date);	
		currentDay++;
	}
	
	printf("\n");

	return 0;
}

