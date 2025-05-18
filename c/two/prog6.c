/******************************************
 * Name: prog5.c
 * Purpose: 
 * Author: jolson
 * Date: Fri Apr 18 01:31:00 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void)
{
	int x;
	
	//Ask user for value of X
	printf("Please Enter a value for x: ");
	scanf("%d",&x);
	int horner = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	int solution = (3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-6;
	printf("The solution is: %d\n", solution);
	printf("The horner solution is: %d\n", horner);
}

