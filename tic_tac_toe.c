#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void string_read(char board_input[])
{
	printf("enter board input ");
	fgets(board_input, 10, stdin);
}
char string_array(char board_input[], char board[][3])
{
	int num_1 = 0;
	int num_2 = 0;
	int counter = 0;

	for(num_1 = 0; num_1 < 3; num_1++)
	{
		for(num_2 = 0; num_2 < 3; num_2++)
		{
			board[num_1][num_2] = board_input[counter];
			counter++;
		}
	}
}
void array_print(char board[][3])
{
	int num_1 = 0;
	int num_2 = 0;

	for(num_1 = 0; num_1 < 3; num_1++)
	{
		for(num_2 = 0; num_2 < 3; num_2++)
		{
			printf("%c", board[num_1][num_2]);
		}
		printf("\n");
	}
}
void array_check(char board[][3])
{
	if (board[0][0] == 'x')
    {
        if (board[0][1] == 'x' && board[0][2] == 'x')
		{
        	printf("X wins 21\n");
		}
        if (board[1][1] == 'x' && board[2][2] == 'x')
		{
        	printf("X wins 27\n");
		}
        if (board[1][0] == 'x' && board[2][0] == 'x')
		{
    		printf("X wins 24\n");
		}
	}
        else if(board[1][0] == 'x')
        {
        	if (board[1][1] == 'x' && board[1][2] == 'x')
			{
            	printf("X wins 22\n");
			}
        }
        else if(board[2][0] == 'x')
        {
        	if (board[2][1] == 'x' && board[2][2] == 'x')
			{
                printf("X wins 23\n");
			}
        }
        else if(board[0][1] == 'x')
        {
        	if (board[1][1] == 'x' && board[2][1] == 'x')
			{
                printf("X wins 25\n");
			}
        }
        else if(board[0][2] == 'x')
        {
        	if (board[1][2] == 'x' && board[2][2] == 'x')
			{
                printf("X wins 26\n");
			}
            if (board[1][1] == 'x' && board[1][0] == 'x')
			{
                printf("X wins 28\n");
			}
        }

	if (board[0][0] == 'o')
	{
		if (board[0][1] == 'o' && board[0][2] == 'o')
		{
       		printf("O wins 31\n");
		}
        if (board[1][1] == 'o' && board[2][2] == 'o')
		{
        	printf("O wins 37\n");
		}
        if (board[1][0] == 'o' && board[2][0] == 'o')
		{
        	printf("O wins 34\n");
		}
    }
    else if(board[1][0] == 'o')
    {
        if (board[1][1] == 'o' && board[1][2] == 'o')
		{
        	printf("O wins 32\n");
		}
    }
    else if(board[2][0] == 'o')
    {
        if (board[2][1] == 'o' && board[2][2] == 'o')
		{
        	printf("O wins 33\n");
		}
    }
    else if(board[0][1] == 'o')
    {
        if (board[1][1] == 'o' && board[2][1] == 'o')
		{
        	printf("O wins 35\n");
		}
    }
    else if(board[0][2] == 'o')
    {
        if (board[1][2] == 'o' && board[2][2] == 'o')
		{
        	printf("O wins 36\n");
		}
        if (board[1][1] == 'o' && board[1][0] == 'o')
        {
			printf("O wins 38\n");
		}
	}
}
int main()
{
	char board_input[10];
	char board[3][3];

	string_read(board_input);
	string_array(board_input,board);
	array_print(board);
	array_check(board);

	return 0;
}

