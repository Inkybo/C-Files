#include <stdio.h>

int main()
{
	int flips = 0;
	int coin = 0;
	int head = 0;
	int tail = 0;

	srand(time(NULL));

	printf("How many flips: ");
	scanf("%d", &flips);

	for(flips = flips; flips > 0; --flips)
	{
		coin = rand()% 2 + 1;
		if(coin == 1)
		{
			head++;
		}
		if(coin == 2)
		{
			tail++;
		}
	}
	printf("heads: %d \n", head);
	printf("tails: %d \n", tail);

	return 0;
}
