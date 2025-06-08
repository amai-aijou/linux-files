/******************************************
 * Name: 6-5.c
 * Purpose: 
 * Author: jolson
 * Date: Wed Jun  4 05:37:18 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {
	
	int i=0;

	while (i < 10) {
		printf("%10d ", i);
		i++;
	}
	printf("\n");
	
	i=0;
	for (;i < 10;) {
		printf("%10d ", i);
		i++;
	}
	printf("\n");

	i=0;
	do {
		printf("%10d ", i);
		i++;
	} while (i < 10); 
	printf("\n");

	return 0;
}

//the third is different. In this case, they produce the same materials, however...
//...the "do" is always evaluated, even if the "while" portion isn't met. you get a "free" loop
