/* 程序清单 6.1 的精简版本 */
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	while (scanf("%ld", &num))
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;
}

/*
>>> Result:
Please enter an integer to be summed (q to quit): 1
Please enter next integer (q to quit): 2
Please enter next integer (q to quit): 3
Please enter next integer (q to quit): 4
Please enter next integer (q to quit): q
Those integers sum to 10.
 */
