#include <stdio.h>

int main()
{
	int num = 0;

	while(num <= 255)
	{
		printf("%3d: %c ", num, num);
		printf("\n");
		num = num + 1;
	}
	return 0;
}
