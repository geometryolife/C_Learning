/* when.c -- 何时退出循环 */
#include <stdio.h>
int main(void)
{
	int n = 5;

	while (n < 7)  // 第 7 行
	{
		printf("n = %d\n", n);
		n++;  // 第 10 行
		printf("Now, n = %d\n", n);  // 第 11 行
	}
	printf("The loop has finished.\n");

	return 0;
}

/*
>>> Result:
n = 5
Now, n = 6
n = 6
Now, n = 7
The loop has finished.
 */
