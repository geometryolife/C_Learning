/* 先自己实现程序清单9.1 -- lethead1.c */
// 要求: 程序要使用函数，进行模块化设计
#include <stdio.h>
void print_star(int snum);
int main(void)
{
	print_star(40);
	printf("GIGATHINK, INC.\n");
	printf("101 Megabuck Plaza\n");
	printf("Megapolis, CA 94904\n");
	print_star(41);
}

// 定义星星函数
void print_star(int snum)
{
	while (snum-- > 0)
		printf("*");
	printf("\n");
}
