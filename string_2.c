#include <stdio.h>
#include <string.h>

int character_count(char str[], int lenmax)//includes spaces
{
	int len;
	len = strlen(str);
    len--;
    str[len] = '\0';

	return len;
}
int num_count(char str[], int lenmax)
{
	int i;
	int len;
	int total = 0;
    len = strlen(str);
    str[len] = '\0';

	for(i = 0; i < len; ++i)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			total = total + 1;
		}
	}
	return total;
}
int space_count(char str[], int lenmax)
{
	int i;
    int len;
	int total_space = 0;
    len = strlen(str);
    str[len] = '\0';
    for(i = 0; i < len; ++i)
    {
        if(str[i] == ' ')
        {
            total_space = total_space + 1;
        }
    }
	return total_space;
}
int alphanum_count(char str[], int lenmax)
{
	int i;
	int len;
	int total_all = 0;
    len = strlen(str);
    str[len] = '\0';
    for(i = 0; i < len; ++i)
    {
        if(str[i] >= 'A' && str[i] <= 'Z' ||  str[i] >= 'a' && str[i] <= 'z' ||  str[i] >= '0' && str[i] <= '9')
        {
            total_all = total_all + 1;
        }
    }

	return total_all;
}
int main()
{
	char text[1024];
	int len;
	int num_1 = 0;
	int num_2 = 0;
	int num_3 = 0;
	int num_4 = 0;

	printf("enter a word/phrase: \n");
	fgets( text, 1024, stdin);
	num_1 = character_count(text, 1024);
	num_2 = num_count(text, 1024);
	num_3 = space_count(text, 1024);
	num_4 = alphanum_count(text, 1024);

	printf("%d : string length\n", num_1);
	printf("%d : numbers\n", num_2);
	printf("%d : spaces\n", num_3);
	printf("%d : alphanumeric \n", num_4);

	return 0;
}
