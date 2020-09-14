/* put1.c -- 打印字符串，不添加\n */
#include <stdio.h>
void put1(const char * string)  /* 不会改变字符串 */
{
	while (*string != '\0')
		putchar(*string++);
}

void put2(const char * string)
{
	int i = 0;
	while (string[i] != '\0')
		putchar(string[i++]);
}

void put3(const char * string)
{
	while (*string)
		putchar(*string++);
}

/* put1()使用指针表示法，put2()使用数组表示法，相对复杂一点。
put3()比前两种方法简洁、普遍，程序要应该熟悉这种写法。
put3()表示当string指向空字符时，*string的值是0，即测试条件为假，
while循环结束。 */
