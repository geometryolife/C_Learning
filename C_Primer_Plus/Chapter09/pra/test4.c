/* 两数的调和平均数这样计算: 先得到两数的倒数，然后计算两个倒数
 * 的平均值，最后取计算结果的倒数。编写一个函数，接受两个double
 * 类型的参数，返回这两个参数的调和平均数。 */
#include <stdio.h>
double harmonic_mean(double, double);
double harmonic_mean2(double, double);

int main(void)
{
	double num1, num2;

	printf("Please enter two numbers: ");
	scanf("%lf%lf", &num1, &num2);
	printf("The harmonic mean is >>%.2lf<< of %.2lf and %.2lf\n",
			harmonic_mean(num1, num2), num1, num2);
	printf("\n调和平均数是: %.2lf\n", harmonic_mean2(num1, num2));

	return 0;
}

double harmonic_mean(double x, double y)
{
	double h = 0.0;

	// 化简之后的公式为h = (2 * x * y) / (x + y)
	h = (2 * x * y) / (x + y);

	return h;
}

double harmonic_mean2(double x, double y)
{
	double temp1, temp2, temp3, result;

	temp1 = 1.0 / x;
	temp2 = 1.0 / y;
	temp3 = (temp1 + temp2) / 2;
	result = 1.0 / temp3;

	return result;
}


/* 运行结果:
 * Please enter two numbers: 25 36.6
 * The harmonic mean is >>29.71<< of 25.00 and 36.60
 *
 * 调和平均数是: 29.71 */
