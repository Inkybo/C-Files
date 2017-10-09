#include <stdio.h>

void dashes(int many);
int Add(int x, int y);
int mult(int x, int y);
float FAvg(int x, int y);
int Big(int x, int y);

int main()
{
	int n1 = 8;
	int n2 = 6;
	int total;
	int result;
	float a;

	dashes(30);
	total = Add(n1, n2);
	printf("Sum is %d\n", total);
	dashes(30);
	result = mult(n1, n2);
	printf("Product is %d\n", result);
	dashes(30);
	a = FAvg(n1, n2);
	printf("Real average is %.2f\n", a);
	dashes(30);
	result = Big(n1, n2);
	printf("Larger value is %d\n", result);
	dashes(30);

	return 0;
}
void dashes(int many)
{
	int i;
	for(i= 0; i < many; ++i)
	{
		printf("-");
	}
	printf("\n");
}
int mult(int x, int y)
{
	int p;
	p = x * y;
	return p;
}
int Add(int x, int y)
{
	int s;
	s = x + y;
	return s;
}
float FAvg(int x, int y)
{
	int sum;
	float avg;

	sum = Add(x, y);
	avg = sum / 2.0;

	return avg;
}
int Big(int x, int y)
{
	if(x >= y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
