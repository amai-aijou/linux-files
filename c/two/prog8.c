
/******************************************
 * Name: prog8.c
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

	//collect input from user
	printf("Enter amount of loan: ");
	scanf("%f", &principal);

	printf("Enter interest rate: ");
	scanf("%f", &interest);

	printf("Enter monthly payment: ");
	scanf("%f", &payment);	
	
	//compute monthly interest
	monthly_interest = (interest / 100) / 12;

	//compute initial payment
	balance = principal * (monthly_interest + 1) - payment;
	
	
	//print balance, compute next payment
	printf("Balance remaining after first payment: %.2f\n", balance);	
	
	//compute second payment
	balance = balance * (monthly_interest + 1) - payment;
	printf("Balance remaining after second payment: %.2f\n", balance);	

	//compute third payment
	balance = balance * (monthly_interest + 1) - payment;
	printf("Balance remaining after third payment: %.2f\n", balance);	
}

