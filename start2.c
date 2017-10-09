// Linked List program 3

// Create a Header Node to represent the linked list
// Renamed many items to keep it interesting and fresh

// Functions
//  List functions
//    - create a new list
//    - insert node at front
//    - print list
//    - find length of list
////  - insert at end
////  - remove front
////  - remove end
//  Utility functions
//    - allocate a node

#include <stdio.h>
#include <stdlib.h>

typedef struct elem_type node;
typedef node *link;

struct  elem_type
{
	int data;
	link next;
};

struct header_type
{
	link first;
	link last;
	int  len;
};

typedef struct header_type *list;



link makeNode( int x )
{
	link b;

	b = malloc( sizeof( node )  );
	b->data = x;
	b->next = NULL;
	return b;
}
int listLength( list L )
{
	return L->len;
}
void printList( list L )
{
	link mov;
	printf("List: [%2d] :", L->len );
	mov = L->first;
	while ( mov != NULL )
	{
		printf("%2d ", mov->data );
		mov = mov->next;
	}
	printf("\n");
}
void insertFront( list L, int num )
{
	link b;
	b =  makeNode( num );
	b->next = L->first;
	L->first = b;
	if ( L-> len == 0)
		L->last = b;
	L->len++;
}
list makeList()
{
	list newL;

	newL = malloc( sizeof( *newL ));
	newL->first = NULL;
	newL->last = NULL;
	newL->len = 0;

	return newL;
}
void insertBack(list L, int x)
{
	link tmp;
	tmp = madeNode(x);

	if(L -> len == 0)
	{
		L -> first = tmp;
		L -> last = tmp;
	}
	else
	{
		L -> last -> next = tmp;
		L -> last = tmp;
	}

	L -> len++;
}
void removeFront(list L)
{
	link tmp;
	tmp = L -> first;

	if(L -> first == NULL)
	{
		return;
	}
	if(L -> len == 1)
	{
		free(tmp);
		L -> first = NULL;
		L -> len--;
	}
	if(L -> len > 1)
	{
		L -> first = L -> first -> next;
		free(tmp);
		L -> len--;
	}
}
int main()
{
	list AList;
	int k, x;

	AList = makeList();

	//insertFront( AList, 12 );
	insertBack( AList, 12 );
	printList( AList );
	printf("Len %d\n", listLength( AList ) );

//a) Insert 5 random values (under 100)

	for ( k = 0; k < 5; ++k )
	{
		x = rand() % 100;
		printf("Adding %d\n", x);
		//insertFront( AList, x );
		insertBack( AList, x );
	}

//b) Print the list

	printList( AList );

// loop until list is empty

	while(AList -> len > 0)
	{
		removeFront(AList);
		printList(AList);
	}

	return 0;
}
