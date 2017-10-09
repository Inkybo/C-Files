#include <stdio.h>

int main()
{
	int rd = 0;
	int roll = 0;
	int rs = 0;
	int pick = 0;
	int blue = 0;

	printf("(1)Random  (2)Seed\n");
	scanf("%d", &pick);

	while(pick != 1 && pick != 2)
	{
    	printf("(1)Random  (2)Seed\n");
		scanf("%d", &pick);
	}

	if(pick == 1)
	{
		srand(time(NULL));
	}
	else
	{
		printf("Seed: ");
		scanf("%d", &rs);
		srand(rs);
	}

	for(roll = 1; roll <= 5; ++roll)
	{
		rd = rand()% 7 + 1;
		//printf("%d \n", rb);

		if(rd == 1)
		{
			printf("Red\n");
		}
		else if(rd == 2)
		{
			printf("Green\n");
		}
    	else if(rd == 3)
    	{
        	printf("Blue\n");
			++blue;
    	}
    	else if(rd == 4)
    	{
        	printf("Yellow\n");
    	}
    	else if(rd == 5)
    	{
        	printf("Red\n");
    	}
    	else if(rd == 6)
    	{
        	printf("Orange\n");
    	}
    	else if(rd == 7)
    	{
        	printf("Purple\n");
    	}
	}

	printf("%d blue rolls\n", blue);
	return 0;
}
