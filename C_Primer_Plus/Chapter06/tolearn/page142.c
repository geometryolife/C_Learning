// 将scores_in.c的3个for循环合并成一个循环
// 利用了switch语句和if语句来实现
#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;
	int sw = 0;

	printf("Enter %d golf score:\n", SIZE);
	for (index = 0; index < SIZE;)
	{
		switch (sw)
		{
			case 0:
				scanf("%d", &score[index]);
				index++;
				if (index == SIZE)
				{
					sw = 1;
					index = 0;
				}
				break;
			case 1:
				if (!index)
					printf("The scores read in are as follow:\n");
				printf("%5d", score[index]);
				index++;
				if (index == SIZE)
				{
					sw = 2;
					index = 0;
					printf("\n");
				}
				break;
			case 2:
				sum += score[index];
				average = (float) sum / SIZE;
				index++;
				if (index == SIZE)
				{
					printf("Sum of scores = %d, average = %.2f\n", sum, average);
					printf("That's a handicap of %.0f.\n", average - PAR);
				}
				break;
		}
	}

	return 0;
}


/*
>>> Execution Result:
Enter 10 golf score:
99 95 109 105 100
96 98 93 99 97 98
The scores read in are as follow:
   99   95  109  105  100   96   98   93   99   97
Sum of scores = 991, average = 99.10
That's a handicap of 27.
 */
