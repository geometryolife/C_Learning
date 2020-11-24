/* dyn_arr.c -- 动态分配数组 */
#include <stdio.h>
#include <stdlib.h>  /* 为 malloc()、free() 提供函数原型 */

int main(void)
{
	double * ptd;
	int max;
	int number;
	int i = 0;

	puts("What is the maximum number of type double entries?");
	if (scanf("%d", &max) != 1)
	{
		puts("Number not correctly entered -- bye.");
		exit(EXIT_FAILURE);
	}
	ptd = (double *) malloc(max * sizeof(double));
	if (ptd == NULL)
	{
		puts("Memory allocation failed. Goodbye.");
		exit(EXIT_FAILURE);
	}
	/* ptd 现在指向有 max 个元素的数组 */
	puts("Enter the values (q to quit):");
	while (i < max && scanf("%lf", &ptd[i]) == 1)
		++i;
	printf("Here are your %d entries:\n", number = i);
	for (i = 0; i < number; i++)
	{
		printf("%7.2f ", ptd[i]);
		if (i % 7 == 6)
			putchar('\n');
	}
	if (i % 7 != 0)
		putchar('\n');
	puts("Done.");
	free(ptd);

	return 0;
}


/*
>>> Execution Result:
What is the maximum number of type double entries?
5
Enter the values (q to quit):
20 30 35 25 40 80
Here are your 5 entries:
  20.00   30.00   35.00   25.00   40.00
Done.
 */
