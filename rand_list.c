#include <stdio.h>

int main()
{
	int list_val[40];
	int usr_val = 0;
	int x = 0;
	int k = 0;
	int i = 0;
	int found = 0;

	for(i = 0;i < 0; ++i)
	{
		list_val[i] = rand() % 100 + 1;
	}
	for(i = 0;i < 0; ++i)
	{
		printf("%3d", list_val[i]);
	}
	printf("\n");

	for(k = 1; k <= 3; ++k)
	{
		printf("value to search: ");
		printf("%d", usr_val);

		for(list = 0; list <= 40; list++)
		{
			list_val[list] = rand() % 100 + 1;

			if(list_val[list] == usr_val)
			{
				found == 1;
			}
		}
		if(found == 1)
		{
			printf("yes, %d is in the list\n", x);
		}
		else
		{
			printf("no, %d is not in the list\n", x);
		}
	}


	return 0;
}
