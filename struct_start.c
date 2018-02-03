#include <stdio.h>
#include <stdlib.h>

#define MaxList 50

struct list_type
{
 int *A;
 int len;
 int capacity;
};

typedef struct list_type listT;

//prototypes
int isFull(listT L);
int isEmpty(listT L);

void makeList(listT *L, int sz)
{
	L->len = 0;
	L->capacity = sz;
	L->A = malloc(sz * sizeof(int));
}
void insertEnd(listT *L , int x )
{
	if(isFull(*L))
	{
		printf("Error: adding to full list");
		exit(1);
	}
	(*L).A[(*L).len] = x;
	(*L).len++;

// can also be:

//	L->A[L.len] = x;
//	L->len++;
}
int isEmpty( listT L )
{
	if( L.len == 0 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull( listT L )
{
	if(L.len == L.capacity)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void printList( listT L )
{
	int i;

	for (i = 0; i < L.len; ++i)
	{
		printf("%3d ", L.A[i]);
	}
	printf("\n");
}
int main()
{
 listT mylist;
 int x, i;

 mylist.len = 0;

 makeList(&mylist, 20);

 srand( 3 );

 if (isEmpty(mylist))
   printf("1 empty\n");
 else
   printf("1 notempty\n");

 if (isFull(mylist))
   printf("1 full\n");
 else
   printf("1 notfull\n");


 x = rand() % 100;
 insertEnd( &mylist, x );  
 printList( mylist );
 x = rand() % 100;
 insertEnd( &mylist , x );  
 printList( mylist );


 if (isEmpty(mylist))
   printf("2 empty\n");
 else
   printf("2 notempty\n");

 if (isFull(mylist))
   printf("2 full\n");
 else
   printf("2 notfull\n");

 for (i = 0; i < 5; ++i)
  {
   x = rand() % 100;
   insertEnd( &mylist, x );  
   printList( mylist );
  }
/*
 for (i = 0; i < 5; ++i)
  {
   x = rand() % 100;
   insertFront( &mylist, x );  
   printList( mylist );
  }

 if (isEmpty(mylist))
   printf("3 empty\n");
 else
   printf("3 notempty\n");

 if (isFull(mylist))
   printf("3 full\n");
 else
   printf("3 notfull\n");
*/
 return 0;
}
