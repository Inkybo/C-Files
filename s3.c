#include <stdio.h>
#include <string.h>

int main()
{
	char word[20];
	int len;
	int i;

	printf("Word: ");
	scanf("%s", word);

	printf("Word is %s\n", word);

	len = strlen( word );
	printf("Length is %d\n", len);
	for(i = 0; i < len; ++i)
	{
		printf("%c\n", word[i]);
	}

	return 0;
}
