#include <stdio.h>
#include <string.h>

#define N    100

int number_of_same_characters( const char *, const char * );

int main()
{
    char first[N];
    char second[N];
    int  result = 0;    
    size_t n;

    printf( "Enter first string: ");
    fgets( first, N, stdin );

    n = strlen( first );
    if ( first[n - 1] == '\n' ) first[n - 1] = '\0';

    printf( "Enter second string: ");
    fgets( second, N, stdin );

    n = strlen( second );
    if ( second[n - 1] == '\n' ) second[n - 1] = '\0';

    result = number_of_same_characters( first, second );   

    printf( "%d\n", result );

    return 0;
}

int number_of_same_characters( const char *p, const char *q )
{
    int counter = 0;
    int i;

    for( i = 0; p[i] != '\0' && q[i] != '\0'; ++i )
    {
        if ( p[i] == q[i] ) ++counter;        
    }

    return counter;
}
