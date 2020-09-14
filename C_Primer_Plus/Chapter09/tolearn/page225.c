/* 使用斐波那契数列测试递归的缺点 */
#include <stdio.h>
unsigned long Fibonacci(int);

int main(void)
{
	// Fibonacci(40);
	printf("%lu\n", Fibonacci(60));
	// printf("%zd\n", sizeof (unsigned long));

	return 0;
}

// 定义斐波那契数列
unsigned long Fibonacci(int n)
{
	if (n > 2)
		return Fibonacci(n -1) + Fibonacci(n - 2);
	else
		return 1;
}


/*
>>> Execution Result:
102334155
 */
