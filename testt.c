#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *array[4];
	int x = 0;

	array[0] = "hello";
	array[1] = "red";
	array[2] = "blue";
	array[3] = "green";

	for(x = 0; x < 3; x++)
	{
		printf("%s", array[x]);
		printf("\n");
	}

	return 0;
}
