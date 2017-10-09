#include <stdio.h>
#include <string.h>

int main()
{
	char word[20];
	int len;
	int i;
	int uppercase = 0;

	printf("Word: ");
	scanf("%s", word);

	printf("Word is %s\n", word);

	len = strlen( word );
	printf("Length is %d\n", len);
	for(i = 0; i < len; ++i)
	{
		if( word[i] >= 'A' && word[i]  <= 'Z')
		{
			uppercase++;
		}
	}
	printf("%d upper case characters\n", uppercase);

	return 0;
}
