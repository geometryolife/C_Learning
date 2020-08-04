// 修改 for_cube.c 的测试条件
#include <stdio.h>
int main(void)
{
	int num;

	printf("n  n cubed\n");
	for (num = 1; num*num*num <= 216; num++)
		printf("%d %7d\n", num, num*num*num);

	return 0;
}
