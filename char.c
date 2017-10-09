#include <stdio.h>

int main()
{
	char letter;
	char second;
	char junk;
	int num_to_char = 0;

//	printf("Enter a character: ");
//	scanf("%c", &letter);
//	scanf("%c", &junk); //read the \n newline after the char
//	printf("You typed: %c \n", letter);
//	printf("In ASCII: %d \n", letter);

//	printf("Enter another character: ");
//	scanf("%c", &second);
//	scanf("%c", &junk); //read the \n newline after the char
//	printf("You typed: %c \n", second);
//    printf("In ASCII: %d \n", second);

	printf("Enter a ASCII value: ");
	scanf("%d", &num_to_char);
	printf("you typed: %d \n", num_to_char);
	printf("ASCII chracter: %c \n", num_to_char);

	return 0;
}
