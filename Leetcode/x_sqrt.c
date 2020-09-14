/* 实现 int sqrt(int x) 函数。
计算并返回 x 的平方根，其中 x 是非负整数。
由于返回的类型是整数，结果只保留整数的部分，小数部分将被舍去。 */
#include <stdio.h>
int mySqrt(int x);
int main(void)
{
	printf("%d\n", mySqrt(1213123323));

	return 0;
}

int mySqrt(int x)
{
	int result;
	unsigned int t;

	for (t = 1; t * t < x; t++)
		continue;
	if (t * t == x)
		result = t;
	else
		result = t - 1;
	/* return (int) (t - 1); */
	return result;
}
