#include <stdio.h>
#include <string.h>
void check(char inputstring[])
{
	int num_1,val_1,val_2,val_3,count = 0;
	for(num_1 = 0; num_1 < strlen(inputstring); num_1++)
	{
		val_1 = inputstring[num_1];
		val_2 = inputstring[num_1-1];
		val_2 = inputstring[num_1+1];
		if((val_2 - val_1) <= 2 || (val_2 - val_1 <= 2))
			count++;
	}
	if(count == strlen(inputstring))
		printf("yes\n");
	else
		printf("no\n");
}
int main()
{
	char inputstring[50];
	int j, k, len, res, ok = 0;
	// Loop to read input; because of input it will get
	// end of file at the end of the file.  If testing
	// interactively use   ctrl-d   to send end of file signal
	while ( fgets( inputstring, 50, stdin ) )
	{
		len = strlen( inputstring ) ;
		len--;
		inputstring[ len ] = '\0';
		check(inputstring);
	}
	return 0;
}
