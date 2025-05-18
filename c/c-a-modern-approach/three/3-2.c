
/******************************************
 * Name: 3-2.c
 * Purpose: 
 * Author: jolson
 * Date: Sat Apr 19 03:33:02 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void)
{
	float input = 0.0;

	printf("Please input a variable: ");
	scanf("%e", &input);

	printf("Exponential: left-justified field size 8, one digit after decimel:%-8.1e\n", input);
	printf("Exponential: right-justified field size 10, six digits after decimel:%10.6e\n", input);
	printf("Fixed Decimel: left-justified field size 8, three digits after decimel:%-8.3f\n", input);
	printf("Fixed Decimel: right-justified field size 6, no digits after decimel:%6.0f\n", input);
	printf("(test of 6 vs 6.0) Fixed Decimel: right-justified field size 6, no digits after decimel:%6f\n", input);

	return 0;
}

