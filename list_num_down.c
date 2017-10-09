#include <stdio.h>

int main()
{
	int k;
	int i;
	int p;
	int j;
	char line[71];

	for(k = 10; k >= 1; --k)
	{
		for(i = k; i >= 1; --i)
		{
			printf(" ");
		}
		printf("%2d \n", k);
		usleep(1000000);
	}

	printf("*** BLAST OFF!!!! ***");

	for(k = 0; k < 71; ++k)
	{
		line[k] = ' ';
	}
	line[70] =  '\0';

	for(j = 1; j < 20; ++j)
	{
//    	for(k = 0; k < 71; ++k)
//    	{
//        	line[k] = ' ';
//    	}
		for(k = 0; k < 5; ++k)
		{
			p =	rand()% 70;
			line[p] = '*';
		}
		printf("%s\n", line);
		usleep(10000);
	}
	return 0;
}
