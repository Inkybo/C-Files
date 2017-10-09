#include <stdio.h>
#include <string.h>


// read all products from file into items array
// return number of items
int getInventory( items[] )
{
	FILE *stuff;
	int n = 0;

	stuff = fopen( "products", "r");

	while ( !feof( stuff ) )
	{

	}
	return n;
} 



// print out the inventory, there are N items
// print a number in front of each line
void showInventory( items[], int N  )
{
	int i;
    for (i = 0; i < N; ++i)
	{

	}
}


// interactive; ask user what product
//  decrease inventory quantity by 1
// for best results, make sure item # is in range
void buySomething(  items[], int N  )
{
	// print the list to show choices
    showInventory( inventory, N );

	// ask which item

	// decrease quantity

	// print new quantity
}




int main()
{
	int N;

// call the functions to show they work

	return 0; 
}

