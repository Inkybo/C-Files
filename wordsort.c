#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(FILE *input, FILE *output)
{
	char word[30];
	int num_1 = 0;
	int num_2 = 0;
	char *words[100];
	char temp[30];
	int line = 0;
	int num_line = 0;
	char r[1];
	int r_count = 0;

	r[1] = 'r';

	do
	{
		line = fgetc(input);
		if(line == '\n')
		{
			num_line++;
		}

	}while(line != EOF);

	rewind(input);

	printf("fffffff  |%d|", num_line);
	for(num_1 = 0; num_1 < num_line; num_1++)
	{
		fscanf(input,"%s", &word);
		words[num_1] = strdup(word);
		printf("---------------------\n");
		printf("word is : %s\n", word);
		printf("wordddd %s \n", words[num_1]);
		printf("---------------------\n");
	}
	fclose(input);

//debugg///////
//	for(num_1 = 0; num_1 < num_line; num_1++)
//	{
//		printf("%s\n", words[num_1]);
//	}
///	printf("-------------\n");

	for(num_1 = 0; num_1 < num_line - 1; num_1++)
	{
		for(num_2 = num_1+1; num_2 < num_line; num_2++)
		{
			if(strcmp(words[num_1], words[num_2]) > 0)
			{
				strcpy(temp, words[num_1]);
				strcpy(words[num_1], words[num_2]);
				strcpy(words[num_2], temp);
			}
			if(strcmp("r", temp) < 0)
			{
				r_count++;
			}
		}
	}
	for(num_1 = 0; num_1 < num_line; num_1++)
	{
		printf("%s\n", words[num_1]);
	}
	for(num_1 = 0; num_1 < num_line; num_1++)
	{
        fprintf(output,"%d. %s\n",num_1+1, words[num_1]);
	}

	printf("there are %d words in the file \n", num_line);
	printf("ther are %d words that contain the letter r \n", r_count);
	printf("first word: %s \n", words[0]);
	printf("last word: %s \n", words[num_line-1]);
}
int main(int argc, char *argv[] )
{
	FILE *input;
	FILE *output;

	input = fopen(argv[1], "r");
	if (input == NULL)
    {
        printf("Error: File not available");
        exit(1);
    }
	output = fopen(argv[2], "w");
	if (output == NULL)
    {
        printf("Error: File not available");
        exit(1);
    }

	sort(input, output);

	return 0;
}
