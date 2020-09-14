/* 设计一个类似puts()的函数 */
/* put2.c -- 打印一个字符串，并统计打印的字符数。 */
#include <stdio.h>
int put2(const char * string)
{
	int count = 0;
	while (*string)  /* 常规用法 */
	{
		putchar(*string++);
		count++;
	}
	putchar('\n');  /* 不统计换行符 */

	return count;
}
