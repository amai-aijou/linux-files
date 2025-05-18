#include <stdio.h>

#define M_PI 3.14159265358979323846

int main(void)
{
	float volume = 0;
	int radius = 10;
	float cubed = radius * radius * radius;	

	volume = (4.0f/3.0f)*(M_PI * cubed);
	
	printf("Please enter the radius of your sphere: ");
	scanf("%d", &radius);

	printf("The volume of the sphere is: %.5f\n", volume);

	return 0;
}


