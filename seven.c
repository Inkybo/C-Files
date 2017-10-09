#include <stdio.h>

int main()
{
	int num;
	int count7;
	int loop;

	for (loop = 0 ; loop < 10 ; loop++ )
	{
		printf("Enter a number: ");
		scanf("%d", &num);

		if (num == 7)
		{
			count7 = count7 + 1;
		}
	}
	printf("you entered 7: %d times \n", count7);

	return 0;
}

