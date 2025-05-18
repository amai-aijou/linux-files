
/******************************************
 * Name: 4-9.c
 * Purpose: 
 * Author: jolson
 * Date: Wed Apr 23 09:17:02 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void)
{
	int i, j, k;	
	//a
	i = 7; j = 8;
	i *= j + 1;
	printf("%d %d\n", i, j);
	printf("Jo's answer is: 63, 8\n\n");

	//b
	i = j = k = 1;
	i += j += k;
	printf("%d %d %d\n", i, j, k);
	printf("Jo's answer is: 3, 2, 1\n\n");

	//c
	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("%d %d %d\n", i, j, k);
	printf("Jo's answer is: 2, -1, 3\n\n");

	//d
	i = 2; j = 1; k = 0;
	i *=j *=k;
	printf("%d %d %d\n", i, j, k);
	printf("Jo's answer is: 0, 0, 0\n\n");
	
	printf("--------------\n");

	i=6;
	j = i += i;
	printf("%d %d\n", i, j);

	printf("--------------\n");
	i = 1;
	printf("%d ", ++i - 1);
	printf("%d\n", i);
	return 0;
}

