#include <stdio.h>

int main()
{
	int d1;
	int d2;
	int pcount = 0;
	int scount = 0;
	int k;
	int N;
	int seed;

	printf("How many rolls: ");
	scanf("%d", &N);
	printf("what seed: ");
	scanf("%d", &seed);

	srand(seed);

	for(k = 1; k <= N; ++k)
	{
		d1 = rand() % 10 + 1;
		d2 = rand() % 10 + 1;

		if(N <= 10)
		{
			printf("%d %d \n", d1, d2);
		}
		if(d1 == d2)
		{
			pcount = pcount + 1;
		}
		if(d1 + d2 == 15)
		{
			scount = scount + 1;
		}
	}
	printf("%d pairs \n", pcount);
	printf("%d add to 15 \n",scount );
	return 0;
}
