#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare(char word_1[], char word_2[])
{
	int num_1 = 0;
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

	for(num_1 = 0; num_1 < 25; num_1++)
	{
	//debug
		//printf("%c-----%d\n", word_1[num_1], word_1[num_1]);
		//printf("%c-----%d\n", word_2[num_1], word_2[num_1]);
		//printf("the sum is::::::::::::::::: %d\n", sum);
		//printf("%d\n", l);
		//printf("-----------------------------------------------\n");

			//if(word_1[num_1] == word_2[num_1])
			//{
				if(word_1[num_1] >= 'a' && word_1[num_1] <= 'z' && word_2[num_1] >= 'a'&& word_2[num_1] <='z')
				{
					switch(word_1[num_1])
                    {
                        case 'a':
                        {
                            if(a == 0)
                                sum++;
                                a = 1;
                           break;
                        }
                        case 'b':
                        {
                            if(b == 0)
                                sum++;
                                b = 1;
                           break;
                        }
                        case 'c':
                        {
                            if(c == 0)
                                sum++;
                                c = 1;
                           break;
                        }
                        case 'd':
                        {
                            if(d == 0)
                                sum++;
                                d = 1;
                           break;
                        }
                        case 'e':
                        {
                            if(e == 0)
                                sum++;
                                e = 1;
                           break;
                          }
                        case 'f':
                        {
                            if(f == 0)
                                sum++;
                                f = 1;
                           break;
                        }
                        case 'g':
                        {
                            if(g == 0)
                                sum++;
                                g = 1;
                           break;
                        }
                        case 'h':
                        {
                            if(h == 0)
                                sum++;
                                h = 1;
                           break;
                        }
                        case 'i':
                        {
                            if(i == 0)
                                sum++;
                                i = 1;
                           break;
                        }
                        case 'j':
                        {
                            if(j == 0)
                                sum++;
                                j = 1;
                           break;
                        }
                        case 'k':
                        {
                            if(k == 0)
                                sum++;
                                k = 1;
                           break;
                        }
                        case 'l':
                        {
                            if(l == 0)
                                sum++;
                                l = 1;
                           break;
                        }
                        case 'm':
                        {
                            if(m == 0)
                                sum++;
                                m = 1;
                           break;
                        }
                        case 'n':
                        {
                            if(n == 0)
                                sum++;
                                n = 1;
                           break;
                        }
                        case 'o':
                        {
                            if(o == 0)
                                sum++;
                                o = 1;
                           break;
                        }
                        case 'p':
                        {
                            if(p == 0)
                                sum++;
                                p = 1;
                           break;
                        }
                        case 'q':
                        {
                            if(q == 0)
                                sum++;
                                q = 1;
                           break;
                        }
                        case 'r':
                        {
                            if(r == 0)
                                sum++;
                                r = 1;
                           break;
                        }
                        case 's':
                        {
                            if(s == 0)
                                sum++;
                                s = 1;
                           break;
                        }
                        case 't':
                        {
                            if(t == 0)
                                sum++;
                                t = 1;
                           break;
                        }
                        case 'u':
                        {
                            if(u == 0)
                                sum++;
                                u = 1;
                           break;
                        }
                        case 'v':
                        {
                            if(v == 0)
                                sum++;
                                v = 1;
                           break;
                        }
                        case 'w':
                        {
                            if(w == 0)
                                sum++;
                                w = 1;
                           break;
                        }
                        case 'x':
                        {
                            if(x == 0)
                                sum++;
                                x = 1;
                           break;
                        }
                        case 'y':
                        {
                            if(y == 0)
                                sum++;
                                y = 1;
                           break;
                        }
                        case 'z':
                        {
                            if(z == 0)
                                sum++;
                                z = 1;
                           break;
                        }
                    }
				}
			//}
	}
	printf("there are %d letter matches\n", sum);
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
