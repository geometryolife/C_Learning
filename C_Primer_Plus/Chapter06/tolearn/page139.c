// 修改rows2.c让打印的字母逐行增加
#include <stdio.h>
int main(void)
{
	const int ROWS = 6;
	const int CHARS = 6;
	int row;
	char ch;

	for (row = CHARS; row > 0; row--)
	{
		for (ch = 'A'; ch <= ('A' + (ROWS - row)); ch++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}
