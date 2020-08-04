// 提示用户输入名字，并执行以下操作
// a. 打印名字，包括双引号；
// b. 在宽度为20的字段右端打印名字，包扩双引号；
// c. 在宽度为20的字段左端打印名字，包括双引号；
// d. 在比姓名宽度宽3的字段中打印名字。
#include <stdio.h>
int main(void)
{
	char name[40];
	
	printf("Well, I,d like to know your name. ");
	printf("Please tell me...\n");
	scanf("%s", name);
	
	printf("Name: \"%s\"\n", name);
	printf("Name: \"%20s\"\n", name);
	printf("Name: \"%-20s\"\n", name);
	printf("Name: \"   %s\"\n", name);

	return 0;
}
