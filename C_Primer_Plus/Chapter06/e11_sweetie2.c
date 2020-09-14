/* sweetie2.c -- 使用 for 循环的计数循环 */
#include <stdio.h>
int main(void)
{
	const int NUMBER = 22;
	int count;

	// for 圆括号中的表达式也叫作控制表达式，它们都是完整表达式，
	// 所以每个表达式的副作用都发生在下一个表达式之前。
	for (count = 1; count <= NUMBER; count++)
		printf("Be my Valentine!\n");

	return 0;
}
