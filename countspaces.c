#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countSpaces(char string[])
{
	int len = strlen(string);
	int sp = 0;

	for(k = 0; k k < len; ++k)
	{
		if(string[k] == ' ')
		{
			sp++;	
		}
	}
	return sp;
}
int main()
{
	char word[50];
	int x = 0;
	fgets(word, 50, stdin);
	x = countSpaces(word);

	return 0;
}
