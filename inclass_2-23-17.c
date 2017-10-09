#include <stdio.h>
#include <string.h>

struct inventory
{
	char productname[25];
	int quantity;
	float price;
};

// read all products from file into items array
// return number of items
int getInventory( struct inventory items)
{
	FILE *stuff;
	int n = 0;
	int line = 0;
	int num_line = 0;
	int num_1 = 0;
	char *word[20];

//	printf("hello");

	stuff = fopen( "products", "r");

	do
	{
	    line = fgetc(stuff);
    	if(line == '\n')
    	{
			num_line++;
    	}
	}while( line != EOF);

	rewind(stuff);

  for(num_1 = 0; num_1 < num_line; num_1++)
  {
 	fscanf(stuff, "%s", &word);
	items.productname[num_1] = word;
	fscanf(stuff, "%d", &items.quantity);
    fscanf(stuff, "%f", &items.price);
  }

	for(num_1 = 0; num_1 < 25; num_1++)
	{
		printf("%d  %s\n", num_1, items.productname);
	}

  return n;
} 
// print out the inventory, there are N items
// print a number in front of each line
void showInventory( struct inventory items, int N  )
{
	int i;
	struct inventory a;
    for (i = 0; i < N; ++i)
	{
		printf("%d. %s %d %f\n",i,a.productname,a.quantity,a.price);
	}
}
// interactive; ask user what product
//  decrease inventory quantity by 1
// for best results, make sure item # is in range
void buySomething(struct inventory  items, int N  )
{
  char choice[25];
  int k;
	// print the list to show choices
    showInventory(items, N );

	// ask which item
		printf("Which item? ");
      scanf("%s", choice);
	// decrease quantity
//		for ( k = 0; k <
	// print new quantity
}

int main()
{
	int N;
	struct inventory items;

// call the functions to show they work
	N = getInventory(items);
//	showInventory(items,N);
//	buySomething(items,N);

	return 0;
}

