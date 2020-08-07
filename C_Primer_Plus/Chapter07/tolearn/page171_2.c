// 测试continue在for循环从何处执行
#include <stdio.h>
int main(void)
{
	int count;
	char ch;

	for (count = 0; count < 10; count++)
	{
		ch = getchar();
		if (ch == '\n')
			continue;
		putchar(ch);
	}

	return 0;
}
