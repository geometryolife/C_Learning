/* 在使用指针初始化字符串字面量时不使用const限定符。 */
#include <stdio.h>
int main(void)
{
	int i;
	char * word = "frame";

	/* 不允许下一行操作，行为未定义，导致内存访问错误 */
	/* word[1] = '1'; */
	printf("%c\n", *"frame");
	for (i = 0; i < 6; i++)
		putchar(*(word + i));
	putchar('\n');

	return 0;
}


/*
>>> Execution Result:
f
frame
 */
