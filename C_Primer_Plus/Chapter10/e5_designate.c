/* designate.c -- 使用指定初始化器 */
#include <stdio.h>
#define MONTHS 12
int main(void)
{
	// 初始化器将覆盖此(第2个元素)子对象的初始化
	int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29 };
	int i;

	for (i = 0; i < MONTHS; i++)
		printf("%2d  %d\n", i + 1, days[i]);

	return 0;
}


/*
>>> Execution Result:
 1  31
 2  29
 3  0
 4  0
 5  31
 6  30
 7  31
 8  0
 9  0
10  0
11  0
12  0
 */
