/* boolean.c -- 使用 _Bool 类型的变量 variable */
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	_Bool input_is_good;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	input_is_good = (scanf("%ld", &num) == 1);
	while (input_is_good)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		input_is_good = (scanf("%ld", &num) == 1);
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;
}

/*
>>> Execution Result:
Please enter an integer to be summed (q to quit): 12
Please enter next integer (q to quit): 15
Please enter next integer (q to quit): 39
Please enter next integer (q to quit): q
Those integers sum to 66.
 */
