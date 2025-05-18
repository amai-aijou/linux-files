
/******************************************
 * Name: prog2.c
 * Purpose: 
 * Author: jolson
 * Date: Mon Apr 21 06:29:36 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void)
{
	int itemNo;
	float unitPrice;
	int day, month, year;

	printf("Enter item number: ");
   	scanf("%d", &itemNo);	

	printf("Enter unit price: ");
	scanf("%f", &unitPrice);

	printf("Enter Purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &day, &month, &year);
	
	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");	
	printf("%-d\t\t$ %7.2f\t%-d/%-d/%-d\n", itemNo, unitPrice, day, month, year);

	return 0;
}

