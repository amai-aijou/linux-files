
/******************************************
 * Name: addfrac.c
 * Purpose: 
 * Author: jolson
 * Date: Fri Apr 18 09:53:10 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	float test = .0000009979;

	printf("Enter first fractions: ");
	scanf("%d /%d", &num1, &denom1);

	printf("Enter second fraction: ");
	scanf("%d /%d", &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);

	printf("exercise 3.1 test: %-6.2g\n", test);
	return 0;
}

