// 提示用户输入天数，然后将其转换成周数和天数。例如，用户输
// 入 18，则转换成2周4天。以下面的格式显示结果:
// 18 days are 2 weeks, 4 days.
#include <stdio.h>
# define DAYS_PER_WEEK 7
int main(void)
{
	int day, week, left;

	printf("Please input a number of day: ");
	scanf("%d", &day);
	week = day / DAYS_PER_WEEK;
	left = day % DAYS_PER_WEEK;
	printf("%d days are %d weeks, %d days.\n", day, week, left);

	return 0;
}
