/* day_mon2.c -- 让编译器计算元素个数 */
#include <stdio.h>

int main(void)
{
	const int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31 };
	int index;

	for (index = 0; index < sizeof days / sizeof days[0]; index++)
		printf("Month, %2d has %d days.\n", index + 1, days[index]);

	return 0;
}


/*
省略声明数组大小，编译器根据初始化列表确定数组大小。
sizeof运算符计算运算对象的大小(字节)。
以上实现的自动计数弊端: 无法察觉初始化列表中的项是否有误。
使用C99新增的指定初始化器，既可以防止初始化值的个数超过数组的大小，
又能够让程序计算数组的大小。
>>> Execution Result:
Month,  1 has 31 days.
Month,  2 has 28 days.
Month,  3 has 31 days.
Month,  4 has 30 days.
Month,  5 has 31 days.
Month,  6 has 30 days.
Month,  7 has 31 days.
Month,  8 has 31 days.
Month,  9 has 30 days.
Month, 10 has 31 days.
 */
