#include <stdio.h>

int cool(num)
{
	if(num % 4 == 0 && num % 7 == 0)
	{
		return 0;
	}
	else if(num % 4 == 0)
	{
		return 1;
	}
	else if(num % 7 ==0)
	{
		return 1;
	}
}

int main()
{
	int num;
	int num_2;
	int counter;
	int range;

	for(counter = 1; counter < 301; counter++)
	{
		num = counter;
		num_2 = cool(num);
		if(num_2 == 1)
		{
			range++; 
		}
		printf("%d\n", range);
	}
	return 0;
}
