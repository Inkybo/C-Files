#include <stdio.h>
#include <string.h>

void fillList(int arr[], int sz, int high)
{
	int k;
	for(k = 0; k < sz; ++k)
	{
		arr[k] = rand() % high + 1;
	}
}
void printList(int arr[], int sz)
{
	int k;
	for(k = 0;k < sz; ++k)
	{
		printf("%2d ", arr[k]);
	}
	printf("\n");
}
int countFreq(int ar[], int sz, int target)
{
	int many = 0;
	int k;

	for(k = 0; k < sz; ++k)
	{
		if(ar[k] == target)
		{
			many++;
		}
	}

	return many;
}

int main()
{
	int A[10];
	int N = 10;
	int dice[5];

	fillList(A, N, 50);
	printList(A, N);
	fillList(dice, 5, 6);
	printList(dice, 5);

	res = countFreq(dice, 5, 2);
	printf("%d 2s in the list\n");

	return 0;
}
