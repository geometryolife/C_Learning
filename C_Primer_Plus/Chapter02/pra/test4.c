/* 定义两个自定义函数，()和deny() */
#include <stdio.h>
// 函数声明
void jolly(void);
void deny(void);

int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();

	return 0;
}

void jolly()
{
	printf("For he's a jolly good fellow!\n");
}
void deny()
{
	printf("Which nobody can deny!\n");
}
