#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int L2P( char c )
{
	// Carson, Riley, Dominic
	int out;
	if ( c >= 'a' && c <= 'z' ) {
		out = c -  'a' + 1 ;
	} else if ( c >= 'A' && c <= 'Z' ) {
		out = c - ( 'A' - 1 );
	} else {
		return 0;
	}
	return out;
}

char P2L( int p )
{
    int c;
    if ( p >= 1 && p <= 26 )
        c = 'a' + p - 1;
    else
        c = '?';
    return c;
}




int readLine(char line[])
{
  int len = 0;
  
  fgets(line,200,stdin);
  
  len = strlen(line);
  len--;
  line[len] = '\0';
  
  return len;
}





void updateFreq( int F[27], char line[], int len )
{
    int k, p;

    for ( k = 0; k < len; ++k )
    {
        p = L2P( line[k] );
		if ( p > 0 )
        	F[p] = F[p] + 1;
    }
}



void showFreq( int F[27] )
{
    char l = 'a';
	int i;

    for(i = 1; i <= 26; i++){
        int a = F[i];
        if(F[i] > 0)
            printf("%c: %d\n", l, a);
        l++;
    }
}




int main()
{
	char str[200];
	int freq[27] = {0};
	int sz, k;
	int num;
	char let;

	sz = readLine( str );
	while ( sz > 0 )
	{
		updateFreq( freq, str, sz );
		sz = readLine( str );
	} 

	showFreq( freq );

	return 0;
}





