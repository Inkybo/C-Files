#include <stdio.h>

int main()
{
	int age;

	printf("How old are you? ");
	scanf("%d", &age);

	//detrmines age for alcohol
	if(age >= 21)
	{
		printf("can legally consume alcohol \n");
	}
	else
	{
		printf("can not consume alcohol \n");
	}

	//dterimes age for voting
	if(age >= 18)
	{
		printf("can vote \n");
	}
	else
	{
		printf("cant vote \n");
	}

	return 0;
}
