/* 把年龄转化为天数，并显示这两个值，不用考虑润年 */
#include <stdio.h>
int main(void)
{
	int days, ages;

	ages = 23;
	days = 365 * ages;
	printf("How old are you?\n");
	printf("%d years old, about %d days.\n", ages, days);

	return 0;
}
