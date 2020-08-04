// 提示用户输入身高(单位:英寸)和姓名，然后以下
// 面的格式显示用户刚输入的信息:
// Dabney, you are 6.208 feet tall.
#include <stdio.h>
int main(void)
{
	char name[40];
	float heigh;

	printf("Please input your heigh(inch) and name:\n");
	scanf("%f%s", &heigh, name);

	printf("%s, you are %f feet tall.\n", name, heigh / 12.0);

	return 0;
}
