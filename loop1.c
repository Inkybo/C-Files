// While & For loop examples
//   print numbers 1 to N

#include <stdio.h>

int main()
{
	int i, N;

	printf("Count 1 to ?: ");
	scanf("%d", &N);

	printf("-- While --\n");
	i = 1;
	while ( i <= N )
	{
		printf("%d\n", i);
		i = i + 1;
	}

	printf("--  For  --\n");

	for ( i = 1; i <= N; i = i + 1 )
	{
		printf("%d\n", i);
	}

	return 0;
}
