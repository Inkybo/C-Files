#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int N;

	if (argc == 1)
	{
		printf("No argument, Using default size, 5\n");
		N = 5;
	}
	else
	{
		N = atoi( argv[1] );
		if ( N <= 0 )
		{
			printf("Bad argument %s, Using default size 5\n", argv[1]);
			N = 5;
		}
	}

	printf("Finally %d\n", N);

	// dyanically allocate array of size N
	int *A;
	int *used;
	A = calloc(N, sizeof(int));
	used = calloc(N+1, sizeof(int));

	// populate the array
	int  k = 0, x, i, dup, try;
	for(k = 0; k < N; k++)
	{
		try = 0;
		do
		{
			x = rand()% N + 1;
		}while(used[x]);
		printf("%5d: %d %d\n", k, x, try)
		A[k] = x;
		used[x] = 1;
	}

	// print the array
	for(k = 0; k < N; k++)
		printf("%2d", A[k]);
	printf("\n");

	return 0;
}
