// 把用分钟表示的时间转换成用小时和分钟表示的时间。使用#difine
// 或const创建一个表示60的符号常量或const变量。通过while循环让
// 用户重复输入值，直到用户输入小于或等于0的值才停止循环。
#include <stdio.h>
int main(void)
{
	const int SEC = 60;
	int min, hours, left;

	/*printf("Hi, how long does it take you to eat dinner?\n");*/
	printf("How many minutes do you spend eating dinner?\n");
	scanf("%d", &min);
	hours = min / SEC;
	left = min % SEC;
	printf("Wow, you spent %d hour(s) %d minutes.\n", hours, left);

	return 0;
}
