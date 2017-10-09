#include <stdio.h>
#include <string.h>
 
int main()
{
   char string[100];
   int c = 0, count[26] = {0};
 
   printf("Enter a string\n");
   fgets(string, 100, stdin);
 
   while (string[c] != '\0')
   {
      /** Considering characters from 'a' to 'z' only
          and ignoring others */
 
      if (string[c] >= 'a' && string[c] <= 'z') 
         count[string[c]-'a']++;
 
      c++;
   }
   return 0;
}
