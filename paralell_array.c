#include <stdio.h>

int main()
{
	// product name; at most 25 chars
	// product price; floating point value
	// top 10 products

	float price[10];
	char name[10][25];
	int p = 0;

	for(p = 0; p < 3; p++)
	{
		printf("Product name: ");
		scanf("%s", name[p]);
		printf("Product price: ");
		scanf("%f", &price[p]);
	}

	for(p = 0; p < 3; p++)
	{
		printf("%s\t$%.2f \n", name[p], price[p]);
	}

	return 0;
}
