
/******************************************
 * Name: tprintf.c
 * Purpose: 
 * Author: jolson
 * Date: Fri Apr 18 08:56:49 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void)
{
	int i;
	float x;

	i = 40;
	x = 839.21f;

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	return 0;
}

