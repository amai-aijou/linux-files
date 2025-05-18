
/******************************************
 * Name: prog7.c
 * Purpose: 
 * Author: jolson
 * Date: Fri Apr 18 06:01:15 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void)
{
	int amount;
	printf("Please enter a dollar amount: $");
	scanf("%d", &amount);

	int twenty  = amount / 20;
	int ten 	= (amount -(twenty * 20)) / 10;
	int five 	= (amount -(twenty * 20 + ten * 10)) / 5;
	int one		= (amount - (twenty * 20 + ten * 10 + five * 5)) / 1;

	printf("$20 bills: %d\n", twenty);
	printf("$10 bills: %d\n", ten);
	printf("$5 bills: %d\n", five);
	printf("$1 bills: %d\n", one);

}

