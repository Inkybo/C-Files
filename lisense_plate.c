#include <stdio.h>

int main()
{
	int num_1 = 0;
	int num_2 = 0;
	int num_3 = 0;
	char letter_1 = 0;
	char letter_2 = 0;
	char letter_3 = 0;

	srand(time(NULL));

	num_1 = rand()% 9 + 1;
	num_2 = rand()% 9 + 1;
	num_3 = rand()% 9 + 1;

	letter_1 = 'A' + rand() % 26 + 1;
	letter_2 = 'A' + rand() % 26 + 1;
	letter_3 = 'A' + rand() % 26 + 1;

	printf("-----------------\n");
	printf("%c%c%c  %d%d%d\n", letter_1, letter_2, letter_3, num_1, num_2, num_3);
	printf("-----------------\n");

	return 0;
}
