// 第3个表达式可以使用任意合法的表达式。
// 无论是什么表达式，每次迭代都会更新该表达式的值。
#include <stdio.h>
void second_way(void);
int main(void)
{
	int x;
	int y = 55;

	for (x = 1; y <= 75; y = (++x * 5) + 50)
		printf("%10d %10d\n", x, y);

	putchar('\n');
	second_way();

	return 0;
}

void second_way(void)
{
	int x;
	int y = 55;

	for (x = 1; y <= 75; y)
	{
		printf("%10d %10d\n", x, y);
		y = (++x * 5) + 50;
	}
}


/*
>>> Execution Result:
         1         55
         2         60
         3         65
         4         70
         5         75

         1         55
         2         60
         3         65
         4         70
         5         75
 */
