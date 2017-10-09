#include <stdio.h>

int main()
{
	int howmany;
	int r;
	char letter;
	char second;
	char junk;

	printf("How many times: ");
	scanf("%d", &howmany);

	for(r = 1; r <= howmany; ++ r)
	{
		printf("Enter a character: ");
		scanf("%c%c", &letter, &junk);

    	printf("You typed: %c \n", second);
    	printf("In ASCII: %d \n", second);
	}
	return 0;
}
