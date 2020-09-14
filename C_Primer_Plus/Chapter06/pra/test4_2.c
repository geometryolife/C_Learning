/* 使用嵌套循环，按下面的格式打印字母
如果你的系统不使用以数字顺序编码的代码，请使用练习3的方案解决。 */
#include <stdio.h>
#define ROWS 6
int main(void)
{
	int row, col, i;
	char lets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0, row = 0; row < ROWS; row++)
	{
		for (col = 0; col <= row; col++, i++)
			printf("%c", lets[i]);
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
