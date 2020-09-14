/* 修改程序清单 10.7 的rain.c程序，用指针进行计算(仍要声明并初始化数组)。 */
#include <stdio.h>
#define MONTHS 12
#define YEARS 5

int main(void)
{
	/* 用 2010~2014 年的降水量数据初始化数组 */
	const float rain[YEARS][MONTHS] =
	{
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
	};
	int year, month;
	float subtot, total;

	printf("YEAR       RAINFALL (inches)\n");
	for (year = 0, total = 0; year < YEARS; year++)
	{
		for (month = 0, subtot = 0; month < MONTHS; month++)
			subtot += *(*(rain + year) + month);
		printf("%-5d %15.1f\n", 2010 + year, subtot);
		total += subtot;
	}
	printf("\nThe yearly average rainfall is %.1f inches.\n\n", total / YEARS);
	printf("MONTHLY AVERAGE:\n\n");
	printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, subtot = 0; year < YEARS; year++)
			subtot += *(*(rain + year) + month);
		printf("%.1f ", subtot / YEARS);
	}
	printf("\n");



	return 0;
}


/*
>>> Execution Result:
YEAR       RAINFALL (inches)
2010             32.4
2011             37.9
2012             49.8
2013             44.0
2014             32.9

The yearly average rainfall is 39.4 inches.

MONTHLY AVERAGE:

Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec
7.3 7.3 4.9 3.0 2.3 0.6 1.2 0.3 0.5 1.7 3.6 6.7
 */
