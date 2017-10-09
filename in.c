#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    FILE *fp2;
    int i;
    char buff[100];

    fp = fopen(argv[1], "r");   //opens file for reading
    if (fp == NULL) //if it's unable to do so, error.
    {
        printf("[ERROR]: file not available\n");
        exit(1);
    }

    fp2 = fopen(argv[2],"w");
    if (fp2 == NULL)
    {
        printf("Error: File not available");
        exit(1);
    }

    fgets( buff, 100, fp ); //read every line from a file and spit it out.
    while (  ! feof( fp )  )    //if it's not the end of the file.
    {
        i++;
        printf("Read: %s", buff);   //got it.
        fprintf(fp2,"%d. %s\n",i,buff);
        fgets( buff, 100, fp ); //try and get the next one.
    }

    return 0;
}
