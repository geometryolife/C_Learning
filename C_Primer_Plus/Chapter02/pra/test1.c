/* 打印名字 */
// printf(),调用一次,打印名和姓在一行
// printf(),调用一次把名和姓分别打印在两行
// printf(),调用两次，把名和姓打印在一行

#include <stdio.h>
int main(void)
{
	printf("Joe Chen\n");

	printf("Joe\nChen\n");

	printf("Joe ");
	printf("Chen\n");

	return 0;
}
