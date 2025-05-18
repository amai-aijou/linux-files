#include <stdio.h>

int main(void)
{
	char marker = '*';
	char space = ' ';

	printf("%c%c%c%c%c%c%c%c\n", space, space, space, space, space, space, space, marker);
	printf("%c%c%c%c%c%c%c\n", space, space, space, space, space, space, marker);
	printf("%c%c%c%c%c%c\n", space, space, space, space, space, marker);
	printf("%c%c%c%c%c\n", marker, space, space, space, marker);
	printf("%c%c%c%c\n", space, marker, space, marker);
	printf("%c%c%c\n", space, space, marker);
	return 0;
}
