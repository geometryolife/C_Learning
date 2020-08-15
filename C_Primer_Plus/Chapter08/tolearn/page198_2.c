/* 验证输入
假如编写了一个处理非负整数的循环，但是用户很可能输入一个负数。
可以使用关系表达式来排除这种情况。 */
#include <stdio.h>
int main(void)
{
	long n;

	// while循环:当输入是一个整数且为正时
	while (scanf("%ld", &n) == 1 && n >= 0)
	{
		// 处理n
	}
}
