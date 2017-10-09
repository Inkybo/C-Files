#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int file_input(FILE *input, int nums[], char *words[], int num_line)
{
	int num_1 = 0;
	int num_2 = 0;
	int line = 0;
	char word[30];
	int test = 0;

	do
	{
		line = fgetc(input);
		if(line == '\n')
		{
			num_line++;
		}
	}while(line != EOF);

	rewind(input);

	for(num_1 = 0; num_1 < num_line; num_1++)
	{
		fscanf(input, "%s", &word);
		words[num_1] = strdup(word);
		fscanf(input, "%d", &num_2);
		nums[num_1] = num_2;
//debug
//		printf("`````````````````````````\n");
//		printf("-------%d----\n", nums[num_1]);
//		printf("-------%s----\n", words[num_1]);
//		printf("`````````````````````````\n");
///////
	}
//	for(test = 0; test < num_line; test++)
//	{
//		printf("%d %s--\t~~%d\n",num_line, words[test], nums[test]);
//	}

	return num_line;
}
void sort(int nums[], char *words[], int option, int num_line)
{
	int num_1 = 0;
	int num_2 = 0;
	int check = 0;
	char temp_word[30];
	int i = 0;
	int j = 0;
	int temp_num = 0;
	int N = 0;
	int test = 0;

for(i = 0; i < num_line; i++)
		{
			for(j = 0; j < num_line - 1; j++)
			{
	if(option == 2)//sort by word
	{
				if(strcmp(words[j], words[j+1]) > 0)
				{
					strcpy(temp_word, words[j]);
					strcpy(words[j], words[j+1]);
					strcpy(words[j+1], temp_word);
					temp_num = nums[j];
					nums[j] = nums[j+1];
					nums[j+1] = temp_num;

				}
	}
	if(option == 1)//sort by number
	{
				if(nums[j] > nums[j+1])
				{
					strcpy(temp_word, words[j]);
					strcpy(words[j], words[j +1]);
					strcpy(words[j+1], temp_word);
					temp_num = nums[j];
					nums[j] = nums[j+1];
					nums[j+1] = temp_num;
				}
	}
}
}
}
void print(int nums[], char *words[], int num_line)
{
	int num_1 = 0;

//	printf("%d", num_line);
	for(num_1 = 0; num_1 < num_line; num_1++)
	{
		printf("%d %s \t %d\n",num_1+1, words[num_1], nums[num_1]);
	}
}
int main(int argc, char *argv[] )
{
	FILE *input;

	int nums[250];
	char *words[250];
	int option = 0;
	int num_line = 0;

	input = fopen(argv[1], "r");
	if(input == NULL)
	{
		printf("Error: File not available\n");
		exit(1);
	}

	printf("how do you wish to sort?: (1 = # | 2 = a-z)\n");
	scanf("%d", &option);
	printf("\n");

	num_line = file_input(input, nums, words,num_line);

	sort(nums, words, option, num_line);

	print(nums, words, num_line);

	return 0;
}
