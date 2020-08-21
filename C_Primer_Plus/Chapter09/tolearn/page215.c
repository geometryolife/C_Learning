/* lesser.c -- 找出两个整数中较小的一个 */
#include <stdio.h>

int imin(int num1, int num2);  // 声明函数原型

int main(void)
{
	int number1, number2;

	printf("Please enter two integers: ");
	while (scanf("%d%d", &number1, &number2) == 2)
	{
		printf("The minimum is: %d\n",
				imin(number1, number2));
	}

	return 0;
}

/* imin()函数定义 */
int imin(int num1, int num2)
{
	int min;

	min = (num1 < num2) ? num1 : num2;

	return min;
}
