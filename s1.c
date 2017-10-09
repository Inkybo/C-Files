#include <stdio.h>

int main()
{
	char name[20];
	char colour[15];

	printf("enter first name: ");
	scanf("%s", name);

	printf("Favorite colour: ");
	scanf("%s", colour);

	printf("%s likes the color %s \n", name, colour);
	return 0;
}
