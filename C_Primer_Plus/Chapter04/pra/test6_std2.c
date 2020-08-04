// 先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，
// 下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐。
// Melissa Honeybee
//       7        8
// 接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐。
// Melissa Honeybee
// 7       8
#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[40], surname[40];


	// 通过scanf()函数分别读取用户的名和姓
	printf("Please input your first name: ");
	scanf("%s", name);
	printf("Please input your last name: ");
	scanf("%s", surname);
	// 分别打印用户的名和姓
	printf("%s", name);
	printf(" ");
	printf("%s", surname);

	// 打印其字符数量，由于数量不确定，因此使用*号修饰符和参数的形式
	// 使用strlen()函数方式
	/*printf("\n%*d %*d\n", strlen(name), strlen(name), strlen(surname), strlen(surname));*/
	// 如果不创建变量直接用strlen()函数返回的是8个字节的%lu类型(类型自动提升)
	// 所以需要使用强制类型转换运算符进行降级(page108)
	printf("\n%*d %*d\n", (int) strlen(name), (int) strlen(name), (int) strlen(surname), (int) strlen(surname));

	// 分别打印用户的名和姓
	printf("%s", name);
	printf(" ");
	printf("%s", surname);
	printf("\n%-*d %-*d\n", (int) strlen(name), (int) strlen(name), (int) strlen(surname), (int) strlen(surname));

	// Test
	printf("%zd", sizeof(strlen(name)));

	return 0;
}
