// 读取一个浮点数，首先以小数点计数法打印，然后以指数
// 计数法打印，用下面的格式进行输出(系统不同，指数计数
// 法显示的位数可能不同):
// a. The input is 21.3 or 2.1e+001.
// b. The inpit is +21.290 or 2.129E+001.
#include <stdio.h>
int main(void)
{
	float f;

	printf("Please input a float number: ");
	scanf("%f", &f);

	printf("The input is %.1f or %.1e.\n", f, f);
	printf("The input is %.3f or %.3E.\n", f, f);

	return 0;
}
