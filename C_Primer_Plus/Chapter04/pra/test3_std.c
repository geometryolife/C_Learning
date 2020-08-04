// 读取一个浮点数，首先以小数点计数法打印，然后以指数
// 计数法打印，用下面的格式进行输出(系统不同，指数计数
// 法显示的位数可能不同):
// a. The input is 21.3 or 2.1e+001.
// b. The inpit is +21.290 or 2.129E+001.
#include <stdio.h>
int main(void)
{
	float input;

	// 读取用户输入的浮点数
	printf("Enter a float number: ");
	scanf("%f", &input);

	// 使用转换说明%f和%e分别打印普通浮点数和科学计数法
	// 格式浮点数，并且指定小数位数和字符宽度
	printf("The input is %.1f or %.1e\n", input, input);
	printf("The input is %.3f or %.3E\n", input, input);

	return 0;
}
