#include <stdio.h>

int main()
{

	int arr[20];
	int k;

	for(k = 0; k < 10; ++k)
		arr[k] = k* k;
	for(k = 0; k < 4; k = k+2)
		printf("B[%d] = %d\n", k, arr[k]);

	return 0;
}

