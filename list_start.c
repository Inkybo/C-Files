#include <stdio.h>
#include <stdlib.h>

#define MaxList 50 

void deleteEnd( int L[], int *last)
{
	(*last)--;
}
void deleteFront( int L[], int *last)
{
	int k = 0;
	for(k = 0; k < *last-1; ++k)
	{
		L[k] = L[k+1];
	}
	(*last)--;
}
void insertEnd( int L[], int *last, int x )
{
	L[*last] = x;
	(*last)++;
}
void insertFront( int L[], int *last, int x )
{
	int k = 0;
	for(k = *last; k > 0; k-- )
	{
		L[k] = L[k-1];
	}
	L[0] = x;
	(*last)++;
}
int isEmpty( int L[], int last )
{
	if (last == 0 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull( int L[], int last )
{
	if(last == MaxList)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
  
void printList( int L[], int last )
{
 int i;
 for ( i = 0; i < last; ++i)
   printf("%3d ", L[i]);
 printf("\n");
}


int main()
{
 int L[MaxList] = {0};
 int last = 0;          // next free spot in list
 int x, i;

 srand( 3 );

 if (isEmpty(L, last))
   printf("1 empty\n");
 else
   printf("1 notempty\n");

 if (isFull(L, last))
   printf("1 full\n");
 else
   printf("1 notfull\n");


 x = rand() % 100;
 insertEnd( L, &last, x );  
 printList( L, last );
 x = rand() % 100;
 insertEnd( L, &last, x );  
 printList( L, last );


 if (isEmpty(L, last))
   printf("2 empty\n");
 else
   printf("2 notempty\n");

 if (isFull(L, last))
   printf("2 full\n");
 else
   printf("2 notfull\n");

 for (i = 0; i < 5; ++i)
  {
   x = rand() % 100;
   insertEnd( L, &last, x );  
   printList( L, last );
  }
 for (i = 0; i < 5; ++i)
  {
   x = rand() % 100;
   insertFront( L, &last, x );  
   printList( L, last );
  }

 if (isEmpty(L, last))
   printf("3 empty\n");
 else
   printf("3 notempty\n");

 if (isFull(L, last))
   printf("3 full\n");
 else
   printf("3 notfull\n");

while (!isEmpty(L, last))
{
	//deleteEnd(L, &last);
	deleteFront(L, &last);
	printList(L, last);
}

 return 0;
}
