// 循环体中的行为可以改变循环头中的表达式。
#include <stdio.h>
int main(void)
{
	int delta, n;

	for (n = 1; n <= 10000; n = n + delta)
	{
		printf("Please enter the number of delta: ");
		scanf("%d", &delta);
		printf("n = %d\n", n);
	}

	return 0;
}
