
/******************************************
 * Name: 4-3.c
 * Purpose: 
 * Author: jolson
 * Date: Wed Apr 23 08:38:12 PM CDT 2025
 ******************************************/
#include <stdio.h>

int main(void)
{
	int a = 8;
	int b = 5;

	printf("The answer is:%d\n", (a % b));

	a = -8;
	b = 5;
	printf("The answer is:%d\n", (a % b));

	a = 8;
	b = -5;
	printf("The answer is:%d\n", (a % b));

	a = -8;
	b = -5;
	printf("The answer is:%d\n", (a % b));
	return 0;
}

