
/******************************************
 * Name: prog1.c
 * Purpose: converts mm/dd/yyyy to yyyy/mm/dd
 * Author: jolson
 * Date: Sun Apr 20 12:57:23 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void)
{
	int day = 01;
	int month = 01;
	int year = 1971;

	printf("Enter a date(mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("You entered the date %d%d%d\n", year, month, day);

	return 0;
}

