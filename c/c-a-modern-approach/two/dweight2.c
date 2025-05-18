
/******************************************
 * Name: dweight2.c
 * Purpose: 
 * Author: jolson
 * Date: Sun Apr  6 03:55:51 PM CDT 2025
 ******************************************/

/* Computes the dimensional weight of a
 * box from input provided by the user */

#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;

	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter length of box: ");
	scanf("%d", &length);
	printf("Enter width of box: ");
	scanf("%d", &width);
	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}
