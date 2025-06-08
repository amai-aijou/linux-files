
#include <stdio.h>

int main(void) {

	int d, n;

	printf("##### Prime Integer Test #####\n");
	printf("Enter an integer: ");
	scanf("%d", &n);

	for (d=1; d < n; d++) {
		if (d * d == n) 
			break;
	}

	if (d < n)
		printf("%d is divisible by %d\n", n, d);
	else
		printf("%d is prime\n", n);

	return 0;
}
