// 将scores_in.c的3个for循环合并成一个循环
#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;

	for (index = 0; index < SIZE; index++)
	{
		for (index = 0; index < SIZE; index++)
			for (index = 0; index < SIZE; index++)
				scanf("%d", &score[SIZE]);
		printf("\n");
		printf("%5d\n", &score[index]);
	}
}
