/* 方法三: 暴力求解 */

#include <stdio.h>

int main(void)
{
	int x, y, i;
	for (y = 10; ; y++)
	{
		x = y;
		for (i = 0; i < 7; i++)
			x = x / 2 - 1;
		if (x == 2)
			break;
		else
			continue;
	}
	printf("松鼠共采摘: %d 个松果。\n", y);
	printf("每经过一个村卖出:\n");
	for (i = 0; i < 7; i++)
		printf("第%d个村: %d\n", i + 1, y = y / 2 + 1);

	return 0;
}
