#include <stdio.h>
#include <string.h>

int main()
{
	char c;
	char d;
	char e;
	int num;
	char str[5] = {0};
	char word[5];

	printf("enter 3 letter word:");
	scanf("%s", word );

	num = 1;
	for(c = 'a'; c <='z'; ++c)
	{
		str[0] = c;
		for(d = 'a'; d <= 'z'; ++d)
		{
			str[1] = d;
			for(e = 'a'; e <= 'z'; ++e)
			{
				str[2] = e;
				//printf("%3d %s\n", num, str);
				if(strcmp(str, word) == 0)
				{
					printf("%3d %s\n", num, str);
				}
				num = num + 1;
			}
		}
	}

	return 0;
}
