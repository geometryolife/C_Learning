#include <stdio.h>
int main(void)
{
	int i, j, list[10];

	for (i = 1; i < 10; i++)
	{
		list[i] = 2 * i + 3;
		for (j = 1; j <= i; j++)
			printf("%d ", list[j]);
		printf("\n");
	}

	return 0;
}


/*
>>> Execution Result:
5
5 7
5 7 9
5 7 9 11
5 7 9 11 13
5 7 9 11 13 15
5 7 9 11 13 15 17
5 7 9 11 13 15 17 19
5 7 9 11 13 15 17 19 21
 */
