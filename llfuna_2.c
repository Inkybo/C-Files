//LLfuna_2.c
//Written by: Nick Taddei
//April 5th, 2017.
//Really had fun with this one, truely was hte most fun ive had coding (at least in C)...
#include <stdio.h>    //Include main libraries.
#include <stdlib.h>
struct boxtype  //Defines base structure.
{
    int val;
    struct boxtype *link;
};
struct boxtype *makeNode(int num)   //Function for creating needed nodes.
{
    struct boxtype *elephant;
    elephant = malloc(sizeof(struct boxtype));
    elephant -> val = num;
    elephant -> link = NULL;
}
int listLength(struct boxtype *import)  //Function for finding the list length.
{
    int popcorn;
    
    struct boxtype *move;
    move = import;
    while ( move != NULL )  //While move pointer is not null, go to the next box, and increment the counter by one.
    {
        popcorn++;
        move = move->link;
    }
    return popcorn;
}
void printList(struct boxtype *import)  //Function prints list.
{
    struct boxtype *move;
    move = import;
    printf("List: ");
    while ( move != NULL )  //While move pointer is not null, move to the next box.
    {
        printf("%d ",move->val);
        move = move->link;
    }
    printf("\n");
}
struct boxtype *insertFront(struct boxtype *import, int num)    //Function inserts value at front of list.
{
    struct boxtype *export; //Defines export pointer, makes box of specified size.
    export = makeNode(num);
    export -> link = import; //Takes export box, points at beginning of list.
    import = export;
    return import;
}
struct boxtype *insertBack(struct boxtype *import, int num) //Function to insert value at back of list.
{
    struct boxtype *move;
    while (move != NULL)    //While move pointer is not null, traverse list.
    {
        move = move -> link;
    }
    if (move == NULL)   //When move = null, create new box with num value specified.
    {
        struct boxtype *last;
        last = makeNode(num);
    }
    return last;
}
int isEmpty(*struct boxtype import) //Function to check if list is empty.
{
    struct boxtype *move;
    move = import;
    if (move == NULL)   //If move = null, move to next box.  If the entire list empty, return 0.
    {
        move = move -> link;
        if (move != NULL)   //If move not equal null, return 1.
        {
            return 1;
        }
    }
    return 0;
}
int isInList(struct boxtype import, int num)    //Checks if a value is in list.
{
    struct boxtype *move;
    move = import;
    while ( move != num )   //While move isnt the provided integer, move to next box.  If value isnt found, return 0.
    {
        move = move -> link;
        if (move == num)    //If move is the provided integer, return 1.
        {
            return 1;
        }
    }
    return 0;
}
struct boxtype getLoc(struct boxtype *import, int num)  //Finds location of a value within list.
{
    struct boxtype *move;
    move = import;
    while(move != NULL) //Keep checking as long as move is not equal to null.
    {
        if(move -> val == num)   //If value equals the number, return pointer to its location.
        {
            return move;
        }
        else    //If value is something other than the number, keep checking.  If the number is not found, return null.
        {
            move = move -> link;
        }
    }
    return NULL;
}
int maxVal(struct boxtype *import)  //Finds maximum value in a list.
{
    int max = 0;
    struct boxtype *move;
    move = import;
    max = move -> val;
    while (move != NULL)    //While move not equal to null, keep checking.
    {
        if (move -> val > max) //If value is greater than max, set equal to max, then move to next box and return max value.
        {
            max = move -> val;
        }
        move = move -> link;
    }
    return max;
}
struct boxtype *maxLoc(struct boxtype *import)  //Finds the location of maximum value in list.
{
    int max = 0;
    struct boxtype *move;
    struct boxtype *moveaddr;
    move = import;
    max = move -> val;
    while (move != NULL)    //While move is not equal to null, keep checking.
    {
        if (move -> val > max )   //If value is greater than max.
        {
            max = move -> val;   //Assign new max value.
            moveaddr = move;   //Assign address to maximum value.
        }
        move = move -> link; //Move to next box/
    }
    return moveaddr;
}
struct boxtype *insertAfter(struct boxtype *import, struct boxtype *import2, int num)   //Function to insert value into specified location.
{
    struct boxtype *move;
    move = makeNode(num);   //Makes new node.
    move -> link = import2 -> link;
    free(import2);  //Frees node assigned to import2.
    
    return import;  //Returns value of input.
}
struct boxtype *removeFront(struct boxtype *import) //Removes value at front of list.
{
    struct boxtype *tmp;
    tmp = import;   //Stores value from import pointer into value tmp.
    tmp = tmp -> link;   
    free(import); //Frees node assigned to import.
    return tmp; //Returns tmp value.
}
struct boxtype *removeBack(struct boxtype *import)  //Removes value at back of list.
{
    struct boxtype *move;
    struct boxtype *tmp;
    move = import;  //Stores the value from the import pointer into move.
    if(move -> link == NULL) //If value not null, call removeFront, return move.
    {
        move = removeFront(import);
        return move;
    }
    if (import != NULL) //If import not equal to null.
    {
        while(move -> link != NULL) //While value not equal to null.
        {
            tmp = move; //Assign value from move to tmp.
            move = move -> link; //Move to next box.
        }
        tmp -> link = NULL;
        free(move); //Frees node assigned to move.
    }
    return import;
}
struct boxtype *removeThisOne(struct boxtype *import, struct boxtype *import2)  //Function to remove a specific value.
{
if ( import == NULL )   //If value of import is null, return import back.
{
    return import;
}
if (import == import2)  //If values of import and import2 are equal to eachother, free the value of import, set it to null, and return it.
{
    free(import);
    import = NULL;
    return import;
}
struct boxtype *move;
struct boxtype *tmp;
move = import;
while (move -> link != NULL) //While value is not equal to null.
{
    if (move -> link == import2) //If value is equal to import2, store the value in tmp, free the tmp node, and finally, return import.
    {
        tmp = move -> link;
        move -> link = tmp -> link;
        free(tmp);
        return import;
    }
}
    return import;
}
