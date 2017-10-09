#include <stdio.h>

int main()
{
	int age;
	int years;

	printf("How old are you? ");
	scanf("%d", &age);

	if(age >= 65)
	{
		printf("you should be retired by now! \n");
	}
	else
	{
		years = 65 - age;
		printf("you shold be able to retire in %d years \n", years);
	}

	return 0;
}
