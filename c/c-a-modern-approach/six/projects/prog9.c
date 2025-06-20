
/******************************************
 * Name: prog9.c
 * Purpose: 
 * Author: jolson
 * Date: Fri Apr 18 06:46:29 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void)
{
	//declare variables
	float principal = 0.00f;
	float interest = 0.0f;	
	float monthly_interest= 0.0f;
	float payment = 000.00f;
	float balance = 00000.00f;
	int   months;
	int i;

	//collect input from user
	printf("Enter amount of loan: ");
	scanf("%f", &principal);

	printf("Enter interest rate: ");
	scanf("%f", &interest);

	printf("Enter monthly payment: ");
	scanf("%f", &payment);	
	

	printf("Enter number of payments: ");
	scanf("%d", &months);	
	
	//compute monthly interest
	monthly_interest = (interest / 100) / 12;

	//assign balance to prepare for loop
	balance = principal;
	
	for (i = 1; i <= months; i++) {

		//compute initial payment
		balance = balance * (monthly_interest + 1) - payment;

		//print balance, compute next payment
		printf("Balance remaining after payment #%d: %.2f\n", i, balance);	

	}
	
	return 0;
}

