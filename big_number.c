#include <stdio.h>

int main()
{
	int bignum;

	printf("Enter a number over 25: ");
	scanf("%d", &bignum);

	while (bignum <= 25)
	{
		printf("try again: ");
		scanf("%d", &bignum);
	}
	if (bignum > 25)
	{
		printf("Number is %d\n", bignum);
	}

	return 0;
}
