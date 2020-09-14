/* 假设value是int类型，输出什么；如果是double类型，会出现什么问题? */
#include <stdio.h>
int main(void)
{
	int value;
	/* double value; */

	for (value = 36; value > 0; value /= 2)
		printf("%3d", value);

	return 0;
}


/*
>>> Execution Result:
36 18  9  4  2  1
改成double类型后，程序会不断执行 value /= 2
直到value的值小到计算机中double类型无法再表示，后退出。
 */
