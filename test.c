#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int twice( int x )
{
	int num1 = 0;

	num1 = x * 2;

	return num1;
}

int square( int x )//exponents by 2
{
	int num_1 = 0;

	num_1 = x*x;

	return num_1;
}

void countUp( int start, int end )
{
	int k;

	for ( k = start; k <= end; k++ )
	{
		printf("%d\n",k);
	}
}

void countDown( int start, int end )
{
	int k;

	for( k = end; k >= start; k-- )
	{
		printf("%d\n", k);
	}
}

void countBetween( int start, int end )
{
  int k,j;

	if ( start < end )
    {
		for (k = start; k <= end; k++)
			printf("%d\n",k);
    }

	if ( end > start )
    {
		for (k = end; k >= start; k--)
			printf("%d\n",k);
    }
}

int isLowercase( char c )
{
	int j,k;

	if (c <= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isUppercase( char c )
{
	int j, k;

	if (c >= 'A' && c <= 'Z')
    {
		return 1;
    }
	else
    {
		return 0;
    }
}

int isLetter( char c )
{
	if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void alternateCase( char str[] )
{
	int j,k;

	for ( k = 0; k < strlen(str); k++ )
	{
		if ( str[k] <= 'a' && str[k] >= 'z' )
		{
			str[k] = str[k] + ( 'A' - 'a' );
		}

		if ( str[k] >= 'A' && str[k] >= 'Z' )
		{
			str[k] = str[k] + ('a' - 'A');
		}
	}
	printf("%s\n",str);
}

int isOnlyLetters( char str[] )
{
	int k = 0;
	int lcount = 0;
	int offcount = 0;

	for(k = 0; k < strlen(str); k++)
	{
		if(str[k] >= 'a' && str[k] <= 'z'|| str[k] >= 'A' && str[k] <= 'Z')
		{
			lcount++;
		}
		else
		{
			offcount++;
		}
	}

	if(offcount > 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
        int x, y, p, q, r;
        char str[20];
        int k;
        char c;

        srand( time(NULL) );

        x = rand() % 20;
        y = rand() % 20;
        printf("x: %d    y: %d\n", x, y);
        p = twice(x);
        q = square(x);
        printf(" x2 is %d   ^2 is %d\n", p, q);

        countBetween(x, y);

        q = rand() % 14 + 4;
        for ( k = 0; k < q; ++k )
        {
                // 48 to 125     78 values
                c = rand() % 78 + 48;
                str[k] = c;
        }
        str[k] = '\0';

        printf("String is %s\n", str);
        printf("Len: %d\n", q);

        r = isOnlyLetters( str );
        if ( r == 1 )
                printf("Only letters\n");
        else
                printf("Not just letters\n");

        return 0;
}
