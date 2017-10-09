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
 		fscanf(stuff, "%s", inventory.productname);
    fscanf(stuff, "%d", inventory.quantity);
    fscanf(stuff, "%f", inventory.price);
  }
  return n;
} 
// print out the inventory, there are N items
// print a number in front of each line
void showInventory( items[], int N  )
{
	int i;
  struct inventory a;
  
    for (i = 0; i < N; ++i)
	{
		printf("%d. %s %d %f\n",i,a[i].productname,a[i].quantity,a[i].price);
	}
}
// interactive; ask user what product
//  decrease inventory quantity by 1
// for best results, make sure item # is in range
void buySomething(  items[], int N  )
{
  char choice[25];
  int k;
  
  struct inventory[5];
  
	// print the list to show choices
    showInventory( inventory, N );
  
	// ask which item
		printf("Which item? ");
      scanf("%s", choice);
	// decrease quantity
		for ( k = 0; k < 10; k++ )
    {
     	if (strcmp(choice,inventory.name) == 0)
      {
        
    }
  
	// print new quantity
}

int main()
{
	int N;
  struct inventory items[5];

// call the functions to show they work
	N = getInventory(inventory);
	showInventory(inventory,N);
  buySomething(inventory,N);
  
	return 0; 
}
z,y{}
