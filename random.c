#include <stdio.h>

int main()
{
	int roll = 0;
	int x = 0;
	int count = 0;

	srand(time(NULL));

	for(roll = 0; roll < 5 ; ++roll)
	{
		x = rand() % 6 + 1;
		printf("%d\n", x);
		if (x == 4)
		{
			count++;
		}
	}

	printf("%d 4s in the list\n", count);

	return 0;
}
