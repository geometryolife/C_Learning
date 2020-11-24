/* copy2.c -- 使用 strcpy() */
#include <stdio.h>
#include <string.h>  /* 提供 strcpy() 的函数原型 */
#define WORDS "beast"
#define SIZE 40

int main(void)
{
	const char * orig = WORDS;
	char copy[SIZE] = "Be the best that you can be.";
	char * ps;

	puts(orig);
	puts(copy);
	ps = strcpy(copy + 7, orig);
	puts(copy);
	puts(ps);

	return 0;
}


/*
strcpy()两个有用的属性
strcpy() 的返回值类型是char *，该函数返回的是第1个参数的值，即一个字符的地址。
第1个参数不必指向数组的开始。这个属性可用用拷贝数组的一部分。
>>> Execution Result:
beast
Be the best that you can be.
Be the beast
beast
 */
