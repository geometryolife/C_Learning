/* 编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式
打印字母:
打印这样的图形，要根据用户输入的字母来决定。例如，上面的图形是在用户输入
E后的打印结果，提示: 外层循环处理行，使每行使用3个内层循环，分别处理空格、
以升序打印字母、以降序打印字母。如果系统不使用 ASCII 或其它以数字顺序编码
的代码，请参照练习3的解决方案。 */
#include <stdio.h>
#define ROWS 3
#define COLS 3
#define SPACE ' '
int main(void)
{
	char ch;
	int row, col;

	for (row = 0; row < ROWS; row++)
	{
		for()
		/* for (col = 0, ch = 'A'; col < COLS; col++) */
			/* putchar(ch); */
		/* putchar('\n'); */
	}



	/* char ch; */
	/* int row, col, sp; */
	/* printf("Please enter a capital:\n"); */

	/* for (ch = 'A', row = 0; row < ROWS; row++) */
	/* { */
		/* for (sp = 0; sp < row - 1; sp++) */
			/* putchar(' '); */
		/* for (col = 0; col <= row; ch++, col++) */
			/* putchar(ch); */
	/* } */

	return 0;
}
