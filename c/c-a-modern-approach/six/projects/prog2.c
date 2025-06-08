/******************************************
 * Name: prog2.c
 * Purpose: Calculates GCD of two numbers
 * Author: notseelen
 * Date: Sat Jun  7 04:53:11 AM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int n1, n2;	
	int n, m;
	int remainder;

	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);

	if (n1 > n2) {
		m = n1; n = n2;
	} else {
		m = n2; n = n1;
	}

	if (m == 0) {
		printf("dividing by zero!?! stop, you'll kill us all!! you'll k-\n.\n..");
		printf("...u-urgh..w-...why...the fool...the damn fool... \n");
		return 1;
	}

	while (n != 0) {
		remainder= m % n;
		m = n;
		n = remainder;
	}

	printf("Greatest common divisor: %d\n", m);

	return 0;
}

