#include <stdio.h>
#include <stdlib.h>
int main()
{

	char a = 'A';
	char z = 'Z';
	int x = 0;
	int i = 0;
	for(x = 1; x < 20; x++)
	{
	i = rand() % 25+65;
	}

	a = i;	
	printf("%c",a);
	return 0;
}
