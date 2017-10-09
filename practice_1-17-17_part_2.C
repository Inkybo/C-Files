#include <stdio.h>
#include <stdlib.h>

int countOdd(int arr[], int n)
{
	int oc = 0;
	int num_1 = 0;

	for(num_1 = 0; num_1 < n; ++num_1)
	{
		if(arr[num_1] % 2 == 1)
		{
			oc++;
		}
	}
	return oc;
}


int main()
{
	int num_1 = 0;
	int num_2 = 0;
	int res = 0;
	int numlist[25];

	srand(7);

	for(num_1; num_1 < 25; ++num_1)
	{
		num_2 = rand() % 30;
		numlist[num_1] = num_2;
	}

	res = countOdd(numlist, 25);

	printf("%d odd values\n", res);

	return 0;
}
