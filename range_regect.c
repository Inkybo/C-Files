#include <stdio.h>

int main()
{
	int num =  0;

	printf("Enter a nuber: ");
	scanf("%d", &num);

	if(num >= 18 && num <= 36)
	{
		printf("accepted");
	}
	else
	{
		printf("rejected");
	}
	return 0;
}

