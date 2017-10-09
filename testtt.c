//LLAssign1
//Written by: Chase Lucas
//April 5th, 2017.
//Really had fun with this one, truly, too much fun...

#include <stdio.h>      //Include the main libraries.
#include <stdlib.h>

struct boxtype  //Defines the base structure.
{
        int val;
        struct boxtype *link;
};

struct boxtype *makeNode(int num)       //Function for creating the nodes.
{
        struct boxtype *box;
        box = malloc(sizeof(struct boxtype));

        box -> val = num;
        box -> link = NULL;
}

int listLength(struct boxtype *import)  //Function for finding the length of a list.
{
        int count;

        struct boxtype *move;
        move = import;

        while ( move != NULL )  //While the move pointer is not null, move to the next box, and increment the counter.
        {
                count++;
                move = move->link;
        }

        return count;   //Return the length of the list.
}

void printList(struct boxtype *import)  //Function for printing out the list.
{
        struct boxtype *move;
        move = import;

        printf("List: ");

        while ( move != NULL )  //While the move pointer is not null, move to the next box.
        {
                printf("%d ",move->val);        //Print the value, and move to the next box.
                move = move->link;
        }
        printf("\n");
}

struct boxtype *insertFront(struct boxtype *import, int num)    //Function to insert a value at the front of the list.
{
        struct boxtype *export; //Defines the export pointer, and makes a box of the specified size.
        export = makeNode(num);

        export -> link = import;        //Takes the export box, and points it at the beginning of the list.
        import = export;

        return import;  //Returns the new front of the list value.
}

struct boxtype *insertBack(struct boxtype *import, int num)     //Function to insert a value at the back of the list.
{
        struct boxtype *move;
        struct boxtype *last;


        while (move != NULL)    //While the move pointer is not null, traverse the list.
        {
                move = move -> link;    //Move to the next box.
        }

        if (move == NULL)       //When move is null, create a new box with the num value specified.
        {
                last = makeNode(num);
        }
        return last;    //Return the value.

}

int isEmpty(struct boxtype *import)     //Function to check if the list is empty.
{
        struct boxtype *move;
        move = import;

        if (move == NULL)       //If move is null, move to the next box.  If the entire list is empty, return 0.
        {
                move = move -> link;
                if (move != NULL)       //If move is not equal to null, return 1.
                {
                        return 1;
                }
                return 0;
        }
}

int isInList(struct boxtype *import, int num)   //Checks to see if a value is in the list.
{
        struct boxtype *move;
        move = import;

        while ( move != NULL )  //While move is not the provided integer, move to the next box.  If value is not found, return 0.
        {
                move = move -> link;

                if (move->val == num)   //If move is the provided integer, return 1.
                {
                        return 1;
                }
        }
        return 0;

}

struct boxtype *getLoc(struct boxtype *import, int num) //Finds the location of a value within the list.
{
        struct boxtype *move;
        move = import;

        while(move != NULL)     //Keep checking as long as move is not null.
        {
                if(move -> val == num)  //If the value equals the number, return a pointer to its location.
                {
                        return move;
                }
                else    //If the value is something other than the number, keep checking.  If the number is not found, return null.
                {
                        move = move -> link;
                }
        }
        return NULL;
}


int maxVal(struct boxtype *import)      //Finds the maximum value in a list.
{
        int max = 0;
        struct boxtype *move;
        move = import;

        max = move -> val;

        while (move != NULL)    //While move is not null, keep checking.
        {
                if (move -> val > max) //If the value is greater than max, set it equal to max, and then move to the next box.  Finally, return the max value.
                {
                        max = move -> val;
                }
                move = move -> link;
        }
        return max;
}

struct boxtype *maxLoc(struct boxtype *import)  //Finds the location of the maximum value in a list.
{
        int max = 0;
        struct boxtype *move;
        struct boxtype *maddr;

        move = import;
        max = move -> val;

        while (move != NULL)    //While move is not null, keep checking.   too much going on for a oneliner comment... :(
        {
                if (move -> val > max ) //If the value is greater than max.
                {
                        max = move -> val;      //Assign a new max value.
                        maddr = move;   //Assign an address to the maximum value.
                }
                move = move -> link;    //Move to the next box/
        }
        return maddr;   //Return the address.
}

struct boxtype *insertAfter(struct boxtype *import, struct boxtype *import2, int num)   //Function to insert a value into specified location.
{
        struct boxtype *move;

        move = makeNode(num);   //Makes a new node.
        move -> link = import2 -> link;
        free(import2);  //Frees the node assigned to import2.

        return import;  //Returns the value of input.
}

struct boxtype *removeFront(struct boxtype *import)     //Removes the value at the front of the list.
{
        struct boxtype *tmp;

        tmp = import;   //Stores the value from the import pointer into the value tmp.
        tmp = tmp -> link;
        free(import); //Frees the node assigned to import.

        return tmp;     //Returns the tmp value.
}

struct boxtype *removeBack(struct boxtype *import)      //Removes the value at the back of the list.
{
        struct boxtype *move;
        struct boxtype *tmp;

        move = import;  //Stores the value from the import pointer into move.

        if(move -> link == NULL)        //If value is not null, call removeFront, and return move.
        {
                move = removeFront(import);
                return move;
        }
        if (import != NULL)     //If import is not equal to null.
        {
                while(move -> link != NULL) //While the value is not equal to null.
                {
                        tmp = move;     //Assign the value from move to tmp.
                        move = move -> link; //Move to the next box.
                }
                tmp -> link = NULL;
                free(move);     //Frees the node assigned to move.
        }
        return import;  //Returns the import value.
}

struct boxtype *removeThisOne(struct boxtype *import, struct boxtype *import2)  //Function to remove a specific value.
{

if ( import == NULL )   //If the value of import is null, return import back.
{
        return import;
}
if (import == import2)  //If the values of import and import2 are equal to eachother, free the value of import, set it to null, and return it.
{
        free(import);
        import = NULL;
        return import;
}

struct boxtype *move;
struct boxtype *tmp;

move = import;

while (move -> link != NULL)    //While the value is not equal to null.
{
        if (move -> link == import2)    //If the value is equal to import2, store the value in tmp, free the tmp node, and finally, return import.
        {
                tmp = move -> link;
                move -> link = tmp -> link;
                free(tmp);

                return import;
        }
}
        return import;
}

int main()
{
        struct boxtype *one, *two;
        int i, x;

        one = NULL;
        two = NULL;

        for ( i = 0; i < 7; ++i )
        {
                x = rand() % 80 + 1;
                one = insertFront( one, x );
                two = insertBack( two, x );
        }

        int tot = 99;

        while ( !isEmpty( two ) )
        {
                x = two->val;
                tot += x%29;
                two = removeFront( two );
        }

        while ( !isEmpty( one ) )
        {
                x = one->val;
                tot += x%29;
                one = removeBack( one );
        }
        printf("%d\n", tot);

        return 0;
}

