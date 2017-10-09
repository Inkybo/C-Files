#include <stdio.h>

int main()
{
	float radius;
	float circle_area;
	float circle_perimeter;
	float square_area;
	float square_perimeter;

	printf("Enter a radius: ");
	scanf("%f", &radius);

	//compute circle area
	circle_area = 3.14 * (radius * radius);

	//compute circle perimeter
	circle_perimeter = 2 * 3.14 * radius;

	//compute square area
	square_area = radius * radius;

	//compute square perimeter
	square_perimeter = 4 * radius;

	printf("circle area: %f \n", circle_area);
	printf("circle perimeter: %f \n", circle_perimeter);
	printf("square area: %f \n", square_area);
	printf("square perimeter: %f \n", square_perimeter);

	return 0;
}
