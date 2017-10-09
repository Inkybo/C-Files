#include <stdio.h>
#include <string.h>

void compare(char word_1[], char word_2[])
{
   int num_1 = 0;
   int num_2 = 0;
   int num_3 = 0;
   int num_4 = 0;
   int count[26] = {0};
   int count_2[26] = {0};
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
   int sum = 0;

   while (word_1[num_1] != '\0')
   {
      if (word_1[num_1] >= 'a' && word_1[num_1] <= 'z')
         count[word_1[num_1]-'a']++;

      num_1++;
   }

   while (word_2[num_2] != '\0')
   {
      if (word_2[num_2] >= 'a' && word_2[num_2] <= 'z')
         count_2[word_2[num_2]-'a']++;

      num_2++;
   }

for (num_3 = 0; num_3 < 26; num_3++)
   { 
      if (count[num_3] != 0 && count_2[num_4] != 0)
         printf("%c occurs %d times in the entered string.\n",num_3 +'a',count[num_3]);
	if(count[num_3] > 1)
	{
		sum++;
	}
   }

for (num_4 = 0; num_4 < 26; num_4++)
   {
      if (count_2[num_4] != 0 && count[num_3] != 0)
         printf("%c occurs %d times in the entered string.\n",num_4+'a',count_2[num_4]);
	if(count_2[num_4] > 1)
	{
		sum++;
	}
   }
	printf("there are %d matches\n", sum);
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
        //      printf("--------\n");
        //      printf("%c\n", word_1[k]);
        //      printf("%c\n", word_2[k]);
        //      printf("--------\n");
        //}

        compare(word_1, word_2);
        return 0;
}
