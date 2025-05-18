#include <stdio.h>

int main(void) {

	int one, two, three, four;
	int largest, smallest;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &one, &two, &three, &four);


	if (one > two && one > three && one > four)
			largest = one;
	else if (two > one && two > three && two > four)
			largest = two;
	else if (three > one && three > two && three > four)
			largest = three;
	else if (four > one && four > two && four > three)
			largest = four;

	if (one < two && one < three && one < four)
			smallest = one;
	else if (two < one && two < three && two < four)
			smallest = two;
	else if (three < one && three < two && three < four)
			smallest = three;
	else if (four < one && four < two && four < three)
			smallest = four;

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	return 0;
}
