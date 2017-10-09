#include <stdio.h>
#include <string.h>

int main()
{
	char mystr[50];
	char revstr[50];
	int len;
	int k;
	int p = 0;

	printf("--- Amazing String Operations ---\n");

	// get input
	printf("Enter string: ");
	fgets(mystr, 50, stdin);

	// clean up string
	len = strlen(mystr);
	len--;
	mystr[len] = '\0';

	for(k = 0; k < len; k++)
	{
		printf("%c", mystr[k]);
		if(k < len - 1)
		{
			printf(".");
		}
	}
	printf("\n");

	// p moves left to right in revstr
	// k moves right to left in mystr
	for(k = len-1; k >= 0; --k)
	{
		revstr[p] = mystr[k];
		p++;
	}
	revstr[len] = '\0';
	printf("Degbug rev is: %s\n", revstr);

	if(strcmp(mystr, revstr) == 0)
	{
		printf("Yes, is palindrome\n");
	}
	else
	{
		printf("No, not palidrome\n");
	}

	return 0;
}
