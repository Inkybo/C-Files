#include <stdio.h>

int main()
{
	char choice;
	char letter;
	char junk;
	int loops;
	int num;

	printf("what kind of character: L, U, or D: ");
	scanf("%c", &choice);
    scanf("%c", &junk);

	srand(time(NULL));

	while(choice != 'L' && choice != 'U' && choice != 'D')
	{
		printf("invalid answer: try again ");
		scanf("%c", &choice);
    	scanf("%c", &junk);
	}
		if(choice == 'L' || choice == 'U' || choice == 'D')
		{
			if(choice == 'L')
			{
				for(loops = 1;loops <= 3; loops++)
				{
					num = rand() % 25 + 1;
					letter = 'a' + num;
					printf("%c", letter);
					printf("\n");
			}
    		if(choice == 'U')
    		{
        		for(loops = 1;loops <= 3; loops++)
        		{
            		num = rand() % 25 + 1;
            		letter = 'A' + num;
            		printf("%c", letter);
            		//printf("\n");
        		}
    		}
    		if(choice == 'D')
    		{
        		for(loops = 1;loops <= 3; loops++)
        		{
            		num = rand() % 9 + 1;
            		printf("%d", num);
            		//printf("\n");
        		}
    		}
		}
	return 0;
}
