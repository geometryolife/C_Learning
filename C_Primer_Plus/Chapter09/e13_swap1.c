/* swap1.c -- 第1个版本的交换函数 */
#include <stdio.h>
void interchange(int u, int v);  // 函数声明

int main(void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(x, y);
	printf("Now x = %d and y = %d.\n", x, y);

	return 0;
}

void interchange(int u, int v)  // 定义函数
{
	int temp;

	temp = u;
	u = v;
	v = temp;
}
