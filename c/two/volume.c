
/******************************************
 * Name: volume.c
 * Purpose: 
 * Author: jolson
 * Date: Sun Apr  6 03:32:49 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void)
{
    //int height, length, width, volume, weight;
	int height = 8, length = 12, width = 10, volume;
	volume = height * length * width;
	//weight = (volume + 165) / 166;
	printf("Volume (calculated by expression) is: %d\n", height * length * width);

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume +165) / 166);

	return 0;
}
