/* 自己先实现 lethead2.c */
#include <stdio.h>
#include <string.h>  // 为strlen()提供函数原型
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, AC 94904"
#define WIDTH 40

void show_n_char(char signal, int length);  // 含参show_n_char()函数原型

int main(void)
{
	show_n_char('*', WIDTH);
	putchar('\n');
	show_n_char(' ', (WIDTH - strlen(NAME)) / 2);
	printf("%s\n", NAME);
	show_n_char(' ', (WIDTH - strlen(ADDRESS)) / 2);
	printf("%s\n", ADDRESS);
	show_n_char(' ', (WIDTH - strlen(PLACE)) / 2);
	printf("%s\n", PLACE);
	show_n_char('*', WIDTH);
	putchar('\n');

	return 0;
}

/* show_n_char()函数定义 */
void show_n_char(char signal, int length)
{
	int i = 0;

	while (i < length)
	{
		putchar(signal);
		i++;
	}
}
