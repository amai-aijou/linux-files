/******************************************
 * Name: prog10.c
 * Purpose: 
 * Author: jolson
 * Date: Sun May  4 06:40:00 PM CDT 2025
 ******************************************/

#include <stdio.h>

int main(void) {

	int grade, adjGrade;
	char letter;
	
	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	adjGrade = grade / 10;

	switch (adjGrade) {
		case 9: case 10:
			letter = 'A';
			break;
		case 8:
			letter = 'B';
			break;
		case 7:
			letter = 'C';
			break;
		case 6:
			letter = 'D';
			break;
		case 5: case 4: case 3: case 2: case 1: case 0:
			letter = 'F';
			printf("Did you even try? Seriously...");
			break;
		}

	printf("Letter grade: %c\n", letter);	
	
	return 0;
}
