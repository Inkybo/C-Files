
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void contains(char string_1[], char string_2[], int num_1, int num_2)
{
	int num_1_1 = 0;
	int num_1_2 = 0;
	int contains_same = 0;

	for( num_1_1 = 0; num_1_1 < num_1 - 1; num_1_1++ )
	{
		for ( num_1_2 = 0; num_1_2 < num_2 - 1; num_1_2++ )
		{
			if(string_1[num_1_1] == string_2[num_1_2])
			{
				contains_same++;
			}
		}
	}
	printf("Contains Same: %d\n",contains_same);
}
void contains_nocase(char string_1[], char string_2[], int num_1, int num_2)
{
	int num_2_1 = 0;
	int num_2_2 = 0;
	int contains_no_case = 0;

	for (num_2_1 = 0; num_2_1 < num_1 - 1; num_2_1++ )
	{
		for ( num_2_2 = 0; num_2_2 < num_2 - 1; num_2_2++ )
		{
			if(string_1[num_2_1] == string_2[num_2_2])
			{
				contains_no_case++;
			}
		}
	}
	printf("Contains noCase: %d\n",contains_no_case);
}
void posmatch(char string_1[], char string_2[],int num_1, int num_2)
{
	int num_3_1 = 0;
	int num_3_2 = 0;
	int postive_match = 0;

	for(num_3_1 = 0; num_3_1 < num_1 - 1; num_3_1++)
	{
		for(num_3_2 = 0; num_3_2 < num_2 - 1; num_3_2++)
		{
			if(num_3_1==num_3_2)
			{
				if(string_1[num_3_1] == string_2[num_3_2])
				{
					postive_match++;
				}
			}
		}
	}
	printf("Position of Same: %d\n",postive_match);
}
void posmatch_nocase(char string_1[], char string_2[],int num_1, int num_2)
{
	int num_4_1 = 0;
	int num_4_2 = 0;
	int num_4_3 = 0;
	int postive_match_no_case = 0;

	for(num_4_1 = 0; string_1[num_4_1]; num_4_1++)
	{
		string_1[num_4_1] = tolower(string_1[num_4_1]);
	}
	for(num_4_1 = 0; string_2[num_4_1]; num_4_1++)
	{
		string_2[num_4_1] = tolower(string_2[num_4_1]);
	}
	for(num_4_2 = 0; num_4_2 < num_1 - 1; num_4_2++)
	{
		for(num_4_3 = 0; num_4_3 < num_2-1; num_4_3++)
		{
			if(num_4_2==num_4_3)
			{
				if(string_1[num_4_2] == string_2[num_4_3])
				{
					postive_match_no_case++;
				}
			}
		}
	}
	printf("Position of noCase: %d\n",postive_match_no_case);
}
int main()
{
	char string_1[1000];
	char string_2[1000];
	int num_1 = 0;
	int num_2 = 0;

	printf("Enter your first string: ");
	fgets(string_1,1000,stdin);

	printf("Enter your second string: ");
	fgets(string_2,1000,stdin);

	num_1 = strlen(string_1);
	num_2 = strlen(string_2);

	contains(string_1,string_2,num_1,num_2);
	contains_nocase(string_1,string_2,num_1,num_2);
	posmatch(string_1,string_2,num_1,num_2);
	posmatch_nocase(string_1,string_2,num_1,num_2);

return 0;
}
