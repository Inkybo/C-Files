#include <stdio.h>
#include <math.h>
#include <string.h>

void compute()
{
  char base21[2000000];
  int decimal = 0;
  int i = 0;
  int val = 0;
  int len = 0;

  printf("Enter any base21 number: ");
  scanf("%s", base21);

  len = strlen(base21);
  len--;

  for(i=0; base21[i]!='\0'; i++)
  {
      if(base21[i]>='0' && base21[i]<='9')
          val = base21[i] - 48;
      else if(base21[i]>='a' && base21[i]<='k')
          val = base21[i] - 97 + 10;
      else if(base21[i]>='A' && base21[i]<='K')
          val = base21[i] - 65 + 10;

      decimal += val * pow(21, len);
      len--;
  }
  printf("Decimal number = %d\n", decimal);
}
int main()
{
    compute();
    return 0;
}
