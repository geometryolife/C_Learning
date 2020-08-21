/* 把用分钟表示的时间转换成用小时和分钟表示的时间。使用#difine
或const创建一个表示60的符号常量或const变量。通过while循环让
用户重复输入值，直到用户输入小于或等于0的值才停止循环。 */
#include <stdio.h>
#define RATE 60
int main(void)
{
	int minutes, hours, left;

	printf("请输入一个分钟整数，我将会为你转换成小时和分钟!\n");
	printf("如果输入小于等于零的数，那么我将结束服务!\n");
	scanf("%d", &minutes);
	while (minutes > 0)
	{
		hours = minutes / RATE;
		left = minutes % RATE;
		printf("您输入了 %d 分钟，总计 %d 时 %d 分。\n",
				minutes, hours, left);
		printf("请继续输入(小于等于零退出): ");
		scanf("%d", &minutes);
	}

	return 0;
}
