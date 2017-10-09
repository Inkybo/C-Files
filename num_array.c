#include <stdio.h>
#include <stdlib.h>

void printArray(int A[], int n)
{
	int i =0;

	for(i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}

void fillArray(int A[], int n, int h)
{
	int i = 0;

	for(i = 0; i < n; i++)
	{
		A[i] = rand() % h;
	}
}

int manyAbove(int A[], int n, int val)
{
	int i = 0;
	int over = 0;

	for(i = 0; i < n; i++)
	{
		if(A[i] > val)
		{
			over++;
		}
	}

	return over;
}

int main()
{
	int numList[50];
	int above = 0;

	fillArray(numList, 10, 25);
	printArray(numList, 10);

	above = manyAbove(numList, 10, 15);
	printf("%d values over 15\n", above);

	return 0;
}
