#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row = 0;
	int column = 0;
	int array[3][5];

	for(row = 0; row < 3; row++)
	{
		for(column = 0; column < 5; column++)
		{
			array[row][column] = rand() % 20 + 1;
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

	return 0;
}
