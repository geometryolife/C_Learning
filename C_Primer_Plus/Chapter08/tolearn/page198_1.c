/* 验证输入
假如编写了一个处理非负整数的循环，但是用户很可能输入一个负数。
可以使用关系表达式来排除这种情况。 */
#include <stdio.h>
int main(void)
{
	long n;

	scanf("%ld", &n);  // 获取第1个值
	while (n >= 0)
	{
		// 处理n
		scanf("%ld", &n);  // 获取下一个值
	}

	return 0;
}
