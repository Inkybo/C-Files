#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_1 = 0;
	int num_2 = 0;
	int random = 0;
	int sum = 0;

	printf("enter a number: ");
	scanf("%d", &num_1);

	srand(11);

	for(num_2 = 1; num_2 <= num_1; num_2++)
	{
		random = rand() % 100;
		printf("%3d", random);

		if(random %2 == 0)
		{
			printf(" - even");
		}
		else
		{
			printf(" - odd");
		}

		sum = sum + random;
		printf("\n");
	}

	printf("sum: %d", sum);
	printf("\n");
	return 0;
}

