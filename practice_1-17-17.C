#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k = 0;
	int mult7 = 0;
	int nums[1000];

	for(k = 0; k < 1000; ++k)
	{
		nums[k] = rand() % 50001;
	}

	for(k = 0; k < 1000; ++k)
	{
		printf("%d\n", nums[k]);
	}

	// how many multiples of 7?

	for(k = 0; k < 1000; ++k)
	{
		if(nums[k] % 7 == 0)
		{
			mult7++;
		}
	}

	printf("%d multiples of 7\n", mult7);

	return 0;
}
