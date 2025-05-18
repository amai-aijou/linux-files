/******************************************
 * Name: prog7.c
 * Purpose: 
 * Author: jolson
 * Date: Thu May  1 07:10:57 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int one, two, three, four;
	int smallest1, smallest2, largest1, largest2;	
	int largest, smallest; 

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &one, &two, &three, &four);

	if (one > two) {
		largest1 = one;
		smallest1 = two;
	} else {
		largest1 = two;
		smallest1 = one;
	}

	if (three > four) {
		largest2 = three;
		smallest2 = four;
	} else {
		largest2 = four;
		smallest2 = three;
	}
	if (largest1 > largest2) {
		largest = largest1;
	} else { 
		largest = largest2;
	}
	if (smallest1 < smallest2) {
		smallest = smallest1;
	} else {
		smallest = smallest2;
	}	

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);	

	return 0;
}

/*
1 2 3 4
1 2 4 3
1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2

2 1 3 4
2 1 4 3
2 3 1 4
2 3 4 1
2 4 1 3
2 4 3 1

3 1 2 4
3 1 4 2
3 2 1 4
3 2 4 1
3 4 1 2
3 4 2 1

4 1 2 3
4 1 3 2
4 2 1 3
4 2 3 1
4 3 1 2
4 3 2 1

1 > 2 
3 > 2
4 > 3

(4)(3) 1 (4)(3) 2

if 1 > 2 || 3 > 1


if 1 > 2, 12 possibilities
	if 3 > 2 6 possibilities
		if 4 > 3 4 possibilities

else 2 > 1, 12 possibilities


-------------------
eight statement way, actually works
	if (one > two && one > three && one > four)
	else if (two > one && two > three && two > four)
	else if (three > one && three > two && three > four)
	else if (four > one && four > two && four > three)

	if (one < two && one < three && one < four)
	else if (two < one && two < three && two < four)
	else if (three < one && three < two && three < four)
	else if (four < one && four < two && four < three)

//largest only

	if (one > two)
		if (one > three)
			if (one > four)
				largest = one;
			else
				largest = four;
		else
			if (four > three)

// sort with three numbers

	if (one > two)
		if (one > three)
			largest = one;
		else
			largest = three;
	else
		if (two > three)
			largest = two;
		else
			largest = three;
*/
