w// compute ar of a circle based on diameter

#include <stdio.h>

int main()
{
	// dedclare variabes
	int D;
	float R, A;

	// get diameter from user
	printf("How big is the circle, diameter: ");
	scanf("%d", &D);

	// compute radius
	R = D / 2;

	// compute area
	A = 3.14 * R * R;

	// display answer message
	printf("For circle with diameter %d, area is %f\n", D, A);

	return 0;
}
