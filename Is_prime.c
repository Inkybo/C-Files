#include <stdio.h>

int is_prime(int num_1)
{
	int k;

	for(k = 2; k < num_1; ++k)
	{
		if(num_1 % k == 0)
		{
			return 0;
		}
		return 1;
	}
}
int main()
{
	int i;
	int N;
	int answer;
/*
	printf("enter number: ");
	scanf("%d", &N);

	for(i = 2; i <= N; ++i)
	{
		answer = is_prime(i);

		if(answer == 1)
			printf("%3d ", i);
	}
*/
	int pcount = 0;
	int x = 0;

	printf("List how many primes: ");
	scanf("%d", &N);

	x = 2;
	while(pcount < N)
	{
		if(is_prime(x) == 1)
		{
			//printf("%3d: %d\n", pcount, x);
			pcount++;

			if(pcount == N)
			{
				printf("%d\n", x);
			}
		}
		x++;
	}
	printf("\n");

	return 0;
}
