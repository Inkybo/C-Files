#include <stdio.h>

int main()
{
	int S;
	int N = 0;
	int dice_one = 0;
	int dice_two = 0;
	int sum = 0;
	int same = 0;
	int roll_num = 1;

	printf("enter a seed value: ");
	scanf("%d", &S);

	printf("How many rolls: ");
	scanf("%d", &N);

	srand(S);

	if(N <= 10)
	{
		for(N = N;N > 0; N = N - 1)
		{
            printf("===roll %d=== \n", roll_num);
            roll_num = roll_num + 1;

	    	printf("Dice #1 \n");

			dice_one = rand() %10 + 1;
			printf("%d \n", dice_one);

			printf("Dice #2 \n");

        	dice_two = rand() %10 + 1;
 	        printf("%d \n", dice_two);

			if(dice_one + dice_two == 15)
			{
				sum = sum +1;
			}
			if(dice_one == dice_two)
			{
				same = same + 1;
			}
		}
	}
    if(N > 10)
    {
        for(N = N;N > 0; N = N - 1)
        {
			roll_num = roll_num + 1;
            dice_one = rand() %10 + 1;
            dice_two = rand() %10 + 1;

            if(dice_one + dice_two == 15)
            {
                sum = sum +1;
            }
            if(dice_one == dice_two)
            {
                same = same + 1;
            }
        }
    }
    printf("doubles were rolled %d times \n", same);
	printf("the sum was 15 %d times \n", sum);
	return 0;
}
