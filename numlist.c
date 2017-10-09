#include <stdio.h>

int main()
{
	int mylist[ 5 ];
	int x;
	int k;

	x = 11;
	mylist[2] = 13;

	// assign random values to the array elements
	for(k = 0; k < 5; ++k)
	{
		x = rand() % 20;
		mylist[ k ] = x;
	}

	// print out the array, 1 value per line
	for(k= 0;k < 5; ++k)
	{
		printf("%d\n", mylist[k] );
	}
	// print out the array of 1 line
    for(k= 0;k < 5; ++k)
    {
        printf("%2d ", mylist[k] );
    }
	printf("\n");
	// print out the numbers in reverse order on one line
    for(k= 0;k < 5; --k)
    {
        printf("%2d ", mylist[k] );
    }
	printf("\n");

	
        printf("1234567890%c\\", choice);
        printf("invalid answer: try again ");
        scanf("%c ", &choice);
        printf("1234567890%c\\", choice);


	return 0;
}
