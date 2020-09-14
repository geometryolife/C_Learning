/* 使用嵌套循环，按下面的格式打印字母
如果你的系统不使用以数字顺序编码的代码，请使用练习3的方案解决。 */
#include <stdio.h>
#define ROWS 6
int main(void)
{
	char ch;
	int row, col;

	for (ch = 'A', row = 0; row < ROWS; row++)
	{
		for (col = 0; col <= row; ch++, col++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}


/*
>>> Execution Result:
A
BC
DEF
GHIJ
KLMNO
PQRSTU
 */
