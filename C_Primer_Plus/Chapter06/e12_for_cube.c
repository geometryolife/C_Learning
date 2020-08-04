// for_cube.c -- 使用 for 循环创建一个立方表
#include <stdio.h>
int main(void)
{
	int num;

	printf("    n  n cubed\n");
	for (num = 1; num <= 6; num++)
		printf("%5d %5d\n", num, num*num*num);
	// 循环结束，并不会马上回收num
	printf("final_n = %d\n", num);

	return 0;
}
