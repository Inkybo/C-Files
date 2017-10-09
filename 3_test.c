#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare(char word_1[], char word_2[])
{
	char longword[25];
	int num_1 = 0;
	int num_2 = 0;
	char arr[25];
	int sum = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;
    int o = 0;
    int p = 0;
    int q = 0;
    int r = 0;
    int s = 0;
    int t = 0;
    int u = 0;
    int v = 0;
    int w = 0;
    int x = 0;
    int y = 0;
    int z = 0;

	if(strlen(word_1) >= strlen(word_2))
	{
		strcpy(longword, word_1);
	}
	else
	{
		strcpy(longword, word_2);
	}
	for(num_1 = 0; num_1 < 25; num_1++)
	{
	//debug
		//printf("%c-----%d\n", word_1[num_1], word_1[num_1]);
		//printf("%c-----%d\n", word_2[num_1], word_2[num_1]);
		//printf("the sum is::::::::::::::::: %d\n", sum);
		//printf("%d\n", l);
		//printf("-----------------------------------------------\n");

			if(word_1[num_1] == word_2[num_1])
			{
				if(word_1[num_1] >= 'a' && word_1[num_1] <= 'z' &&  word_2[num_1] >= 'a'&& word_2[num_1] <='z')
				{
						for(num_2 = 0; num_2 < 25; num_2++)
						{
							if(longword[num_1] != arr[num_2])
							{
								strncpy(arr, longword[num_1], 1);
							}
						}
				}
			}
	}
	printf("there are %d letter matches\n", sum);
	//for(num_2 = 0; num_2 < 25; num_2++)
	//{
		printf("%s\n", arr);
	//}
}
int main()
{
	char word_1[25];
	char word_2[25];
	int len;
	int k = 0;

	printf("Enter a word: ");
	fgets(word_1, 25, stdin);

	printf("Enter a second word: ");
	fgets(word_2, 25, stdin);

	len = strlen(word_1);
	len--;
	word_1[len] = '\0';

	len = strlen(word_2);
	len--;
	word_2[len] = '\0';

	printf("%s\n", word_1);
	printf("%s\n", word_2);

	//for(k = 0; k < strlen(word_1); k++)
	//{
	//	printf("--------\n");
	//	printf("%c\n", word_1[k]);
	//	printf("%c\n", word_2[k]);
	//	printf("--------\n");
	//}

	compare(word_1, word_2);
	return 0;
}

