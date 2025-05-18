
/******************************************
 * Name: prog4.c
 * Purpose: 
 * Author: jolson
 * Date: Wed Apr 16 07:35:33 PM CDT 2025
 ******************************************/

#include <stdio.h>

float add(float price, float tax);

int main(void)
{
	float price = 1.00;
	float tax = 1.05;

	printf("This is a tax calculator.\nPlease enter the price: ");
	scanf("%f", &price);
	
	float total = add(price, tax);

	printf("Price with tax: %.2f\n", total);

	return 0;
}

float add(float price, float tax)
{
	return (price * tax);
}

