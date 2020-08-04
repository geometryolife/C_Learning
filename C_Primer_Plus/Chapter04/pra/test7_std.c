// 将一个double类型的变量设置为1.0/3.0，一个float类型的变量设
// 置为1.0/3.0。分别显示两次计算的结果各3次:
// 一次显示小数点后面6位数字；
// 一次显示小数点后面12位数字；
// 一次显示小数点后面16位数字。
// 程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。
// 1.0/3.0的值与这些值一致吗?
#include <stdio.h>
#include <float.h>
int main(void)
{
	double d = 1.0 / 3.0;
	float f = 1.0 / 3.0;

	// float 类型有6位有效数字
	printf("float of one third(6) = %.6f\n", f);
	// float 类型有12位有效数字
	printf("float of one third(12) = %.12f\n", f);
	// float 类型有16位有效数字
	printf("float of one third(16) = %.16f\n", f);
	// double 类型有6位有效数字
	printf("double of one third(6) = %.6lf\n", d);
	// double 类型有12位有效数字
	printf("double of one third(12) = %.12lf\n", d);
	// double 类型有16位有效数字
	printf("double of one third(16) = %.16lf\n", d);
	printf("FLT_DIG in float.h is %d\n", FLT_DIG);
	printf("DBL_DIG in float.h is %d\n", DBL_DIG);

	return 0;
}
