#include <stdio.h>

int main()
{
	int many;
	int sum = 0;
	int num;

	srand(time(NULL));
	for(many = 0; many < 10; ++many)
	{
		num   = rand() % 26;
		printf("%d ", num);
		printf("\n");
		sum = sum + num;
	}
	printf("\n");
	printf("Sum is %d\n", sum);
	return 0;
}
