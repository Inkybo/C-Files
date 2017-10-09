#include <stdio.h>
#include <string.h>

int main()
{
	char line[100];
	char out[100];
	int len;
	int k;
	char c;

	printf("Enter a phrase: ");
	fgets( line, 100, stdin);

	// remove trailing newline
	len = strlen( line );
	len--;
	line[len] = '\0';

	for(k = 0; k < len; ++k)
	{
		c = line[k];

		/*
		if(c == 'a')
			c = '@';
		else if(c == 'o')
			c = '0';
		*/
		switch(c)
		{
			case 'a': c = '@'; break;
			case 'o': c = '0'; break;
			case 's': c = '$'; break;
		}
		out[len] = '\0';
	}
	printf("New sting: %s\n", out);

	return 0;
}
