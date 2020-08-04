// 第 2 章的编程练习
#include <stdio.h>
// 姓名、地址分别用预编译指令定义
#define NAME "Joe Chen"
#define ADDRESS "No.11 Chengshou Street, Fengtai District, Beijing"
int main(void) {
	// 打印姓名
	printf("%s\n", NAME);
	// 打印地址
	printf("%s\n", ADDRESS);

	return 0;
}
