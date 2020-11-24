/* scan_str.c -- 使用 scanf() */
#include <stdio.h>
int main(void)
{
	char name1[11], name2[11];
	int count;

	printf("Please enter 2 names.\n");
	count = scanf("%5s %10s", name1, name2);
	printf("I read the %d names %s and %s.\n", count, name1, name2);

	return 0;
}


/*
第一个示例，两个名字的字符个数都未超过字段宽度。
第二个示例，只读入了 Applebottham 的前10个字段。
第三个示例，Portensia 的后4个字符 nsia 被写入 name2 中，因为第2次调用
scanf()时，从上一次调用结束的地方继续读取数据。
>>> Execution Result:
Please enter 2 names.
Jesse Jukes
I read the 2 names Jesse and Jukes.

Please enter 2 names.
Liza Applebottham
I read the 2 names Liza and Applebotth.

Please enter 2 names.
Portensia Callowit
I read the 2 names Porte and nsia.
 */
