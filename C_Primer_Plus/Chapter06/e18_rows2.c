// rows2.c -- 依赖外部循环的嵌套循环
// 通过外层循环控制内层循环，在每次外层循环迭代时，
// 内层循环完成不同的任务。
#include <stdio.h>
int main(void)
{
	const int ROWS = 6;
	const int CHARS = 6;
	int row;
	int ch;

	for (row = 0; row < ROWS; row++)
	{
		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}


/*
>>> Execution Result:
ABCDEF
BCDEF
CDEF
DEF
EF
F
 */
