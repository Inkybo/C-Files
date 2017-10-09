#include <stdio.h>

int main()
{
	int odd = 0;
	int even = 0;
	int roll = 0;
	int count = 0;
	int amount = 0;

	srand(time(NULL));

	for(amount = 7; amount > 0; amount = amount - 1)
	{
		roll = rand() %  15 + 1;

		if(roll % 2 == 0)
		{
			printf("%d ", roll);
			for(roll = roll; roll > 0; roll = roll - 1)
			{
				printf("@");
			}
            printf("\n");
		}
        if(roll % 2 == 1)
        {
            printf("%d ", roll);
			for(roll = roll ; roll > 0; roll = roll - 1)
			{
				printf("=");
			}
            printf("\n");
        }
	}
	return 0;
}

