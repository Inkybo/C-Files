#include <stdio.h>

int OneQuestion()
{
	int num_1;
	int num_2;
	int answer;
	int input;
	int correct = 0;
	int incorrect = 0;

	do
	{
		num_1 = rand()% 20 + 1; // 1 to 20
		num_2 = rand()% 20 + 1;

		printf("%d + %d = ?\n", num_1, num_2);
		printf("answer: ");
		scanf("%d", &input);

		answer = num_1 + num_2;

		if(answer == input)
		{
			correct++;
		}
		if(answer != input)
		{
			incorrect++;
		}

		printf("=============================\n");
		printf("  correct: %d | incorrect: %d\n", correct, incorrect);
		printf("=============================\n");

	}while(correct < 6);

	return 0;
}

int main()
{
	srand(time(NULL));

	OneQuestion();

	return 0;
}
