// 提示用户输入名字，并执行以下操作
// a. 打印名字，包括双引号；
// b. 在宽度为20的字段右端打印名字，包扩双引号；
// c. 在宽度为20的字段左端打印名字，包括双引号；
// d. 在比姓名宽度宽3的字段中打印名字。
#include <stdio.h>
int main(void)
{
	char name[40];
	int width;

	printf("Please Enter your name:");
	scanf("%s", name);
	// 打印用户输入的名字，使用转义序列\" 打印双引号
	// 并通过printf()函数的返回值获取名字的字符长度
	width = printf("\"%s\".\n", name);

	// printf()的返回值为打印字数，因此需要排除两个引号、
	// 一个换行符、一个句号，或者直接使用
	// width = string(name);
	width -= 4;

	// 在宽度为20的字段右端打印名字，使用转义序列打印双引号
	printf("\"%20s\".\n", name);

	// 在宽度为20的字段左端打印名字，使用转义序列打印双引号
	printf("\"%-20s\".\n", name);

	// 使用修饰符*，指定宽度参数，打印名字字符串
	printf("\"%*s\".\n", (width + 3), name);

	return 0;
}
