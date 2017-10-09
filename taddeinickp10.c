#include <stdio.h>


// one: seed the generator
void seed()
{
	int num_1;
	printf("enter seed value: ");
	scanf("%d", &num_1);
	srand(num_1);
}
// number 1 to 100
void two()
{
	int num_1;
	num_1 = rand() % 100 + 1;
	printf("Value: %d", num_1);
}
// roll a 6-sided dice
void three()
{
	int dice;
	dice = rand()% 6 + 1;
	printf("%d", dice);
}

// sum of N values
void four()
{
	int num_rand;
	int num_rand_2;
	int i;
	int sum = 0;

	num_rand = rand()% 25 + 1;

	for(i = 0; i < num_rand; ++i)
	{
		num_rand_2 = rand()% 20 + 1;

		sum = sum + num_rand_2;
/*debug*/		printf("rand: %d  sum: %d\n", num_rand_2, sum);
	}
	printf("the sum is %d\n", sum);
}
void five()
{
    int num_rand;
    int num_rand_2;
    int i;
    int max = -1;

    num_rand = rand()% 50 + 1;

    for(i = 0; i < num_rand; ++i)
    {
        num_rand_2 = rand()% 50 + 1;

		if(num_rand_2 > max)
		{
			max = num_rand_2;
		}
/*debug*/	printf("rand: %d  max: %d\n", num_rand_2, max);
    }
    printf("the max is %d\n", max);
}
void six()
{
	int num_rand;
    int num_rand_2;
    int i;
    int min = 91;

    num_rand = rand()% 75 + 1;

    for(i = 0; i < num_rand; ++i)
    {
        num_rand_2 = rand()% 90 + 1;

        if(num_rand_2 < min)
		{
			min = num_rand_2;
		}
/*debug*/		printf("rand: %d  max: %d\n", num_rand_2, min);
    }
    printf("the min is %d\n", min);
}
void seven()
{
	int roll_time;
	int i;

	roll_time= rand()% 11 + 1;

	for(i = 1; i < roll_time; i++)
	{
		printf("roll #%d: ", i);
		three();
		printf("\n");
	}
}
int main()
{
 int choice;
 int x, res;

 srand( time(NULL) );

 do
 {
   printf("\n");
   printf("------ Menu ------------\n");

   printf(" 1) Set the seed\n");
   printf(" 2) Number 1 to 100\n");
   printf(" 3) Roll a dice\n");
   printf(" 4) Sum of N(1-25) random values (1-20)\n");
   printf(" 5) Max of N(1-50) random values (1-50)\n");
   printf(" 6) Min of N(1-75) random values (1-90)\n");
   printf(" 7) N(1-10) dice rolls\n");
   printf(" 0) quit\n");

   choice = -1;
   while (choice < 0 || choice > 7)
   {
    printf("Choice 0-4: ");
    scanf("%d", &choice);
   }

	switch (choice)
	{
	case  1:  seed();	break;
	case  2:  two(); 	break;
	case  3:  three();	break; 
	case  4:  four();	break; 
	case  5:  five();	break; 
	case  6:  six();	break; 
	case  7:  seven();	break; 
	}

 } while (choice > 0);

 return 0; 
}
