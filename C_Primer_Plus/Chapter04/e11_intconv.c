// intconv.c -- 一些不匹配的整型转换
#include <stdio.h>
#include <limits.h>
#define PAGES 336
#define WORDS 65618

int main(void)
{
	short num = PAGES;
	short mnum = -PAGES;

	printf("%zd\n%zd\n%zd\n%zd\n", sizeof(short), sizeof(unsigned short),
			sizeof(int), sizeof(unsigned int));
	// 使用系统提供的明示常量，查看类型的最值
	printf("%d\n%d\n%d\n", SHRT_MAX, SHRT_MIN, USHRT_MAX);
	printf("%d\n%d\n%d\n", INT_MAX, INT_MIN, UINT_MAX);

	printf("num as short and unsigned short: %hd %hu\n", num, num);
	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
	printf("num as int and char: %d %c\n", num, num);
	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);

	return 0;
}
