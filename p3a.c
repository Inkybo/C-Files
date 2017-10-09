#include <stdio.h>

int main()
{
	int num_1 = 0;
	int count = 1;
	int sum = 0;

	printf("Enter a number: ");
	scanf("%d", &num_1);

	//while loop
	printf("While loop \n");
	while(count <= num_1)
	{
		printf("%d ", count);
		sum = sum + count;
		count = count + 3;
	}
        printf("\n============================= \n");
	printf("the sum of these number is %d", sum);
        printf("\n============================= \n");

	sum = 0;

	//for loop
	printf("\nFor loop \n");
	for (count = 1 ; count <= num_1; count = count + 3)
	{
		printf("%d ", count);
		sum = sum + count;
	}
        printf("\n============================= \n");
        printf("the sum of these number is %d", sum);
        printf("\n============================= \n");

	return 0;
}

