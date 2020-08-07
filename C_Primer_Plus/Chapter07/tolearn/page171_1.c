// 测试continue在while循环从何处执行
#include <stdio.h>
int main(void)
{
	int count = 0;
	char ch;

	while (count < 10)
	{
		ch = getchar();
		if (ch == '\n')
			continue;
		putchar(ch);
		count++;
	}

	return 0;
}
