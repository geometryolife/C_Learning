/* 修改程序清单10.4 day_mon2.c，使用指定初始化器, 只指定小月进行初始化 */
#include <stdio.h>
int main(void)
{
	const int days[12] = { [3] = 30, [5] = 30, [8] = 30, [10] = 30 };
	int index;

	for (index = 0; index < sizeof days / sizeof days[0]; index++)
		printf("Month %2d has %d days.\n", index + 1, days[index]);

	return 0;
}


/*
>>> Execution Result:
Month  1 has 0 days.
Month  2 has 0 days.
Month  3 has 0 days.
Month  4 has 30 days.
Month  5 has 0 days.
Month  6 has 30 days.
Month  7 has 0 days.
Month  8 has 0 days.
Month  9 has 30 days.
Month 10 has 0 days.
Month 11 has 30 days.
Month 12 has 0 days.
 */
