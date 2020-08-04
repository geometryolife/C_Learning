// 提示用户输入身高(单位:英寸)和姓名，然后以下
// 面的格式显示用户刚输入的信息:
// Dabney, you are 6.208 feet tall.
#include <stdio.h>
int main(void)
{
	float heigh;
	char name[40];

	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hi, %s how tall you are(cm): ", name);
	scanf("%f", &heigh);
	printf("%s, you are %.2f feet tall.\n", name, heigh / 30.0);

	return 0;
}
