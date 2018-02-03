#include <stdio.h>
#include <math.h>
#include <string.h>

struct base_struct{
	char base21[2000000];
	int decimal;
	int val;
	int len;
	int i;
};
void compute()
{
	struct base_struct base;

  base.base21;
  base.decimal = 0;
  base.i = 0;
  base.val = 0;
  base.len = 0;

  printf("Enter any base21 number: ");
  scanf("%s", base.base21);

  base.len = strlen(base.base21);
  base.len--;

  for(base.i = 0; base.base21[base.i]!='\0'; base.i++)
  {
      if(base.base21[base.i]>='0' && base.base21[base.i]<='9')
          base.val = base.base21[base.i] - 48;
      else if(base.base21[base.i]>='a' && base.base21[base.i]<='k')
          base.val = base.base21[base.i] - 97 + 10;
      else if(base.base21[base.i]>='A' && base.base21[base.i]<='K')
          base.val = base.base21[base.i] - 65 + 10;

      base.decimal += base.val * pow(21, base.len);
      base.len--;
  }
  printf("Decimal number = %d\n", base.decimal);
}
int main()
{
    compute();
    return 0;
}
