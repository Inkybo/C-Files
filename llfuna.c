// Linked List program 2

// Functions
//  - allocate a node
//  - insert node at front
//  - print list
//  - find length of list

#include <stdio.h>
#include <stdlib.h>

struct boxtype
{
	int val;
	struct boxtype *link;
};

struct boxtype *makeNode(int num)
{
	struct boxtype *box;
	box = malloc(sizeof(struct boxtype));
	box->val = num;
	box->link = NULL;

	return box;
}
int listLength(struct boxtype *start)
{
	int num = 0;
	struct boxtype *move;
	move = start;

	while(move != NULL)
	{
		num++;
		move = move->link;
	}
	return num;
}
void printList(struct boxtype *start)
{
	struct boxtype *move;

	printf("List: ");

	while(move != NULL)
	{
		printf("%d ", move->val);
		move = move->link;
	}
	printf("\n");
}
struct boxtype *insertFront(struct boxtype *start, int num)
{
	struct boxtype *export;
	export = makeNode(num);

	export->link = start;
	start = export;

	return start;
}
int main()
{
	int i = 0;
	struct boxtype *start;

	start = NULL;
	printList(start);

	start = insertFront( start, 12 );
	printList( start );

	start = insertFront( start, 5 );
	printList( start );
	printf("Len =  %d\n", listLength( start ) );

	start = insertFront( start, 25 );
	printList( start );
	printf("Len = %d\n", listLength( start ) );

	for(i = 10; i <= 15; i++)
	{
		start = insertFront(start, i);
	}
	printList(start);
	printf("Len = %d\n", listLength( start ) );
	if(listLength(start) %2 == 0)
		printf("list length is even\n");
	else
		printf("List length is odd\n");
	return 0;
}
