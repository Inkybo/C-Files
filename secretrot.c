#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int len = 0;
	int k = 0;
	char c;

	printf("Enter a phrase, no spaces: ");
	scanf("%s", str);

	printf("Start: %s\n", str);

	len = strlen(str);

	for(k = 0; k < len; ++k)
	{
		c = str[k];
		if(c >= 'a' && c <= 'z')
		{
			c = 'A' + (c - 'a');
		}
		if(c >= 'A' && c <= 'Z')
		{
			if(c == 'Z')
			{
				c = 'A';
			}
			else
		}
		printf("%c", c);
	}
	printf("\n");

	return 0;
}
