// 利用 float.h 查看系统的一些明示常量
#include <stdio.h>
#include <float.h>
int main(void)
{
	printf("float 类型的尾数位数: %d\n", FLT_MANT_DIG);
	printf("float 类型的最少有效数字位数(十进制): %d\n", FLT_DIG);
	printf("带全部有效数字的 float 类型的最小负指数(以10为底): %d\n", FLT_MIN_10_EXP);
	printf("float 类型的最大正指数(以10为底): %d\n", FLT_MIN_10_EXP);
	printf("保留全部精度的 float 类型最小正数: %e\n", FLT_MIN);
	printf("float 类型的最大正数: %e\n", FLT_MAX);
	printf("1.00 和比 1.00 大的最小 float 类型值之间的差值: %e\n", FLT_EPSILON);

	return 0;
}
