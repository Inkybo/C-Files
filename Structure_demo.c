#include <stdio.h>
#include <string.h>

struct pixel // defines the data structure
{
	int x;
	int y;
	char color[20];
};

void pixelPrinter(struct pixel pix)
{
	printf("( %d, %d, %s)\n", pix.x, pix.y, pix.color);


}

int main()
{
	int num = 0;
	int list[10];

	struct pixel p; //defines the datatype 'pixel' as 'p'
	struct pixel q;//defines a new datatype 'pixel' as 'q'
					//with a seperate set of memory allocated for 'q'
					//and allows for 'p' & 'q' to have differnt values
					//stored in each

	struct pixel plist[10]; 

	list[2] = 24;

	p.x = 5;
	p.y = 10;
	strcpy(p.color, "red");
	pixelPrinter(p);

	plist[2].x = 33;

	return 0;
}
