#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void posmatch(char w1[], char w2[])
{
        int i,k = 0;
        int posmatch = 0;
        //check for same symbol at the same location
        for ( i = 0; w1[i] != '\0' || w2[i] != '\0'; i++ )
        {
                if(w1[i] == w2[i])
                posmatch++;
//              printf("W1 at %d: %c\n",i,w1[i]);
//              printf("W2 at %d: %c\n",i,w2[i]);
        }
        printf("Positional Same: %d\n",posmatch);
}
void posnocase(char w1[], char w2[])
{
        int i,k = 0;
        int posnocase = 0;
        //convert strings to all lower case
        for( i = 0; w1[i]; i++ )
		{
        	w1[i] = tolower(w1[i]);
       	}
		for (i = 0;w2[i];i++ )
        w2[i] = tolower(w2[i]);
        for ( i = 0; w1[i] != '\0' || w2[i] != '\0'; i++ )
        {
                if(w1[i] == w2[i])
                posnocase++;
//              printf("nocase at %d: %c\n",i,w1[i]);
//              printf("nocase at %d: %c\n",i,w2[i]);
        }
        printf("Positional noCase: %d\n",posnocase);
}
void contains_same(char w1[], char w2[])
{
        int i,k = 0;
        int csame = 0;
        for(i = 0; w1[i] != '\0' || w2[i] != '\0'; i++)
        {
                if (w1[i] != w2[k])
                {
                        k++;
                }
                if(w1[i] == w2[k])
                {
                        csame++;
                        i++;
                        k++;
                }
        }
        printf("Contains same: %d\n",csame);
}
void contains_nocase(char w1[], char w2[])
{
        int i,k = 0;
        int cnocase = 0;
        for ( i = 0; w1[i]; i++ )
        w1[i] = tolower(w1[i]);
        for (i = 0; w2[i]; i++ )
        w2[i] = tolower(w2[i]);
        for(i = 0; w1[i] !='\0' || w2[i] != '\0'; i++)
        {
                if (w1[i] != w2[k])
                {
                        k++;
                }
                if(w1[i] == w2[k])
                {
                        cnocase++;
                        i++;
                        k++;
                }
        }
        printf("Contains noCase: %d\n",cnocase);
}
int main()
{
        char w1[1000];
        char w2[1000];
        int n = 0;
        printf("Enter your first string! ");
        fgets(w1,1000,stdin);
        printf("Enter your second string! ");
        fgets(w2,1000,stdin);
        //inserts null terms to signal the for loop when to stop
        n = strlen(w1);
        if (w1[n-1] == '\n')
        w1[n-1] = '\0';
        n = strlen(w2);
        if(w2[n-1] == '\n')
        w2[n-1] == '\0';
        posmatch(w1,w2);
        posnocase(w1,w2);
        contains_same(w1,w2);
        contains_nocase(w1,w2);
        return 0;
}
