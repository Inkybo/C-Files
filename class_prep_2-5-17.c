#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 	10
#define Max 50

int main()
{
	int A[ N ];
	int i = 0;
	int j = 0;
	int temp = 0;
	int changed = 0;

	srand(43);

	for(i = 0; i < N; ++i)
	{
		A[i] = rand() % Max + 1;
	}
	for(i = 0; i < N; ++i)
	{
		printf("%2d ", A[i]);
	}
	printf("\n");

	int check = 0;

	for(i = 0; i < N; ++i)
	{
		for(j = 0; j < N-i-1; ++j)
		{
			check++;
			if(A[j] > A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				changed = 1;
			}
		}

		if(changed == 0)
		{
			printf("list is already sorted \n");
			break;
		}

		printf("-- Iteration %d --\n ", i);

		for(j = 0; j < N; ++j)
		{
			printf("%2d ", A[j]);
		}
		printf("\n");

	}
	for(i = 0; i < N; ++i)
	{
		printf("%2d ", A[i]);
	}
	printf("\n");

	printf("checked %d times\n", check);

	return 0;
}
