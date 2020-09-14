/* getsputs.c -- 使用gets()和puts() */
#include <stdio.h>
#define STLEN 81
int main(void)
{
	char words[STLEN];

	puts("Enter a string, please.");
	gets(words);  // 典型用法
	printf("Your string twice:\n");
	printf("%s\n", words);
	puts(words);
	puts("Done.");

	return 0;
}


/*
注意: 有些编译器会发出警告，gets()是不安全的函数，尽量避免使用。
gets()唯一的参数是words，它无法检查数组是否装得下输入行。数组名
会被转换成该数组首元素的地址，因此，gets()函数只知道数组的开始处，
并不知道数组中有多少个元素。
>>> Execution Result:
Enter a string, please.
I want to learn about string theory!
Your string twice:
I want to learn about string theory!
I want to learn about string theory!
Done.
 */
