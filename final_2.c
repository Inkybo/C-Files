#include <stdio.h>

int main()
{

	int array[500];
	int num = 0;
	int input = 0;
	int max = 0;
	int eight = 0;

	for(num = 0; num < 500; num++)
	{
		scanf("%d", &input);

		array[num] = input;
	}
	for(num = 0; num < 500; num++)
	{
		if(array[num] >= array[num-1])
		{
			max = array[num];
		}
		if(array[num] == 8)
		{
			eight++;
		}
	}
	printf("max %d\n", max);
	printf("number of eights %d\n", eight);
}
