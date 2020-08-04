// 省略第2个表达式，被视为真，将出现无限循环
#include <stdio.h>
int main(void)
{
	for (; ;)
		printf("I want some action\n");

	return 0;
}
