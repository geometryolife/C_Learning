/* 使用嵌套循环，按下面的格式打印字母。
注意: 如果你的系统不使用ASCII或其它以数字顺序编码的代码，可以把
字符数组初始化为字母表:
char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
然后用数组下标选择单独的字母，例如lets[0]是'A'，等等。 */
#include <stdio.h>
#define ROWS 6
int main(void)
{
	char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int row, col, i;

	for (row = 0; row < ROWS; row++)
	{
		for (i = 5, col = 0; col <= row; i--, col++)
			printf("%c", lets[i]);
		printf("\n");
	}

	return 0;
}


/*
>>> Execution Result:
F
FE
FED
FEDC
FEDCB
FEDCBA
 */
