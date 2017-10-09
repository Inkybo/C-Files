// make this behave as much like our previous
//   linked list examples as possible.

//  Implement the list operation on an array
//    - but use header note and the same functions

#include <stdio.h>
#include <stdlib.h>

struct header_type
{
	int first;
	int last;
	int len;
	int dat[100];
};

typedef struct header_type *list;


int listLength( list L )
{
	return L->len;
}


void printList( list L )
{
}

void insertFront( list L, int num )
{
}


void insertBack( list L, int num )
{
}

void removeFront( list L )
{
}

void removeBack( list L )
{
}


int isEmpty( list L )
{
}

int isInList( list L, int x )
{
}

// use -1 return for not in list
int getLoc( list L, int x )
{
}

int maxVal( list L )
{
}

int maxLoc( list L )
{
}


void insertAfter( list L, int loc, int num )
{
}

void removeThisOne( list L, int loc )
{
}


list makeList()
{
	list newL;

	newL = malloc( sizeof( struct header_type ));
	newL->first = 0; 
	newL->last = 0; 
	newL->len = 0;

	return newL;
}

int main()
{
	list AList;
	int k, x;

	AList = makeList();

	insertFront( AList, 12 );	
	//insertBack( AList, 12 );	
	printList( AList );
	printf("Len %d\n", listLength( AList ) );

	// Insert 5 random values (under 100)
	// try at front and back to test your code
	for ( k = 0; k < 5; ++k )
	{
		x = rand() % 100;
		printf("Adding %d\n", x);
		insertFront( AList, x );
		//insertBack( AList, x );
		printList( AList );
	}

	// Print the list

	printList( AList );

	// Remove  all the items
	// try at front and back to test your code
	while ( AList->len > 0 )
	{
		removeFront( AList );
		//removeBack( AList );
		printList( AList );
	}

	return 0;
}
