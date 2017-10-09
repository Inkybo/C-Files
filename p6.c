#include <stdio.h>

int main()
{
	int num_1 = 0;
	int num_2 = 0;
	int num_3 = 0;
	int set = 20;

	srand(time(NULL));

		for(set = set; set > 0; set = set - 1)
		{
            num_1 = rand()% 25 + 1;
            num_2 = rand()% 25 + 1;
            num_3 = rand()% 25 + 1;

    			while(num_1 == num_2 || num_1 == num_3 || num_2 == num_3)
    			{
            		num_1 = rand()% 25 + 1;
            		num_2 = rand()% 25 + 1;
            		num_3 = rand()% 25 + 1;
				}

			printf(" %2d", num_1);
        	printf(" %2d", num_2);
        	printf(" %2d", num_3);
			printf("\n");
		}
	return 0;
}
