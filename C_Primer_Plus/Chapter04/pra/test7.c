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

	printf("%f %f\n", d, f);
	printf("%.12f %.12f\n", d, f);
	printf("%.16f %.16f\n", d, f);

	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);

	return 0;
}
