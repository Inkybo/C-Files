#include <stdio.h>

if(start <= end)
{
	for(k = start; k <= end; ++k)
	{
		printf("%d",k);
	}
	printf("]n");
}
else
{
    for(k = start; k >= end; --k)
    {
        printf("%d",k);
    }
    printf("]n");
}
void rept(int many, char sym)
{
	for(k = 0; k < many; ++k)
	{
		printf("%c", sym);
	}
	printf("\n");
}
rept(3, #)
