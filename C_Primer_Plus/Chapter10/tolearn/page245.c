/* 自己实现一遍 rain.c -- 计算每年的总降水量、年平均降
 * 水量和5年中每月的平均降水量 */
#include <stdio.h>
#define MONTHS 12  // 一年的月份数
#define YEARS 5    // 年数

int main(void)
{
	// 用 2010~2014 年的降水量数据初始化数组
	const float rain[YEARS][MONTHS] =
	{
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
	};

	int year = 0, month = 0;
	float total, total_per_year, total_per_month;

	printf("年份     每年的总降水量(英尺)\n");
	for (year = 0, total = 0; year < YEARS; year++)
	{
		for (month = 0, total_per_year = 0; month < MONTHS; month++)
			total_per_year += rain[year][month];
		// 每年的总降水量
		printf("%d %8.1f\n", 2010 + year, total_per_year);
		// 5 年的总降水量
		total += total_per_year;
	}
	// 5 年的年平均降水量
	printf("\n年平均降水量: %.1f\n", total / 5);

	printf("\n5年的月平均降水量:\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, total_per_month = 0; year < YEARS; year++)
			total_per_month += rain[year][month];
		printf("%-4.1f ", total_per_month / 5);
	}
	putchar('\n');

	return 0;
}
