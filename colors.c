#include <stdio.h>

int main()
{
	int rd = 0;
	int roll = 0;
	int rs = 0;
	int pick = 0;
	int blue = 0;

	do
	{
		printf("(1)Random  (2)Seed\n");
		scanf("%d", &pick);
	}
	while(pick != 1 && pick != 2);
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

		switch(rd)
		{
		case 1:
			printf("Red\n");
			break;
		case 2:
			printf("Green\n");
			break;
    	case 3:
        	printf("Blue\n");
			break;
    	case 4:
        	printf("Yellow\n");
			break;
    	case 5:
        	printf("Red\n");
			break;
    	case 6:
        	printf("Orange\n");
			break;
    	case 7:
        	printf("Purple\n");
			break;
		
		}
	}
	return 0;
}
