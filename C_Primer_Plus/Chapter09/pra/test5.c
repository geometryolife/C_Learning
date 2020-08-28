/* 编写并测试一个函数 larger_of()，该函数把两个 double 类型变量
 * 的值替换为较大的值。例如，larger_of(x, y)会把x和y中较大的值重
 * 新赋给两个变量。 */
#include <stdio.h>
double larger_of(double, double);
void larger_of2(double *, double *);

int main(void)
{
	double x, y, x2, y2;

	printf("Please enter two numbers:\n");
	scanf("%lf%lf", &x, &y);
	printf("Way1:\n");
	x2 = x;  // 给方法2使用，不用再重新输入值
	y2 = y;
	printf("Before: x = %.2lf\tx = %.2lf\n", x, y);
	x = y = larger_of(x, y);
	printf("Now: x = %.2lf\tx = %.2lf\n", x, y);

	printf("\nWay2:\n");
	larger_of2(&x2, &y2);
	printf("Now: x = %.2lf\tx = %.2lf\n", x2, y2);

	return 0;
}

/* 使用函数返回值实现 */
double larger_of(double x, double y)
{
	double max;

	max = (x > y) ? x : y;

	return max;
}

/* 使用指针实现 */
void larger_of2(double * x2, double * y2)
{
	// 使用if...else语句
	if (*x2 > *y2)
		*y2 = *x2;
	else
		*x2 = *y2;

	// 使用条件运算符
	// *x2 > *y2 ? (*y2 = *x2) : (*x2 = *y2);
}

/*
 * 运行结果:
 * Please enter two numbers:
 * 15 18
 * Way1:
 * Before: x = 15.00       x = 18.00
 * Now: x = 18.00  x = 18.00
 *
 * Way2:
 * Now: x = 18.00  x = 18.00
 *  */
