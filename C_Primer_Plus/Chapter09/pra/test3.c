/* 
 * 编写一个函数，接受3个参数: 一个字符和两个整数。字符参数是
 * 待打印的字符，第1个整数指定一行中打印字符的次数，第2个整数
 * 指定打印字符的行数。编写一个调用该函数的程序。
 *  */

#include <stdio.h>

void draw(char, int, int);  // 函数原型

int main(void)
{
	char chs;
	int times, lines;

	/* draw('a', 5, 2); */
	printf("Please enter a character you want to print, and then\n");
	printf("enter the number of rows and columns you want to print:\n");
	while ((chs = getchar()) != '\n')
	{
		if (scanf("%d %d", &lines, &times) != 2)
			break;  // 在返回值不等于2时终止程序
		draw(chs, times, lines);
		// while循环实现丢弃scanf()输入后面的所有字符(包括换行符)
		while (getchar() != '\n')
			continue;
		printf("Enter a character and two integers;\n");
		printf("Enter a newline to quit.\n");
	}
	printf("Bye.\n");

	return 0;
}

void draw(char ch, int times, int lines)
{
	int i, j;

	// 外层循环控制待打印的行数
	for (i = 0; i < lines; i++)
	{
		// 内层循环控制字符在一行中打印的次数
		for(j = 0; j < times; j++)
		{
			putchar(ch);
		}
		putchar('\n');  // 这一行是关键，控制换行
	}
}
