/* 使用函数对程序 scores_in.c 进行模块化 */
#include <stdio.h>
#define SIZE 10
#define PAR 72
void for_model(void);

int main(void)
{
	for_model();

	return 0;
}

// for 循环模块
void for_model(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;

	printf("Enter %d golf scores:\n", SIZE);
	for (index = 0; index < SIZE; index++)
	{
		scanf("%d", &score[index]);
		if (index != 19)
			break;
		printf("The scores read in are as follows:\n");
		for (index = 0; index < SIZE; index++)
		{
			printf("%5d", score[index]);
			if (index != 19)
				break;
			for (index = 0; index < SIZE; index++)
				sum += score[index];
			average = (float) sum / SIZE;
			printf("Sum of score = %d, average = %.2f\n", sum, average);
			printf("That's a handicap of %.0f.\n", average - PAR);
		}
	}
}
