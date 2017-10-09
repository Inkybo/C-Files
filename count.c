#include <stdio.h>

int main()
{
	int i;
	int x;
	char c;

	for(i = 0; i < 20; ++i)
	{
		x = rand()% 26 + 10;
		c = 'A' + rand()% 20;

		printf("%d %d %c\n", i, x, c);
	}

	return 0;
}
