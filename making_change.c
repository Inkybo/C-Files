#include <stdio.h>

int main()
{
	int amount;
	int quarter = 0;
	int dime = 0;
	int nickel = 0;
	int penny = 0;
	int k = 0;

	printf("enter amount: ");
	scanf("%d", &amount);

		quarter = amount / 25;
		amount = amount - 25 * quarter;

		dime = amount / 10;
		amount = amount - 10 * dime;

		nickel = amount / 5;
		amount = amount - 5 * nickel;

		penny = amount / 1;

	printf("Q: %d  D: %d  N: %d  P: %d\n", quarter, dime, nickel, penny);

	for(k = 0; k < quarter; k++)
	{
		printf("Q");
	}
	for(k = 0; k < dime; k++)
	{
		printf("D");
	}
	for(k = 0; k < nickel; k++)
	{
		printf("N");
	}
	for(k = 0; k < penny; k++)
	{
		printf("P");
	}
	printf("\n");
	return 0;
}
