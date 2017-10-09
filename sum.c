#include <stdio.h>

int main()
{
	int num_1;
	int how_many = 4;
	int sofar;
	int sum;

	printf("How many Numbers: ");
	scanf("%d", &how_many);

	while( sofar < how_many )
	{
        	printf("Enter Number: ");
       		scanf("%d", &num_1);
		sum = sum + num_1;
		sofar = sofar + 1;
	}

	printf("The sum of the four numbers is: %d \n", sum);

	return 0;
}
