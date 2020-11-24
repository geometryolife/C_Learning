/* 在一个循环中编写并测试一个函数，该函数返回它被调用的次数。 */
/* 方法2: 使用返回值实现 */
#include <stdio.h>
int call_count(void);

int main(void)
{
	int i, count;

	for (i = 0; i < 10; i++)
		count = call_count();
	printf("函数总共被调用了 %d 次。\n", count);
	for (i = 0; i < 6; i++)
		count = call_count();
	printf("函数总共被调用了 %d 次。\n", count);

	return 0;
}
int call_count(void)
{
	static int times;

	times++;

	return times;
}


/*
这个法使用的块作用域的静态变量与方法1使用的内部链接的静态变量效果一样，
由于静态变量，只在编译时初始化一次，方法1 & 2只能应用在计算总次数的情
况，如果想单独计算在一个循环调用的总次数需要使用别的方法。
>>> Execution Result:
函数总共被调用了 10 次。
函数总共被调用了 16 次。
 */
