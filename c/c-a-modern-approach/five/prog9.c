/******************************************
 * Name: prog9.c
 * Purpose: 
 * Author: jolson
 * Date: Sun May  4 02:20:50 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int m1, d1, y1;
	int m2, d2, y2;
	int mMax, dMax, yMax;
	int mMin, dMin, yMin;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%2d", &m1, &d1, &y1);
	
	printf("Enter the second date  (mm/dd/yy): ");
	scanf("%d/%d/%2d", &m2, &d2, &y2);

	//debug statement to ensure scanf worked
	//printf("current values: %d/%02d/%02d\n", m2, d2, y2);

	// Compare year one to year two
	if (y1 > y2) {
		mMax = m1; dMax = d1; yMax = y1;
		mMin = m2; dMin = d2; yMin = y2;

	} else if (y2 > y1) {
		mMax = m2; dMax = d2; yMax = y2;
		mMin = m1; dMin = d1; yMin = y1;
	// If years are equal, move on to months
	} else if (y2 == y1) {
		if (m1 > m2) {
			mMax = m1; dMax = d1; yMax = y1;
			mMin = m2; dMin = d2; yMin = y2;
		} else if (m2 > m1) {	
			mMax = m2; dMax = d2; yMax = y2;
			mMin = m1; dMin = d1; yMin = y1;
		} else if (m1 == m2) {
			if (d1 > d2) {
			} else if (d2 > d1) {
				mMax = m1; dMax = d1; yMax = y1;
				mMin = m2; dMin = d2; yMin = y2;
			} else if (d2 == d1) {
				printf("The two dates are identical!\n");
				return 0;
			}
		}
	}

	printf("%d/%02d/%02d is earlier than %d/%02d/%02d\n", mMax, dMax, yMax, mMin, dMin, yMin);

	return 0;
}

