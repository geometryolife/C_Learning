/* 设计一个函数min(x, y)，返回两个double类型值的较 */
/* 小值。在一个简单的驱动程序中测试该函数。 */

#include <stdio.h>

double min(double, double);  // 函数原型

int main(void)
{
	double number1, number2;

	printf("Please enter two numbers of double type:\n");
	scanf("%lf%lf", &number1, &number2);
	printf("The minimum of %.2lf and %.2lf is %.2lf.\n",
			number1, number2, min(number1, number2));

	return 0;
}

double min(double num1, double num2)
{
	double minimum;

	minimum = (num1 < num2) ? num1 : num2;

	return minimum;
}
