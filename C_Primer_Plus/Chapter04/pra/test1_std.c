// 提示用户输入名和姓，以"名,姓"的格式打印出来。
#include <stdio.h>
int main(void)
{
	char name[40];
	char surname[40];

	// 读取名字输入，存储至 name[] 数组中。
	// 由于scanf()函数的特性，字符串的输入不能有空白字符。
	printf("Please input your first name: ");
	scanf("%s", name);

	// 读取姓输入，存储至 surname[] 数组中
	printf("Please input your last name: ");
	scanf("%s", surname);

	printf("Hello, %s, %s.\n", name, surname);

	return 0;
}
