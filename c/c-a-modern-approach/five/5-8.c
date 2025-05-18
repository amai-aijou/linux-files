/******************************************
 * Name: 5-8.c
 * Purpose: 
 * Author: jolson
 * Date: Mon Apr 28 06:53:37 PM CDT 2025
 ******************************************/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void) {

	int age=15;
	_Bool teenager;

	if (age >12 && age <20) {
		teenager = TRUE;
	}
	
	printf("%d\n", teenager);
	return 0;
}

