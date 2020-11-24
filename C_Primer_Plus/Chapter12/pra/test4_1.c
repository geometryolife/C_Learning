/* 在一个循环中编写并测试一个函数，该函数返回它被调用的次数。 */
/* 方法1: 使用内部链接的静态变量 */
#include <stdio.h>
void call_count(void);
static int number;

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		call_count();
	printf("函数总共被调用了 %d 次。\n", number);
	for (i = 0; i < 5; i++)
		call_count();
	printf("函数总共被调用了 %d 次。\n", number);

	return 0;
}

void call_count(void)
{
	number++;
}


/*
>>> Execution Result:
函数总共被调用了 10 次。
函数总共被调用了 15 次。
 */
