// 第一个表达式不一定是给变量赋初值，也可以使用
// printf(()。在执行其它部分之前，只对第一个表达式
// 求值一次或执行一次。
#include <stdio.h>
int main(void)
{
	int num = 0;

	for (printf("Keep entering number!\n"); num != 6;)
		scanf("%d", &num);
	printf("That's the one I want!\n");

	return 0;
}
