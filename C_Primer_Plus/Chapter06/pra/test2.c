/* 使用嵌套循环，按下面的格式打印字母 */
#include <stdio.h>
#define CHARACTER '$'
#define ROWS 5
int main(void)
{
	int row, col;

	for (row = 0; row < ROWS; row++)
	{
		for (col = 0; col <= row; col++)
			printf("%c", CHARACTER);
		printf("\n");
	}
}


/*
>>> Execution Result:
$
$$
$$$
$$$$
$$$$$
 */
