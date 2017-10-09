// Introduction to Functions
// 10/20/16

#include <stdio.h>
#include <string.h>

// say hi
void say_hi()
{
	printf("hi\n");
	printf("\n");
}

// N dashes
void dashes( int N )
{
	int i;
	for (i = 0; i < N; ++i)
	{
		printf("-");
	}
	printf("\n");
}

// sum 1 to N
int sumto(int N)
{
	int sum = 0;
	int k;

	for(k = 1; k <= N; ++k)
	{
		sum = sum + k;
	}
	return sum;
}

// roll a 6-sided dice
int roll()
{
	int r;
	r = rand()% 6 + 1;

	return r;
}

// get a random upper-case letter
char getUpper()
{
	char c;
	c = 'A' + rand() % 26;

	return c;
}

// draw a box that is N x N @
void box(int N)
{
	int r;
	int c;

	for(r = 0; r < N; ++r)
	{
		for(c = 0; c < N; ++c)
		{
			printf("@");
		}
		printf("\n");
	}
}

int main()
{
	int res, i;
	char let;
	int d;
	int e;
	int x;

	srand(time(NULL));

	say_hi();
	dashes(10);
	dashes(3);
	dashes(30);
	d = roll();
	e = roll();
	printf("Rolled: %d %d\n", d, e);

	printf("find sum up to: ");
	scanf("%d", &x);

	res = sumto(x);
	printf("Sum 1 to 6 is %d\n", res);
	dashes(10);
	for (i = 0; i < 5; ++i)
	{
		let = getUpper();
		printf("%c ", let);
	}
	printf("\n");
	dashes(10);
	box(5);
	dashes(10);
	box(3);

	return 0;
}
