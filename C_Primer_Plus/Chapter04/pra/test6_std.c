// 先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，
// 下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐。
// Melissa Honeybee
//       7        8
// 接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐。
// Melissa Honeybee
// 7       8
#include <stdio.h>
int main(void)
{
	char name[40], surname[40];
	int wname, wsurname;

	// 通过scanf()函数分别读取用户的名和姓
	printf("Please input your first name: ");
	scanf("%s", name);
	printf("Please input your last name: ");
	scanf("%s", surname);
	// 分别打印用户的名和姓，通过返回值记录其字符数量
	wname = printf("%s", name);
	printf(" ");
	wsurname = printf("%s", surname);
	// 打印其字符数量，由于数量不确定，因此使用*号修饰符和参数的形式
	// 如果使用strlen()函数，则可以不用定义wname和wsurname变量
	printf("\n%*d %*d\n", wname, wname, wsurname, wsurname);

	wname = printf("%s", name);
	printf(" ");
	wsurname = printf("%s", surname);
	printf("\n%-*d %-*d\n", wname, wname, wsurname, wsurname);

	return 0;
}
