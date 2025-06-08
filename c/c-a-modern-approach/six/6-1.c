/******************************************
 * Name: 6-1.c
 * Purpose: 
 * Author: jolson
 * Date: Wed Jun  4 05:10:31 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	int i = 1;

	while (i <=128) {
		printf("%d ", i);
		i *= 2;
	}

	return 0;
}

