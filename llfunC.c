include <stdio.h>

struct boxtype insertFront( ptr, int)
{
	p = makeNode(5);
	p -> link = front;
	front = p;
}
struct boxtype insertBack( ptr, int )
{
	p = makeNode(n);
	if (front == NULL)
	{
    	front = p;
	}
	else
	{
		p = makeNode(5);
		last = front;
		while ( last -> link != NULL )
    		last = last -> link;
		last -> link = p;
		return front;
	}
}
struct boxtype insertAfter( ptr, ptr, int)
{
	b = makeNode(num);
	b -> link = loc -> link;
	loc -> link = b;
}
struct boxtype removeFront( ptr)
{
	p = front;
	front = front -> link;
	free(p);
	return front;
}
struct boxtype removeBack( ptr)
{
	if ( front -> link == NULL )
	{
		free(front);
		front = NULL;
	}
	else
	{
		prev = front;
		while ( prev -> link -> != NULL )
			prev = prev -> link;

		prev -> link = NULL;
		free(last);
	}
	return front;
}
struct boxtype removeThisOne( ptr, ptr)
{
	prev = front;
	while (prev -> link != loc)
	{
    	prev = prev -> link;
	}
	prev -> link = loc -> link;
	free(loc);
	return front;
}
int main()
{
	return 0;
}
