// 提示用户输入身高(单位:英寸)和姓名，然后以下
// 面的格式显示用户刚输入的信息:
// Dabney, you are 6.208 feet tall.
#include <stdio.h>
int main(void)
{
	float heigh;
	char name[40];

	printf("Enter your name: ");
	// scanf()函数读取用户输入的姓名，存入name[]数组中
	scanf("%s", name);
	printf("Hi %s how tall you are(inch): ", name);
	// scanf()读取用户输入的英寸数值，存入变量heigh中
	scanf("%f", &heigh);
	printf("%s, you are %.3f feet tall.\n", name, heigh / 12.0);

	return 0;
}
