/* 验证输入
假如编写了一个处理非负整数的循环，但是用户很可能输入一个负数。
可以使用关系表达式来排除这种情况。 */
#include <stdio.h>
int main(void)
{
	long input;
	char ch;

	while (scanf("%ld", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);  // 处理错误的输入
		printf(" is not an integer.\nPlease enter an ");
		printf("intger value, such as 25, -178, or 3: ");
	}

	return input;
}
