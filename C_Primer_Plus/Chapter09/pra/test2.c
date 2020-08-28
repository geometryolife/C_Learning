/* 设计一个函数chline(ch, i, j)，打印指定的字符j行i列。 */
/* 在一个简单的驱动程序中测试该函数。 */

#include <stdio.h>

void chline(char ch, int i, int j);  // 函数原型

int main(void)
{
	chline('*', 6, 3);

	return 0;
}

void chline(char ch, int i, int j)
{
	while (j > 0)
	{
		// 借助一个变量来控制内部循环，否则只能打印第一行
		// 注意: num必须在这里声明，否则无法其正确作用
		int num = 0;

		while (num < i)
		{
			putchar(ch);
			num++;
		}
		putchar('\n');
		j--;
	}
}


/*
void chline(char ch, int i, int j)
{
	int num;

	// for (int num1 = 0; num1 < j; num1++)
	for (; j > 0; j--)
	{
		// 下面这行会导致，只有第一行能打印出来，
		// 需要把i重置才能正常运行
		// for (; i > 0; i--)
		for (num = 0; num < i; num++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
*/

/* 
 * 使用两层for循环，以自增条件绘制
 * void chline(char ch, int i, int j)
 * {
 *     int row, col;
 * 
 *     for (row = 0; row < j; row++)
 *     {
 *         for (col = 0; col < i; col++)
 *         {
 *             putchar(ch);
 *         }
 *         putchar('\n');
 *     }
 * }
 *  */
