/* sweetie1.c -- 一个计数循环 */
#include <stdio.h>
int main(void)
{
	const int NUMBER = 22;
	int count = 1;  // 初始化

	while (count <= NUMBER)  // 测试
	{
		printf("By my Valentine!\n");  // 行为
		count++;  // 更新计数
	}

	return 0;
}


/* 程序虽然运行良好，但是定义循环的行为并未组织在一起，
程序的编排并不是很理想。 */
