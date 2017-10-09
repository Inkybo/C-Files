#include <stdio.h>

int main()
{
	int num_1;
	int how_many = 4;
	int sofar;
	int sum;

	printf("Enter number: ");
	scanf("%d", &num_1);

	while( num_1 != 0 )
	{
        	printf("Enter Number: ");
       		scanf("%d", &num_1);
		sum = sum + num_1;
		sofar = sofar + 1;
	}

	printf("The sum of the four numbers is: %d \n", sum);
	printf("you typed in %d numbers\n", sofar);

	return 0;
}
