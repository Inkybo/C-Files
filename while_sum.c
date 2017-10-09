#include <stdio.h>

int main()
{
	int count = 1;
	int sum = 0;
	int num;

	while(count <= 5)
	{
		//whatever i put here happens 5 times
		printf("Enter Value: ");
		scanf("%d", &num);

		sum = sum + num;

		count = count + 1;
	}

	printf("Son of the numbers is %d \n", sum);

	return 0;
}
