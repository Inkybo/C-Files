#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row = 0;
	int column = 0;
	int num_1 = 1;
	int array[3][5];
	int array_2[3][5];

// first array
	printf("---------------\n");
	for(row = 0; row < 3; row++)
	{
		for(column = 0; column < 5; column++)
		{
			array[row][column] = num_1;
			num_1++;
		}
	}

    for(row = 0; row < 3; row++)
    {
        for(column = 0; column < 5; column++)
        {
			printf("%2d ", array[row][column]);
        }
		printf("\n");
    }
    printf("---------------\n");
// second array
	printf("---------------\n");

	num_1 = 1;

    for(column = 0; column < 5; column++)
    {
        for(row = 0; row < 3; row++)
        {
            array[row][column] = num_1;
            num_1++;
        }
    }

    for(row = 0; row < 3; row++)
    {
        for(column = 0; column < 5; column++)
        {
            printf("%2d ", array[row][column]);
        }
        printf("\n");
    }
   printf("---------------\n");

	return 0;
}
