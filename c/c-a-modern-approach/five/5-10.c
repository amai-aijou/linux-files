/******************************************
 * Name: 5-10.c
 * Purpose: 
 * Author: jolson
 * Date: Mon Apr 28 07:06:35 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int i = 1;
	switch (i % 3) {
		case 0: printf("zero");
		case 1: printf("one");
			break;
		case 2: printf("two");
	}	

	return 0;	
}
