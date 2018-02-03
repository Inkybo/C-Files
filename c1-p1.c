#include <stdio.h>

int main()
{
	int num_1 = 1;
	int num_2 = 0;
	int num_3 = 0;

	while(scanf("%d",&num_2) != EOF)
	{
		printf("%d: ",num_1);

		for(num_3 = 1; num_3 <= num_2; num_3++)
		{
			printf("@");
		}
		printf("\n");
		num_1++;
	}
	
	return 0;
}
