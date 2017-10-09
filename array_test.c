#include <stdio.h>

int main()
{
	int num_1 = 0;
	int loop = 0;
	int arr[4];

	for(loop = 0; loop < 4; loop++)
	{
		printf("enter a number");
		scanf("%d", &arr[loop]);
	}

	for(num_1 = 0; num_1 < 4; num_1++)
	{
		printf("%d\n", arr[num_1]);
	}

	printf("-------%d\n",sizeof(arr)/sizeof(int));

	return 0;
}
