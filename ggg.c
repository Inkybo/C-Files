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
	//int x = 0;
	link mov;
	mov = L;
  printf("List: ");
  while(mov != NULL)
	{
    printf("%2d ", mov);
   	mov = mov->dat[x];
	x++;
	}
  printf("\n");
}

