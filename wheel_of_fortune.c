#include <stdio.h>
#include <string.h>

int get_a_line(char str[], int maxlen)
{
	int len;
	fgets(str, maxlen, stdin);
	len = strlen(str);
	len--;
	str[len] = '\0';

	return len;
}

int main()
{
	// variables
	char secret[100];
	char quess[100];
	int k;
	int len;

	// get secret phrase
	printf("enter answer: ");
	fgets(secret, 100, stdin);
	len = get_a_line(secret, 100);

	// display hint: rstlne and _
	for(k = 0; k < len; ++k)
	{
		switch(secret[k])
		{
			case 'r': printf("%c ", secret[k]); break;
			case 's': printf("%c ", secret[k]); break;
			case 't': printf("%c ", secret[k]); break;
			case 'l': printf("%c ", secret[k]); break;
			case 'n': printf("%c ", secret[k]); break;
			case 'e': printf("%c ", secret[k]); break;
			default: printf("_ ");
		}
	}
	printf("\n");

	// ask for quess
	printf("what is your guess? ");
	fgets(guess, 100, stdin);
	len = get_a_line(guess, 100);

	// compare guess and secret answer
    if(strcmp(secret, guess)== 0)
    {
        printf("Winner!\n");
    }
    else
    {
        printf("Sorry it was: %s\n", secret);
    }

	return 0;
}
