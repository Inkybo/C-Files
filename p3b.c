
#include <stdio.h>

int main()
{
	int age = 1;
	int amount = 0;
	int minor = 0;
	int retire = 0;

        printf("enter an age: ");
        scanf("%d", &age);


	while(age >= 0 )
	{
		printf("enter an age: ");
		scanf("%d", &age);
		if(age < 18)
		{
			minor = minor + 1;
		}
		if(age >= 65)
		{
			retire = retire + 1;
		}

		amount = amount + 1;
	}
	amount = amount - 1;
	//minor = minor - 1;

	printf("======================== \n");
	printf("%d ages were entered \n", amount);
	printf("%d are minors \n", minor);
	printf("%d could retire \n", retire);
        printf("======================== \n");

	return 0;
}
