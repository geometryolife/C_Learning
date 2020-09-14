#include <stdio.h>
int main(void)
{
	char * p1 = "Klingon";
	p1[0] = 'F';  /* OK ? */
	printf("Klingon");
	printf(": Because the %ss!\n", "Klingon");

	return 0;
}


/*
>>> Execution Result:
有的编译器无法打印出结果。
除非注释第 5 行。
建议在把指针初始化为字符串字面量时使用const限定符。
 */
