// echo.c -- 重复输入
// 使用行缓冲
#include <stdio.h>
int main(void)
{
	char ch;

	while ((ch = getchar()) != '#')
		putchar(ch);

	return 0;
}
