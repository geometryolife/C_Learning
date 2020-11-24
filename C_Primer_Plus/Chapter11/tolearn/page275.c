/* 在字符串中测试指向char类型的指针 */
#include <stdio.h>

int main(void)
{
	char * pt1 = "Something is pointing at me.";

	/* "Something is pointing at me." 双引号括起来的内容被视为指向该字符
	串存储位置的指针。下面打印 "Something is pointing at me." 的首地址 */
	printf("%p\n", "Something is pointing at me.");
	/* 指针 pt1 指向 "Something is pointing at me." 的首地址 */
	puts(pt1);

	putchar('\n');
	while (pt1 < "Something is pointing at me." + 5)
	{
		printf("%p\n", pt1);
		puts(pt1);
		pt1++;
	}

	putchar('\n');
	puts("Something is pointing at me." + 5);
	puts(pt1);
	/* 指向 下标为3的第4个字母的地址。 */
	printf("%p\n", "Something is pointing at me." + 4);
	printf("%p\n", &pt1);

	return 0;
}


/*
>>> Execution Result:
0x400720
Something is pointing at me.

0x400720
Something is pointing at me.
0x400721
omething is pointing at me.
0x400722
mething is pointing at me.
0x400723
ething is pointing at me.
0x400724
thing is pointing at me.

hing is pointing at me.
hing is pointing at me.
0x400724
0x7ffe54d9d928
 */
