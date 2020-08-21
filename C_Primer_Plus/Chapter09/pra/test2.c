/* 设计一个函数chline(ch, i, j)，打印指定的字符j行i列。 */
/* 在一个简单的驱动程序中测试该函数。 */

#include <stdio.h>

void chline(char ch, int i, int j);  // 函数原型

int main(void)
{
	chline('*', 6, 3);

	return 0;
}
/* 
 * void chline(char ch, int i, int j)
 * {
 *   while (j > 0)
 *   {
 *     while (i > 0)
 *     {
 *       putchar(ch);
 *       i--;
 *     }
 *     j--;
 *   }
 * }
 *  */

void chline(char ch, int i, int j)
{
	for (; j > 0; j--)
	{
		for (; i > 0; i--)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
